using System;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdsInitializer : MonoSingleton<AdsInitializer> //, IUnityAdsInitializationListener
{
//    [SerializeField] string _androidGameId;
//    [SerializeField] string _iosGameId;
//    [SerializeField] bool _isTestMod = true;

//    Action callBack = null;
//    string _gameId;

//    public void OnInitializationComplete()
//    {
//        Debug.Log("Ads init success.");
//        callBack?.Invoke();
//    }

//    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
//    {
//        Debug.LogWarning(message);
//    }

//    protected override void Awake()
//    {
//        base.Awake();
//        InitializeAds();
//    }

//    public void InitializeAds(Action callback = null)
//    {
//        _gameId = _androidGameId;
//#if UNITY_IOS
//            _gameId = _iOSGameId;
//#elif UNITY_ANDROID
//        _gameId = _androidGameId;
//#endif
//        if (!Advertisement.isInitialized)
//        {
//            Advertisement.Initialize(_gameId, _isTestMod, this);
//            this.callBack = callback;
//        }
//    }
}
