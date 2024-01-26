using Sirenix.OdinInspector;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class FruitShop : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI coinText;
    [SerializeField] Button closeBtn;
    [SerializeField] Sprite iconBoom , iconSword;
    [SerializeField] HomeUIController homeUI;
    [SerializeField] Ricimi.Popup popup;
    [SerializeField] TextMeshProUGUI ultraPriceText, bombsPackPriceText, swordsPackPriceText;
    private void Awake()
    {
        Purchaser.Instance.IAP_Manager.OnPurchaseCompleted += OnPurchaseSuccess;
        closeBtn.onClick.AddListener(() =>this.gameObject.SetActive(false));
        ultraPriceText.text = Purchaser.Instance.IAP_Manager.GetLocalizedPriceString(Purchaser._utraPack);
        bombsPackPriceText.text = Purchaser.Instance.IAP_Manager.GetLocalizedPriceString(Purchaser._10Bomb);
        swordsPackPriceText.text = Purchaser.Instance.IAP_Manager.GetLocalizedPriceString(Purchaser._10Sword);
    }
    public void ShowShop()
    {
        this.gameObject.SetActive(true);
        popup.Open();
    }

    public void BuyCoin10Bomb()
    {
        int cost = 1000;
        if(EnoughCoin((int)cost))
        {
            ConfirmDialog.Instance.ShowDialog("Confirm buy this item", () =>
            {
                PlayerData.Coin -= (int)cost;
                PlayerData.NumBoom += 1;
                homeUI.UpdateText();
                SoundManager.Instance.PlaySound(SoundName.Coin);
            });
        }
    }
    public void BuyCoin10Sword()
    {
        int cost = 1000;
        if (EnoughCoin((int)cost))
        {
            ConfirmDialog.Instance.ShowDialog("Confirm buy this item", () =>
            {
                PlayerData.Coin -= (int)cost;
                PlayerData.NumBoom += 1;
                homeUI.UpdateText();
                SoundManager.Instance.PlaySound(SoundName.Coin);
            });
        }
    }

    public void WatAdBomb()
    {

        ConfirmDialog.Instance.ShowDialog("Watch a ads to receive item", () =>
        {
            MaxManager.Instance.ShowInterAd(() =>
            {
                PlayerData.NumBoom += 1;
                homeUI.UpdateText();
                SoundManager.Instance.PlaySound(SoundName.Coin);
            });
        });
    }
    public void WatAdSword()
    {
        ConfirmDialog.Instance.ShowDialog("Watch a ads to receive item", () =>
        {
            MaxManager.Instance.ShowInterAd(() =>
            {
                PlayerData.NumSword += 1;
                homeUI.UpdateText();
                SoundManager.Instance.PlaySound(SoundName.Coin);
            });
        });
    }

    public void PurchaseUltraPack()
    {
        Purchaser.Instance.IAP_Manager.Purchase(Purchaser._utraPack);
    }

    public void Purchase10Bomb()
    {
        Purchaser.Instance.IAP_Manager.Purchase(Purchaser._10Bomb);
    }
    public void Purchase10Sword()
    {
        Purchaser.Instance.IAP_Manager.Purchase(Purchaser._10Sword);
    }

    public void RemoveAd()
    {
        Purchaser.Instance.IAP_Manager.Purchase(Purchaser._removeAds);
    }
    private bool EnoughCoin(int coin)
    {
        return PlayerData.Coin >= coin;
    }

    private void OnPurchaseSuccess(Product product)
    {

        Debug.Log("Purchase " + product.definition.id);
        homeUI.UpdateText();
    }
}
