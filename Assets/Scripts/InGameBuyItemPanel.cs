using UnityEngine;
using UnityEngine.UI;

public class InGameBuyItemPanel : MonoBehaviour
{
    [SerializeField] Button buy, watchAd;
    [SerializeField] Sprite bomb, sword;
    [SerializeField] Image icon1, icon2;
    [SerializeField] UIController uicontroller;
    ItemType type;
    private void Awake()
    {
        watchAd.onClick.AddListener(WatchAdClick);
        buy.onClick.AddListener(Purchase);
    }
    public void Open(ItemType type)
    {
        this.gameObject.SetActive(true);
        this.type = type;
        Sprite spr = (type == ItemType.Boom) ? bomb : sword;
        icon1.sprite = spr;
        icon2.sprite = spr;
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
        Debug.Log("IAP");
    }
}
