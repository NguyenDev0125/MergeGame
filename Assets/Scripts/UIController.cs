using DG.Tweening;
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
        numBoomTxt.text = PlayerData.NumBoom.ToString();
        numSwordText.text = PlayerData.NumSword.ToString();

    }

    private void HomeBtnClick()
    {
        ConfirmDialog.Instance?.ShowDialog("Do you want back to home ", () =>
        {
            SceneManager.LoadScene("Home");
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

}
