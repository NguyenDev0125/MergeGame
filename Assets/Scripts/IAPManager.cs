using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;
using UnityEngine.Purchasing.Security;

public class IAPManager : IDetailedStoreListener
{

    public void OnInitializeFailed(InitializationFailureReason error)
    {

    }

    public void OnInitializeFailed(InitializationFailureReason error, string message)
    {

    }
    public enum State { PendingInitialize, Initializing, SuccessfullyInitialized, FailedToInitialize };

    private static IAPManager m_instance = null;
    public static IAPManager Instance
    {
        get
        {
            if (m_instance == null)
                m_instance = new IAPManager();

            return m_instance;
        }
    }

    private State m_initializationState = State.PendingInitialize;
    public State InitializationState { get { return m_initializationState; } }
    public bool IsInitialized { get { return m_initializationState == State.SuccessfullyInitialized; } }

    public delegate void InitializationCallback(bool success);
    private InitializationCallback m_onInitialized;
    public event InitializationCallback OnInitialized
    {
        add
        {
            if (m_initializationState == State.SuccessfullyInitialized || m_initializationState == State.FailedToInitialize)
                value?.Invoke(m_initializationState == State.SuccessfullyInitialized);
            else
                m_onInitialized += value;
        }
        remove { m_onInitialized -= value; }
    }

    public delegate void CompletedPurchaseCallback(Product product);
    public CompletedPurchaseCallback OnPurchaseCompleted;

    public delegate void FailedPurchaseCallback(Product product, PurchaseFailureReason failureReason);
    public FailedPurchaseCallback OnPurchaseFailed;
    
    public delegate void FailedPurchaseDescriptionCallback(Product product, PurchaseFailureDescription failureReason);
    public FailedPurchaseDescriptionCallback OnPurchaseFailedDescription;

    public delegate void NativeIAPWindowClosedCallback();
    private NativeIAPWindowClosedCallback onIAPWindowClosed;

    public delegate void NativeRestoreWindowClosedCallback(bool success);
    private NativeRestoreWindowClosedCallback onRestoreWindowClosed;

    private IStoreController storeController;
    private IExtensionProvider storeExtensions;
#pragma warning disable IDE0044
    private CrossPlatformValidator purchaseValidator;
#pragma warning restore IDE0044

    public void Initialize()
    {
        Initialize(null, true);
    }

    public void Initialize(params ProductDefinition[] products)
    {
        Initialize(products, false);
    }

    public void Initialize(IEnumerable<ProductDefinition> products)
    {
        Initialize(products, false);
    }

    private void Initialize(IEnumerable<ProductDefinition> products, bool initializeWithIAPCatalog)
    {
        if (m_initializationState != State.PendingInitialize)
        {
            Debug.LogWarning("IAP is already initializing!");
            return;
        }

#if UNITY_EDITOR
        // Allows simulating failed IAP transactions in the Editor
        StandardPurchasingModule.Instance().useFakeStoreUIMode = FakeStoreUIMode.StandardUser;
#endif

        ConfigurationBuilder builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        if (initializeWithIAPCatalog)
            IAPConfigurationHelper.PopulateConfigurationBuilder(ref builder, ProductCatalog.LoadDefaultCatalog());
        else if (products != null)
            builder.AddProducts(products);

        if (StandardPurchasingModule.Instance().appStore == AppStore.GooglePlay)
            builder.Configure<IGooglePlayConfiguration>().SetDeferredPurchaseListener(OnDeferredPurchase);

        m_initializationState = State.Initializing;
        UnityPurchasing.Initialize(this, builder);
    }

    public void Purchase(string productID, NativeIAPWindowClosedCallback onIAPWindowClosed = null)
    {
        if (!IsInitialized)
        {
            Debug.LogWarning("IAP isn't initialized yet, can't purchased items!");
            onIAPWindowClosed?.Invoke();

            return;
        }

        this.onIAPWindowClosed = onIAPWindowClosed;
        storeController.InitiatePurchase(productID);
    }

    public void RestorePurchases(NativeRestoreWindowClosedCallback onRestoreWindowClosed = null)
    {
        if (!IsInitialized)
        {
            Debug.LogWarning("IAP isn't initialized yet, can't restore purchases!");
            onRestoreWindowClosed?.Invoke(false);

            return;
        }

        this.onRestoreWindowClosed = onRestoreWindowClosed;

        switch (StandardPurchasingModule.Instance().appStore)
        {
            case AppStore.AppleAppStore: storeExtensions.GetExtension<IAppleExtensions>().RestoreTransactions((success, des) => OnNativeRestoreWindowClosed(success, des)); break;
            case AppStore.GooglePlay: storeExtensions.GetExtension<IGooglePlayStoreExtensions>().RestoreTransactions((success, des) => OnNativeRestoreWindowClosed(success, des)); break;
        }
    }
    public string GetLocalizedPriceString(string iapID)
    {
#if UNITY_EDITOR
        return "0.01$";
#endif
        //Debug.Log("GetLocalizedPriceString:"+ iapID);
        var product = storeController.products.WithID(iapID);
        //Debug.Log("GetLocalizedPriceString:" + product);
        //Debug.Log("GetLocalizedPriceString:" + product.metadata.localizedPriceString);
        if (product != null)
        {
            return product.metadata.localizedPriceString;
        }
        else
        {
            return "0.01$";
        }


    }
    public bool IsNonConsumablePurchased(string productID)
    {
        if (!IsInitialized)
        {
            Debug.LogWarning("IAP isn't initialized yet, can't check previous purchases!");
            return false;
        }

        if (string.IsNullOrEmpty(productID))
        {
            Debug.LogWarning("Empty productID is passed!");
            return false;
        }

        Product product = storeController.products.WithID(productID);
        if (product == null)
        {
            Debug.LogWarning("IAP Product not found: " + productID);
            return false;
        }

        return product.hasReceipt && IsPurchaseValid(product);
    }
    // public void OnInitializeFailed(InitializationFailureReason error, string message){

