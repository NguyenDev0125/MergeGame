using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ConfirmDialog : MonoSingleton<ConfirmDialog>
{
    [SerializeField] TextMeshProUGUI questText , numText;
    [SerializeField] Button confirmBtn, cancelBtn, closeBtn;
    [SerializeField] Image iconImage;
    protected override void Awake()
    {
        base.Awake();
        HideDialog();
        DontDestroyOnLoad(this.gameObject);
        closeBtn.onClick.AddListener(HideDialog);
        cancelBtn.onClick.AddListener(HideDialog);
    }
    private void HideDialog()
    {
        this.gameObject.SetActive(false);
    }
    public void ShowDialog(string quest, Action OnConfirmCallBack ,Sprite icon = null , int num = 1)
    {
        HideDialog();
        questText.text = quest;
        
        if(icon != null)
        {
            iconImage.sprite = icon;
            iconImage.gameObject.SetActive(true);
            numText.text = num.ToString();
        }
        else
        {
            iconImage.gameObject.SetActive(false);
        }
        confirmBtn.onClick.RemoveAllListeners();
        confirmBtn.onClick.AddListener(() =>
        {
            HideDialog();
            OnConfirmCallBack?.Invoke();
        });
        this.gameObject.SetActive(true);
    }

    
}
