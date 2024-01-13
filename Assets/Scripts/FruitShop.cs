using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class FruitShop : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI coinText;
    [SerializeField] Button closeBtn;
    [SerializeField] Sprite iconBoom , iconSword;
    [SerializeField] HomeUIController homeUI;
    [SerializeField] Ricimi.Popup popup;
    private void Awake()
    {
        closeBtn.onClick.AddListener(() =>this.gameObject.SetActive(false));
    }
    public void ShowShop()
    {
        this.gameObject.SetActive(true);
        popup.Open();
    }
    public void BuyItem(ItemType item, BuyType buyType , int num , float coin , float money)
    {
        switch (buyType)
        {
            case BuyType.Money: BuyItemByMoney(item, num, money); break;
            case BuyType.Coin: BuyItemByCoin(item, num, coin); break;
            case BuyType.WatchAd: BuyItemByWatchAd(item); break;
        }
    }

    private void BuyItemByCoin(ItemType item , int num , float cost)
    {
        if(EnoughCoin((int)cost))
        {
            PlayerData.Coin -= (int)cost;
            switch(item)
            {
                case ItemType.Pack:
                    PlayerData.NumBoom += num;
                    PlayerData.NumSword += num;
                    break;
                case ItemType.Boom:
                    PlayerData.NumBoom += num;
                    break;
                case ItemType.Sword:
                    PlayerData.NumSword += num;
                    break;
            }
            homeUI.UpdateText();
            SoundManager.Instance.PlaySound(SoundName.Coin);
        }
    }

    private void BuyItemByMoney(ItemType item , int num , float cost)
    {

    }
    private void BuyItemByWatchAd(ItemType item)
    {
        ConfirmDialog.Instance.ShowDialog("Watch 1 ad to receive this reward?", () =>
        {
            MaxManager.Instance.ShowInterAd(() =>
            {
                if (item == ItemType.Boom)
                {
                    PlayerData.NumBoom++;
                }
                else if (item == ItemType.Sword)
                {
                    PlayerData.NumSword++;
                }
                homeUI.UpdateText();
                SoundManager.Instance.PlaySound(SoundName.Coin);
            });
        } , item == ItemType.Boom ? iconBoom : iconSword );

    }

    private bool EnoughCoin(int coin)
    {
        return PlayerData.Coin >= coin;
    }
}
