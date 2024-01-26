using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class HomeUIController : MonoBehaviour
{
    [SerializeField] Button startBtn,noAds,shop,skinShop;
    [SerializeField] Transform logo;
    [SerializeField] FruitShop fruitShop;
    [SerializeField] ShopSkinPanel skinPanel;
    [SerializeField] private float floatingDistance = 0.2f;
    [SerializeField] private float floatingDuration = 2f;
    [SerializeField] HorizontalLayoutGroup horizontalLayoutGroup;
    Vector2 startBtnInitPos;
    [SerializeField] List<Transform> listBtn;
    [SerializeField] Ease buttonEase;
    [SerializeField] TextMeshProUGUI coin, boom, sword;
    [SerializeField] LoadingScreen loadingScreen;
    [SerializeField] protected Canvas MainCV;
    private void Awake()
    {
        Application.targetFrameRate = 60;
        startBtn.onClick.AddListener(delegate
        {
            HideUI();
        });
        startBtnInitPos = startBtn.transform.position;
        noAds.onClick.AddListener(OpenDialogNoAd);
        shop.onClick.AddListener(OpenFruitShop);
        skinShop.onClick.AddListener(OpenSkinShop);
        UpdateText();
    }
    private void Start()
    {
        if (PlayerData.IsFirstPlay)
        {
            FirebaseManager.LogEvent("FruitOpenHome");
        }
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
    public void HideUI()
    {
        this.MainCV.gameObject.SetActive(false);
        Debug.LogError("Done");
    }

    public void ShowUI()
    {
        this.MainCV.gameObject.SetActive(true);
    }
    private void OpenFruitShop()
    {
        fruitShop.ShowShop();
    }

    private void OpenDialogNoAd()
    {

    }

    private void OpenSkinShop()
    {
        skinPanel.Open();
    }
}
