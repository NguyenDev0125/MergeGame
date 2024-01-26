using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class SettingPanel : MonoBehaviour
{
    [SerializeField] Slider soundSlider , musicSlider;
    [SerializeField] Button vibrateBtn, closeBtn;
    [SerializeField] Sprite on, off;
    [SerializeField] Button privacy, privacySetting;
    private void Awake()
    {
        closeBtn.onClick.AddListener(ClosePanel);
        vibrateBtn.onClick.AddListener(ChangeVibrateState);

        soundSlider.onValueChanged.AddListener(OnSoundSlideChange);
        musicSlider.onValueChanged.AddListener(OnMusicSlideChange);

        if (PlayerData.Vibrate)
        {
            vibrateBtn.image.sprite = on;
        }
        else
        {
            vibrateBtn.image.sprite = off;
        }
        soundSlider.value = PlayerData.Sound;
        musicSlider.value = PlayerData.Music;

        privacy.onClick.AddListener(ManageExistingPrivacySetting);
    }

    private void ManageExistingPrivacySetting()
    {

        if(AdsUltil.IsGDPRRegion())
        {
            // ta am
            AdsUltil.LoadAndShowCMPFlow((result, message) =>
            {
                if(result == false)
                {
                    // success
                }
            });
        }
        else
        {
            // 
        }
    }
    private void ClosePanel()
    {
        this.gameObject.SetActive(false);
    }
    public void OpenPanel()
    {
        this.gameObject.SetActive(true);
    }
    private void ChangeVibrateState()
    {
        if(PlayerData.Vibrate)
        {
            vibrateBtn.image.sprite = off;
            PlayerData.Vibrate = false;
        }
        else
        {
            vibrateBtn.image.sprite= on;
            PlayerData.Vibrate = true;
        }
    }

    private void OnSoundSlideChange(float value)
    {
        PlayerData.Sound = value;
        SoundManager.Instance.ChangeSoundVolume(value);
    }

    private void OnMusicSlideChange(float value)
    {
        PlayerData.Music = value;
        SoundManager.Instance.ChangeMusicVolume(value);
    }

    public void Close()
    {
        this.gameObject.SetActive(false);
    }
}
