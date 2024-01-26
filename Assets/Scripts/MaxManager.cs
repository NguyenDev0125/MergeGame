using System;
using System.Collections;
using UnityEngine;

public class MaxManager : MonoSingleton<MaxManager>
{
    string sdkKey = "izbW4oEiJA_cdTh6wc0r6Cqyel80b8VaLe1pL0pAKx7TvV9BoLk4F29V4R3OUqiynDPwowsUIsszEb66mbssOZ";
    string interUnitId = "ac8368d5f98532ac";
    string bannerUnitId = "1ae27dd80006d6c6";
    string reward = "6b28d70cd08353c3";

    bool isBlockInter = false;
    int blockTime = 40; 
    public bool IsBlockInter => isBlockInter;
    public int BlockTime { get => blockTime;}
    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);
    }
    private void Start()
    {
        MaxSdkCallbacks.OnSdkInitializedEvent += (sdkConfig) =>
        {
            InitInterAd();
            InitBannerAd();
            InitRewardAd();
            MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerLoaded;
            MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent += OnInterDisplayed;
            MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnAdReceivedRewardEvent;

            MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
            MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
            MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
            MaxSdkCallbacks.MRec.OnAdRevenuePaidEvent += OnAdRevenuePaidEvent;
        };
        MaxSdk.SetSdkKey(sdkKey);
        MaxSdk.SetUserId("USER_ID");
        MaxSdk.ShowMediationDebugger();
        MaxSdk.InitializeSdk();
    }
    private void OnAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo impressionData)
    {
        Debug.Log("Log event ad revenue");
        double revenue = impressionData.Revenue;
        var impressionParameters = new[] {
                     new Firebase.Analytics.Parameter("ad_platform", "AppLovin"),
                     new Firebase.Analytics.Parameter("ad_source", impressionData.NetworkName),
                     new Firebase.Analytics.Parameter("ad_unit_name", impressionData.AdUnitIdentifier),
                     new Firebase.Analytics.Parameter("ad_format", impressionData.AdFormat),
                     new Firebase.Analytics.Parameter("value", revenue),
                     new Firebase.Analytics.Parameter("currency", "USD"), // All AppLovin revenue is sent in USD
                 };
        Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_max", impressionParameters);
        Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_impression", impressionParameters);
    }
    private void InitInterAd()
    {
        LoadInterAd();
    }

    public void LoadInterAd()
    {
        MaxSdk.LoadInterstitial(interUnitId);
    }

    public void ShowInterAd()
    {
        if(MaxSdk.IsInterstitialReady(interUnitId))
        {
            MaxSdk.ShowInterstitial(interUnitId);
            isBlockInter = true;
            StopAllCoroutines();
            StartCoroutine(IE_UnblockInter());
        }
        else
        {
            LoadInterAd();
        }
    }
    Action OnAdDisplayed;



    public void ShowInterAd(Action callback)
    {
        if (isBlockInter) return;
        if (MaxSdk.IsInterstitialReady(interUnitId))
        {
            OnAdDisplayed = callback;
            MaxSdk.ShowInterstitial(interUnitId);
            isBlockInter = true;
            StopAllCoroutines();
            StartCoroutine(IE_UnblockInter());
        }
        else
        {
            LoadInterAd();
        }
    }

    
    private void OnInterDisplayed(string mgs , MaxSdk.AdInfo info)
    {
        LoadInterAd();
        OnAdDisplayed?.Invoke();
        Debug.Log("Inter displayed");
    }
    private IEnumerator IE_UnblockInter()
    {
        yield return new WaitForSeconds(blockTime);
        isBlockInter = false;
    }

    private void InitBannerAd()
    {
        MaxSdk.CreateBanner(bannerUnitId, MaxSdkBase.BannerPosition.BottomCenter);
        MaxSdk.SetBannerBackgroundColor(bannerUnitId, Color.black);
    }
    private void OnBannerLoaded(string s, MaxSdk.AdInfo info)
    {
        ShowBannerAd();
    }
    public void ShowBannerAd()
    {
        MaxSdk.ShowBanner(bannerUnitId);
    }


    public void HideBanner()
    {

    }

    private void InitRewardAd()
    {
        LoadRewardAd();
    }

    private void LoadRewardAd()
    {
        MaxSdk.LoadRewardedAd(reward);
    }

    public event Action OnReceiveReward;
    public void ShowReward(Action callback)
    {
        if (MaxSdk.IsRewardedAdReady(reward))
        {
            OnReceiveReward = callback;
            MaxSdk.ShowRewardedAd(reward);

        }
        else
        {
            LoadRewardAd();
        }
    }
    private void OnAdReceivedRewardEvent(string mgs,  MaxSdk.Reward  rw, MaxSdk.AdInfo info)
    {
        OnReceiveReward?.Invoke();
    }


}
