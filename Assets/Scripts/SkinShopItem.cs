using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SkinShopItem : MonoBehaviour
{
    public TextMeshProUGUI nameText, desText , priceText , numSlimeText;
    public Button buyBtn, activeBtn , purchaseBtn;
    public Image iconImg , iconImg2, slimeNeedToBuyIcon;
    public Sprite lockSpr;
    SpawnnerSkin skin;
    ShopSkinPanel shopParent;
    private void Awake()
    {

        buyBtn.onClick.AddListener(Buy);
        activeBtn.onClick.AddListener(Active);
    }
    public void SetItem(SpawnnerSkin skin , ShopSkinPanel shopParent)
    {
        this.skin = skin;
        this.shopParent = shopParent;
        UpdateStatus();
        priceText.text = skin.price.ToString();
        nameText.text = skin.skinName;
        iconImg.sprite = skin.sprite;
        desText.text = skin.skinDes;
        if (PlayerPrefs.GetInt("fruit_" + skin.slimeUnlockId, 0) == 1 || FruitManager.GetFruitById(skin.slimeUnlockId).defaultUnlocked == true)
        {
            slimeNeedToBuyIcon.sprite = FruitManager.GetFruitById(skin.slimeUnlockId).Sprite;
            iconImg2.sprite = slimeNeedToBuyIcon.sprite;
        }
        else
        {
            slimeNeedToBuyIcon.sprite = lockSpr;
            iconImg2.sprite = slimeNeedToBuyIcon.sprite;
        }

        //purchaseBtn.onClick.AddListener(Purchase);
    }
    public void UpdateStatus()
    {
        if(PlayerPrefs.GetInt("fruit_" + skin.slimeUnlockId, 0) == 1 || FruitManager.GetFruitById(skin.slimeUnlockId).defaultUnlocked == true)
        {
            slimeNeedToBuyIcon.sprite = FruitManager.GetFruitById(skin.slimeUnlockId).Sprite;
            iconImg2.sprite = slimeNeedToBuyIcon.sprite;
        }
        else
        {
            slimeNeedToBuyIcon.sprite = lockSpr;
            iconImg2.sprite = slimeNeedToBuyIcon.sprite;
        }
        if (skin.IsUnlocked() || skin.price == 0)
        {
            buyBtn.gameObject.SetActive(false);
            //purchaseBtn.gameObject.SetActive(false);
            activeBtn.gameObject.SetActive(true);
        }
        else
        {
            buyBtn.gameObject.SetActive(true);
            //purchaseBtn.gameObject.SetActive(true);
            activeBtn.gameObject.SetActive(false);
        }

        if(PlayerData.SelectedSkin == skin.skinId)
        {
            activeBtn.gameObject.SetActive(false);
        }
        else if(skin.IsUnlocked())
        {
            activeBtn.gameObject.SetActive(true);
        }
        numSlimeText.text = "Have : " + PlayerData.GetNumSlimeById(skin.slimeUnlockId);
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
