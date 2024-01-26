using System.Collections;
using TMPro;
using UnityEngine;

public class AutoShowAd : MonoBehaviour
{
    [SerializeField] float delayStartShowAd;
    [SerializeField] float delayShowAd;
    [SerializeField] SmallAdsPopup popup;
    private void Start()
    {
        if(PlayerData.RemoveAds == 1)
        {
            return;
        }
        Invoke("AutoShowAds",delayStartShowAd);
    }
    private void AutoShowAds()
    {
        StartCoroutine(IE_CountDown());
    }
    private IEnumerator IE_CountDown()
    {
        for (int i = 0; i < 30; i++)
        {
            popup.Open();
            yield return new WaitForSeconds(delayShowAd);
        }
    }


}
