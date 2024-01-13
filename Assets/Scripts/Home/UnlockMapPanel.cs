using System;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class UnlockMapPanel : MonoBehaviour
{
    public Image imagePreview , lockImage;
    public ScrollRect scrollRect;
    public FruitItem itemPrb;
    public Button closeBtn;
    public GameObject panel;
    public List<Map> maps;
    public Button next, back, preview,buyMoney , buyCoin;
    public TextMeshProUGUI coinText, moneyText , mapNameText;
    Map map;
    int mapSelected = 0;
    int mapIndex = 0;
    private void Awake()
    {
        closeBtn.onClick.AddListener(Hide);
        mapSelected = PlayerPrefs.GetInt("map_selected", 0);
        SelectMap(mapSelected);
        preview.onClick.AddListener(ShowListFruit);
        next.onClick.AddListener(() =>
        {
            Debug.Log("Next");
            SelectMap(Mathf.Abs(++mapSelected));
        });
        back.onClick.AddListener(() =>
        {
            mapSelected--;
            SelectMap(Mathf.Abs(maps.Count - mapSelected));
        });
        buyCoin.onClick.AddListener(OnBuyCoinClick);
        buyMoney.onClick.AddListener(OnBuyMoneyClick);
    }
    private void ShowListFruit()
    {
        imagePreview.sprite = map.imagePreview;
        for (int i = map.fruits.Count-1; i >= 0; i--)
        {
            FruitItem item = Instantiate(itemPrb, scrollRect.content);
            bool unLocked = PlayerPrefs.GetInt("fruit_" + map.id+ map.fruits[i].id.ToString()) == 1 || map.fruits[i].defaultUnlocked;
            item.SetItem(unLocked, map.fruits[i].fruitName, map.fruits[i].Sprite);
            item.gameObject.SetActive(true);
        }
        coinText.text = map.coinPrice.ToString();
        moneyText.text = map.moneyPrice.ToString() + "$";
        panel.gameObject.SetActive(true);

    }
    private void Hide()
    {
        foreach(Transform t in scrollRect.content)
        {
            t.gameObject.SetActive(false);
        }
        panel.gameObject.SetActive(false);
    }
 
    public void SelectMap(int mapIndex)
    {
        this.mapIndex = mapIndex;
        map = maps[mapIndex % maps.Count];
        imagePreview.sprite = map.imagePreview;
        mapNameText.text = map.mapName;
        if (PlayerPrefs.GetInt("map"+map.id,0) == 1 || map.defaultUnlocked)
        {
            PlayerPrefs.SetInt("map_selected", map.id);
            lockImage.gameObject.SetActive(false);
        }
        else
        {
            lockImage.gameObject.SetActive(true);
        }
    }
    private void UnlockMap()
    {
        PlayerPrefs.SetInt("map" + map.id, 1);
        PlayerPrefs.SetInt("map_selected", map.id);
    }
    private void OnBuyCoinClick()
    {
        if(PlayerData.Coin > map.coinPrice)
        {
            ConfirmDialog.Instance.ShowDialog("Confirm unlock this map ?", () =>
            {
                PlayerData.Coin -= map.coinPrice;
                SoundManager.Instance.PlaySound(SoundName.Coin);
                Hide();
                UnlockMap();
                SelectMap(mapIndex);
            });
        }
        else
        {
            ConfirmDialog.Instance.ShowDialog("Not enough coin", null);
        }
    }

    private void OnBuyMoneyClick()
    {

    }
}
[Serializable]
public class Map
{
    public int id;
    public string mapName;
    public bool defaultUnlocked = false;
    public bool isUnlocked = false;
    public Sprite imagePreview;
    public List<Fruit> fruits;
    public int coinPrice;
    public float moneyPrice;
}
