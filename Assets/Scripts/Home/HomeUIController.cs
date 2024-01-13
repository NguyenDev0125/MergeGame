using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HomeUIController : MonoBehaviour
{
    [SerializeField] Button startBtn,noAds,shop,earnCoin;
    [SerializeField] Transform logo;
    [SerializeField] FruitShop fruitShop;
    [SerializeField] private float floatingDistance = 0.2f;
    [SerializeField] private float floatingDuration = 2f;
    [SerializeField] HorizontalLayoutGroup horizontalLayoutGroup;
    Vector2 startBtnInitPos;
    [SerializeField] List<Transform> listBtn;
    [SerializeField] Ease buttonEase;
    [SerializeField] TextMeshProUGUI coin, boom, sword;
    private void Awake()
    {
        startBtn.onClick.AddListener(StartGame);
        startBtnInitPos = startBtn.transform.position;
        noAds.onClick.AddListener(OpenDialogNoAd);
        shop.onClick.AddListener(OpenFruitShop);
        earnCoin.onClick.AddListener(OpenEarnCoinPanel);
        UpdateText();
    }
    private void Start()
    {
        float targetY = startBtnInitPos.y + floatingDistance;
        startBtn.transform.DOMoveY(targetY, floatingDuration)
            .SetLoops(-1, LoopType.Yoyo)
            .SetEase(Ease.InOutQuad);
        logo.transform.DOMoveY(logo.transform.position.y - floatingDistance, floatingDuration+1)
    .SetLoops(-1, LoopType.Yoyo)
    .SetEase(Ease.InOutQuad);
        StartCoroutine(ShowListBtn());
    }

    private IEnumerator ShowListBtn()
    {
        List<Vector2> listInitPos = new List<Vector2>();

        for(int i = 0;i < listBtn.Count;i++)
        {
            listInitPos.Add(listBtn[i].position);
            listBtn[i].position -= new Vector3(0, 3f);
        }
        horizontalLayoutGroup.enabled = false;
        yield return new WaitForSeconds(1f);
        for(int i = 0; i < listBtn.Count; i++)
        {
            listBtn[i].DOMove(listInitPos[i],1.2f).SetEase(buttonEase);
            yield return new WaitForSeconds(0.2f);
        }
    }
    public void UpdateText()
    {
        coin.text = PlayerData.Coin.ToString();
        boom.text = PlayerData.NumBoom.ToString();
        sword.text = PlayerData.NumSword.ToString();
    }
    private void StartGame()
    {
        int map = PlayerPrefs.GetInt("map_selected", 0);
        if(map == 0)
        {
            SceneManager.LoadScene("Map0");
        }
        else if(map == 1)
        {
            SceneManager.LoadScene("Map1");
        }

    }

    private void OpenFruitShop()
    {
        fruitShop.ShowShop();
    }

    private void OpenDialogNoAd()
    {

    }

    private void OpenEarnCoinPanel()
    {

    }
}
