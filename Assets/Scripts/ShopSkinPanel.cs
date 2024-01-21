using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopSkinPanel : MonoBehaviour
{
    [SerializeField] SkinShopItem skinShopItemPrb;
    [SerializeField] List<SpawnnerSkin> skinList;
    List<SkinShopItem> listItems;
    public void Open()
    {
        this.gameObject.SetActive(true);
    }
    public void Close()
    {
        this.gameObject.SetActive(false);
    }
    private void Awake()
    {
        listItems = new List<SkinShopItem>();
        for(int i = 0; i < skinList.Count; i++)
        {
            SkinShopItem clone = Instantiate(skinShopItemPrb);
            clone.SetItem(skinList[i] , this);
            clone.gameObject.SetActive(true);
            clone.transform.SetParent(skinShopItemPrb.transform.parent , false);  
            listItems.Add(clone);
        }
    }
    public void UpdateUI()
    {
        for(int i = 0; i < listItems.Count; ++i)
        {
            listItems[i].UpdateStatus();
        }
    }
}
