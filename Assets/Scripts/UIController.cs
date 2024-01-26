using DG.Tweening;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreTxt,numBoomTxt , numSwordText,numLazeTxt;
    [SerializeField] Button useBoomBtn , useSwordBtn ,closeBtn , openSettingBtn , home;
    [SerializeField] GameOverPanel gameOverPanel;
    [SerializeField] GameController gameController;
    [SerializeField] SettingPanel settingPanel;
    [SerializeField] InGameBuyItemPanel buyPanel;
    [SerializeField] Transform hand;
    [SerializeField] Transform startHandMovePos;
    [SerializeField] HomeUIController homeUIController;
    private void Awake()
    {
        useBoomBtn.onClick.AddListener(OnUseBoomClick);
        useSwordBtn.onClick.AddListener(OnUseSwordSkill);
        openSettingBtn.onClick.AddListener(settingPanel.OpenPanel);
        home.onClick.AddListener(HomeBtnClick);
        UpdateInfoText();
    }
    public void ShowGameOverPanel()
    {
        gameOverPanel.ShowResult();
    }
    public void UpdateScore(int score)
    {
        scoreTxt.text = score.ToString();
    }

    public void UpdateInfoText()
    {
        if(PlayerData.NumBoom <= 0)
        {
            numBoomTxt.text = "+";
        }
        else
        {
            numBoomTxt.text = PlayerData.NumBoom.ToString();
        }
        if(PlayerData.NumSword <= 0)
        {
            numSwordText.text = "+";
        }
        else
        {
            numSwordText.text = PlayerData.NumSword.ToString();
        }


    }

    private void HomeBtnClick()
    {
        ConfirmDialog.Instance?.ShowDialog("Do you want back to home ", () =>
        {
            homeUIController.ShowUI();
        });
    }
    private void OnUseBoomClick()
    {
        if(PlayerData.NumBoom > 0)
        {
            gameController.UseBoomFruit();
            PlayerData.NumBoom--;
            UpdateInfoText();
        }
        else
        {
            buyPanel.Open(ItemType.Boom);
        }
    }

    private void OnUseSwordSkill()
    {
        if (PlayerData.NumSword > 0)
        {
            gameController.UseSwordSkill();
            PlayerData.NumSword--;
            UpdateInfoText();
        }
        else
        {
            buyPanel.Open(ItemType.Sword);
        }
    }
    Tween handCoroutine;
    public void PingItem()
    {
        if (handCoroutine != null)
        {
            return;
        }
        hand.gameObject.SetActive(true);


        hand.transform.position = startHandMovePos.position;
        handCoroutine =  hand.DOMove(hand.transform.position + new Vector3(0.5f, 0f) , 1f).SetLoops(-1, LoopType.Yoyo);
    }

    public void StopPingItem()
    {
        if(handCoroutine != null)
        {
            handCoroutine.Kill();
            handCoroutine = null;
        }
        hand.gameObject.SetActive(false);
    }


}
