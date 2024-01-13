using System;
using System.Collections;
using UnityEngine;

public class MaxManager : MonoSingleton<MaxManager>
{
    string sdkKey = "mmSrtDDcKr0FHygAqeGqgGZHyOg_eXEhh80Aill7gNz3MsfTqp8zMBKeHmxS4XNabuU8mmIfftPQTE3suezKM1";
    string interUnitId = "c94ebd2ab111ea96";
    string bannerUnitId = "484dbc63f1561533";

    bool isBlockInter = false;
    int blockTime = 60;
    public int BlockTime { get => blockTime; }
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
            MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerLoaded;
            MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent += OnInterDisplayed;
        };
        MaxSdk.SetSdkKey(sdkKey);
        MaxSdk.SetUserId("USER_ID");
        MaxSdk.InitializeSdk();
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
        if (isBlockInter) return;
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
}
