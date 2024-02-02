using System.Collections;
using TMPro;
using UnityEngine;

public class AutoShowAd : MonoBehaviour
{
    [SerializeField] SmallAdsPopup popup;
    [SerializeField] TextMeshProUGUI adText;
    [SerializeField] RemoveAdPopup removeAdPopup;
    private void Start()
    {
        if(PlayerData.RemoveAds == 1)
        {
            return;
        }
        StartCoroutine(IE_CountDown());
    }

    private IEnumerator IE_CountDown()
    {
        for (int i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(FirebaseRemoteConfigManager.delayAdTime);
            if(PlayerData.RemoveAds == 0)
            {
                StartCoroutine(CooldownShowAd());
            }

        }
    }
    private IEnumerator CooldownShowAd()
    {
        adText.gameObject.SetActive(true);
        for (int i = 4; i >= 0; i--)
        {
            adText.text = $"Breaking time in {i}s";
            yield return new WaitForSeconds(1);
        }
        adText.gameObject.SetActive(false);
        MaxManager.Instance.ShowInterAd(() =>
        {
            int random = UnityEngine.Random.Range(0, 2);
            if(random == 1)
            {
                removeAdPopup.Open();
            }
        });
    }


}