    // }
    void IStoreListener.OnInitialized(IStoreController storeController, IExtensionProvider storeExtensions)
    {
        this.storeController = storeController;
        this.storeExtensions = storeExtensions;

        if (StandardPurchasingModule.Instance().appStore == AppStore.AppleAppStore)
            storeExtensions.GetExtension<IAppleExtensions>().RegisterPurchaseDeferredListener(OnDeferredPurchase);

        // The CrossPlatform validator only supports Google Play and Apple App Store
        switch (StandardPurchasingModule.Instance().appStore)
        {
            case AppStore.GooglePlay:
            case AppStore.AppleAppStore:
            case AppStore.MacAppStore:
                {
#if !UNITY_EDITOR
				//byte[] appleTangleData = AppleStoreKitTestTangle.Data(); // While testing with StoreKit Testing
				// byte[] appleTangleData = AppleTangle.Data();
				// purchaseValidator = new CrossPlatformValidator( GooglePlayTangle.Data(), appleTangleData, Application.identifier );
#endif
                    break;
                }
        }

        m_initializationState = State.SuccessfullyInitialized;
        m_onInitialized?.Invoke(true);
    }

    void IStoreListener.OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.LogWarning("IAP initialization failed: " + error);

        m_initializationState = State.FailedToInitialize;
        m_onInitialized?.Invoke(false);
    }

    PurchaseProcessingResult IStoreListener.ProcessPurchase(PurchaseEventArgs purchaseEvent)
    {
        try
        {
            Product product = purchaseEvent.purchasedProduct;
            if (IsPurchaseValid(product))
            {
                if (StandardPurchasingModule.Instance().appStore == AppStore.GooglePlay && storeExtensions.GetExtension<IGooglePlayStoreExtensions>().IsPurchasedProductDeferred(product))
                {
                    // The purchase is deferred; therefore, we do not unlock the content or complete the transaction.
                    // ProcessPurchase will be called again once the purchase is completed
                    return PurchaseProcessingResult.Pending;
                }
                if (product.definition.id == Purchaser._utraPack)
                {
                    PlayerData.NumSword += 10;
                    PlayerData.NumBoom += 10;
                }
                else if (product.definition.id == Purchaser._10Bomb)
                {
                    PlayerData.NumBoom += 10;
                }
                else if (product.definition.id == Purchaser._10Sword)
                {
                    PlayerData.NumSword += 10;
                }
                else if (product.definition.id == Purchaser._removeAds)
                {
                    PlayerData.RemoveAds = 1;
                }
                OnPurchaseCompleted?.Invoke(product);
            }

            return PurchaseProcessingResult.Complete;
        }
        finally
        {
            OnNativeIAPWindowClosed();
        }
    }

    void IStoreListener.OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.LogWarning($"IAP purchase failed for '{product.definition.id}': {failureReason}");

        OnPurchaseFailed?.Invoke(product, failureReason);
        OnNativeIAPWindowClosed();
    }
    void IDetailedStoreListener.OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
    {
        Debug.LogWarning($"IAP purchase failed for '{product.definition.id}': {failureDescription}");

        OnPurchaseFailedDescription?.Invoke(product, failureDescription);
        OnNativeIAPWindowClosed();
    }
    private void OnDeferredPurchase(Product product)
    {
        Debug.Log($"IAP purchase of {product.definition.id} is deferred");
        OnNativeIAPWindowClosed();
    }

    private bool IsPurchaseValid(Product product)
    {
        if (purchaseValidator != null)
        {
            try
            {
                purchaseValidator.Validate(product.receipt);
            }
            catch (IAPSecurityException reason)
            {
                Debug.LogWarning("Invalid IAP receipt: " + reason);
                return false;
            }
        }

        return true;
    }

    private void OnNativeIAPWindowClosed()
    {
        try
        {
            onIAPWindowClosed?.Invoke();
            onIAPWindowClosed = null;
        }
        catch (Exception e)
        {
            Debug.LogException(e);
        }
    }

    private void OnNativeRestoreWindowClosed(bool success, string des)
    {
        Debug.Log("IAP purchases restored: " + success);
        Debug.Log("Description: " + des);
        try
        {
            onRestoreWindowClosed?.Invoke(success);
            onRestoreWindowClosed = null;
        }
        catch (Exception e)
        {
            Debug.LogException(e);
        }
    }
}
