using TMPro;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.UI;

public class InGameBuyItemPanel : MonoBehaviour
{
    [SerializeField] Button buy, watchAd;
    [SerializeField] Sprite bomb, sword;
    [SerializeField] Image icon1, icon2;
    [SerializeField] UIController uicontroller;
    [SerializeField] TextMeshProUGUI priceText;
    ItemType type;
    private void Awake()
    {
        watchAd.onClick.AddListener(WatchAdClick);
        buy.onClick.AddListener(Purchase);
        Purchaser.Instance.IAP_Manager.OnPurchaseCompleted += (Product product) =>
        {
            if (product.transactionID == Purchaser._10Bomb)
            {
                PlayerData.NumBoom += 10;
            }
            else if (product.transactionID == Purchaser._10Sword)
            {
                PlayerData.NumSword += 10;
            }
            uicontroller.UpdateInfoText();
        };
    }
    public void Open(ItemType type)
    {
        this.gameObject.SetActive(true);
        this.type = type;
        Sprite spr = (type == ItemType.Boom) ? bomb : sword;
        icon1.sprite = spr;
        icon2.sprite = spr;
        priceText.text = type == ItemType.Boom ? Purchaser.Instance.IAP_Manager.GetLocalizedPriceString(Purchaser._10Bomb) : Purchaser.Instance.IAP_Manager.GetLocalizedPriceString(Purchaser._10Sword);
    }

    public void Close()
    {
        this.gameObject.SetActive(false);
    }

    private void WatchAdClick()
    {
        Sprite spr = (type == ItemType.Boom) ? bomb : sword;
        ConfirmDialog.Instance.ShowDialog("Watch a ad to give reward ?", () =>
        {
            MaxManager.Instance.ShowInterAd(() =>
            {
                if (type == ItemType.Boom)
                {
                    PlayerData.NumBoom++;
                }
                else
                {
                    PlayerData.NumSword++;
                }
                uicontroller.UpdateInfoText();
            });
        }, spr);
    }

    private void Purchase()
    {
        Purchaser.Instance.IAP_Manager.Purchase(type == ItemType.Boom ? Purchaser._10Bomb : Purchaser._10Sword);
    }
}
