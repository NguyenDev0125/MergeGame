using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class StreakTextPopup : TextPopup
{
    public override void ShowText(string mgs, Vector2 pos)
    {
        StopAllCoroutines();
        textPrb.gameObject.SetActive(true);
        textPrb.transform.position = pos;
        textPrb.GetComponent<TextMeshProUGUI>().text = mgs;
        textPrb.transform.DOKill();
        textPrb.transform.localScale = startScale;
        textPrb.transform.DOScale(initScale, showDuration).SetEase(showEase).OnComplete(() =>
        {
            textPrb.transform.DOScale(Vector2.zero, hideDuration).SetDelay(displayTime).SetEase(hideEase).OnComplete(() =>
            {
                textPrb.gameObject.SetActive(!disableOnComplete);
            });
        });
    }
}
