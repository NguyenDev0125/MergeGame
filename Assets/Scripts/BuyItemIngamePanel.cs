using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BuyItemIngamePanel : MonoBehaviour
{
    public TextMeshProUGUI coinAmout, moneyAmont;
    public Button adBtn, purchaseBtn, buyGold , close;
    public Image icon1, icon2, icon3 , smal1, small2;
    public GameObject panel;
    Action callBack;
    Action onClose;
    public Sprite iconBomb;
    public Sprite iconSword;
    Sprite icon;
    private void Awake()
    {
        adBtn.onClick.AddListener(OnWatchAd);
        purchaseBtn.onClick.AddListener (OnPurchase);
        close.onClick.AddListener(Close);
        //buyGold.onClick.AddListener(OnBuyGold);
    }

    private void OnWatchAd()
    {
        ConfirmDialog.Instance.ShowDialog("Watch a ad to give reward", () =>
        {
            MaxManager.Instance.ShowInterAd(() =>
            {
                callBack?.Invoke();
            });
        } , icon , 1);
    }

    private void OnPurchase()
    {
        ConfirmDialog.Instance.ShowDialog("Do you want uy 10 item ?", () =>
        {

        }, icon, 10);
    }

    private void OnBuyGold()
    {

    }
    public void Open(int type , Action onClose)
    {

        this.gameObject.SetActive(true);
        if(type == 0)
        {
            icon = iconBomb;
        }
        else
        {
            icon = iconSword;
        }
        icon1.sprite = icon;
        icon2.sprite = icon;
        smal1.sprite = icon;
        small2.sprite = icon;
        this.onClose = onClose;
        //icon3.sprite = icon;
    }

    public void Close()
    {
        this.gameObject.SetActive(false);
        onClose?.Invoke();
    }
}
