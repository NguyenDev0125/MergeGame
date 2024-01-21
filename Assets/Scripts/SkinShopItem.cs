using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SkinShopItem : MonoBehaviour
{
    public TextMeshProUGUI nameText, desText , priceText;
    public Button buyBtn, activeBtn;
    public Image iconImg , slimeNeedToBuyIcon;
    SpawnnerSkin skin;
    ShopSkinPanel shopParent;
    public void SetItem(SpawnnerSkin skin , ShopSkinPanel shopParent)
    {
        this.skin = skin;
        this.shopParent = shopParent;
        UpdateStatus();
        slimeNeedToBuyIcon.sprite = FruitManager.GetFruitById(skin.slimeUnlockId).Sprite;
        priceText.text = skin.price.ToString();
        nameText.text = skin.skinName;
        iconImg.sprite = skin.sprite;
        desText.text = skin.skinDes;

        buyBtn.onClick.AddListener(Buy);
        activeBtn.onClick.AddListener(Active);
    }
    public void UpdateStatus()
    {
        if (skin.IsUnlocked() || skin.price == 0)
        {
            buyBtn.gameObject.SetActive(false);
            activeBtn.gameObject.SetActive(true);
        }
        else
        {
            buyBtn.gameObject.SetActive(true);
            activeBtn.gameObject.SetActive(false);
        }

        if(PlayerData.SelectedSkin == skin.skinId)
        {
            activeBtn.gameObject.SetActive(false);
        }
        else
        {
            activeBtn.gameObject.SetActive(true);
        }
    }
    private void Buy()
    {
        ConfirmDialog.Instance.ShowDialog("Do you want buy this items ?", () =>
        {
            if (PlayerData.GetNumSlimeById(skin.slimeUnlockId) >= skin.price)
            {
                PlayerData.SetNumSlime(skin.slimeUnlockId, PlayerData.GetNumSlimeById(skin.slimeUnlockId) - skin.price);
                skin.UnLock();
                shopParent.UpdateUI();
            }
        } , FruitManager.GetFruitById(skin.slimeUnlockId).Sprite , skin.price);

    }

    private void Active()
    {
        PlayerData.SelectedSkin = skin.skinId;
        shopParent.UpdateUI();
    }
}
