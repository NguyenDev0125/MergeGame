using System.Collections;
using TMPro;
using UnityEngine;

public class AutoShowAd : MonoBehaviour
{
    [SerializeField] float delayStartShowAd;
    [SerializeField] float delayShowAd;
    [SerializeField] TextMeshProUGUI breakingTimeText;
    private void Start()
    {
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
            StartCoroutine(IE_ShowAd());
            yield return new WaitForSeconds(delayShowAd);
        }
    }

    private IEnumerator IE_ShowAd()
    {
        breakingTimeText.gameObject.SetActive(true);
        for(int i = 7; i >= 0; i--)
        {
            breakingTimeText.text = $"Breaking time after {i}s";
            yield return new WaitForSeconds(1f);
        }
        breakingTimeText.gameObject.SetActive(false);
        MaxManager.Instance.ShowInterAd();
    }

}
