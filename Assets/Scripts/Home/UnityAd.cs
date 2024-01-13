using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class UnityAd : MonoBehaviour
{
    [SerializeField] protected string androidInterstitialAdUnitId = "Interstitial_Android";
    [SerializeField] protected string iosInterstitialAdUnitId = "Interstitial_iOS";

    [SerializeField] protected string androidBannerAdUnitId = "Banner_Android";
    [SerializeField] protected string iosBannerAdUnitId = "Banner_iOS";

    [SerializeField] protected string androidRewardAdUnitId = "Reward_Android";
    [SerializeField] protected string iosRewardUnityId = "Reward_iOS";

    protected virtual void Awake()
    {
        DontDestroyOnLoad(this);
    }

    public virtual void LoadAd() { }
    public virtual void ShowAd() { }

}
