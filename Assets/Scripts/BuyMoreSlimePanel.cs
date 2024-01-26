
using DG.Tweening;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BuyMoreSlimePanel : MonoBehaviour
{
    [SerializeField] Button watchAd, watReward, removeAd ;
    [SerializeField] TextMeshProUGUI coolDownText;
    [SerializeField] Cloud cloud;
    Coroutine cooldown;
    private void Awake()
    {
        watchAd.onClick.AddListener(ShowAd);
        watReward.onClick.AddListener(ShowReward);
        removeAd.onClick.AddListener(RemoveAd);

        Purchaser.Instance.IAP_Manager.OnPurchaseCompleted += (product) =>
        {
            if (product.definition.id == Purchaser._removeAds)
            {
                PlayerData.RemoveAds = 1;
                cloud.SetNumText(PlayerData.NumSlime);
                Close();
            }
        };

    }
    public void Open()
    {
        this.gameObject.SetActive(true);
        cooldown = StartCoroutine(IE_CoolDown());
    }

    private IEnumerator IE_CoolDown()
    {
        for(int i = 5; i >= 0; i--)
        {
            yield return new WaitForSeconds(1);
            coolDownText.text = $"Auto charge in {i}s";
            
        }
        ShowAd();
    }
    private void Close()
    {
        this.gameObject.SetActive(false);
        StopCoroutine(cooldown);
    }

    private void ShowAd()
    {
        MaxManager.Instance.ShowInterAd(() =>
        {
            PlayerData.NumSlime += 50;
            Close();
            cloud.SetNumText(PlayerData.NumSlime);
            FirebaseManager.LogEvent("WatchInter");
        });
    }

    private void ShowReward()
    {
        StopCoroutine(cooldown);
        MaxManager.Instance.ShowReward(() =>
        {
            PlayerData.NumSlime += 300;
            cloud.SetNumText(PlayerData.NumSlime);
            Close();
            Debug.Log("Give 300");
            FirebaseManager.LogEvent("WatchReward");
        }); 
    }

    private void RemoveAd()
    {
        Purchaser.Instance.IAP_Manager.Purchase(Purchaser._removeAds);
        FirebaseManager.LogEvent("WatchRemoveAd");

    }
}
