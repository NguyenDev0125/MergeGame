using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SmallAdsPopup : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI cooldownText;
    [SerializeField] Cloud cloud;
    Coroutine cooldown;
    public void Open()
    {
        this.gameObject.SetActive(true);
        cooldown =  StartCoroutine(IE_CoolDownShowAd());
    }

    private IEnumerator IE_CoolDownShowAd()
    {
        for(int i = 3; i >= 0; i--)
        {
            cooldownText.text = $"Ads {i}s";
            yield return new WaitForSeconds(1);
        }
        MaxManager.Instance.ShowInterAd(() =>
        {
            PlayerData.NumSlime += 50;
            cloud.SetNumText(PlayerData.NumSlime);
        });
        Close();
    }
    private void Close()
    {
        StopCoroutine(cooldown);
        this.gameObject.SetActive(false);
    }
}
