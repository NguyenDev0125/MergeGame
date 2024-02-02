using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameOverPanel : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreTxt;
    [SerializeField] TextMeshProUGUI highScoreTxt;
    [SerializeField] TextMeshProUGUI goldTxt;
    [SerializeField] Button restartBtn;
    [SerializeField] Button homeBtn;
    [SerializeField] ScoreManager scoreManager;
    [SerializeField] GameObject panel;
    [SerializeField] EffectController effectController;
    [SerializeField] HomeUIController homeUIController;
    bool isShow = false;
    private void Awake()
    {
        restartBtn.onClick.AddListener(RestartGame);
        homeBtn.onClick.AddListener(GoHome);
    }
    public void ShowResult()
    {
        if (isShow) return;
        isShow = true;
        scoreTxt.text =  scoreManager.GetScore().ToString();

        goldTxt.text = PlayerData.Coin.ToString();
        panel.SetActive(true);
        this.gameObject.SetActive(true);
        SoundManager.Instance.StopBGM();
        SoundManager.Instance.PlaySound(SoundName.GameOver);
        panel.transform.position -= new Vector3(0, 3f);
        this.gameObject.SetActive(true);
        if(scoreManager.GetScore() > scoreManager.GetHighScore())
        {
            panel.SetActive(false);
            scoreManager.SaveHighScore(scoreManager.GetScore());
            effectController.PlayFirework(() =>
            {
                panel.SetActive(true);
                panel.transform.DOMoveY(0f, 0.6f).SetEase(Ease.OutQuart).OnComplete(() =>
                {
                    SoundManager.Instance.PlaySound(SoundName.Win);
                    SoundManager.Instance.PlaySound(SoundName.Victory);
                    SoundManager.Instance.PlaySound(SoundName.Clap);
                });
            });

        }
        else
        {
            panel.SetActive(true);
            panel.transform.DOMoveY(0f, 0.6f).SetEase(Ease.OutQuart).OnComplete(() =>
            {
                SoundManager.Instance.PlaySound(SoundName.Win);
            });
        }
        highScoreTxt.text = scoreManager.GetHighScore().ToString();
    }

    public void Hide()
    {
        this.gameObject.SetActive(false);
        SoundManager.Instance.PlayBGM();
    }

    private void GoHome()
    {
        homeUIController.ShowUI();
        SoundManager.Instance.PlayBGM();
    }

    private void RestartGame()
    {
        int map = PlayerPrefs.GetInt("map_selected", 0);
        if (map == 0)
        {
            SceneManager.LoadScene("Map0");
        }
        else if (map == 1)
        {
            SceneManager.LoadScene("Map1");
        }
        SoundManager.Instance.PlayBGM();
    }
}
