using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class UnlockNewFruitPanel : MonoBehaviour
{
    [SerializeField] Image fruitIcon;
    [SerializeField] Button buttonClose;
    [SerializeField] GameObject panel;
    [SerializeField] EffectController effectController;
    private void Awake()
    {
        buttonClose.onClick.AddListener(Close);
    }

    public void Open(Sprite spr)
    {
        fruitIcon.sprite = spr;
        this.gameObject.SetActive(true);
        panel.SetActive(false);
        SoundManager.Instance?.StopBGM();

        effectController.PlayFirework(() =>
        {
            panel.gameObject.SetActive(true);
            SoundManager.Instance.PlaySound(SoundName.Victory);
            SoundManager.Instance.PlaySound(SoundName.Clap);
        });
    }
    private void Close()
    {
        SoundManager.Instance?.PlayBGM();
        this.gameObject.SetActive(false);
        panel.gameObject.SetActive(true);
    }
}
