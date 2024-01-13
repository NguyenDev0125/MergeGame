using UnityEngine;
using UnityEngine.Advertisements;

public class BannerAd : UnityAd
{
//    private string _adUnitId;
//    [SerializeField] BannerPosition bannerPos = BannerPosition.BOTTOM_CENTER;
//    protected override void Awake()
//    {
//        base.Awake();
//        Advertisement.Banner.SetPosition(bannerPos);
//        _adUnitId = androidBannerAdUnitId;
//#if UNITY_EDITOR
//        _adUnitId = androidBannerAdUnitId;
//#elif UNITY_ANDROID
//        _adUnitId = androidBannerAdUnitId;
//#elif UNITY_IOS
//        _adUnitId = iosBannerAdUnitId;
//#endif
//    }
//    public override void LoadAd()
//    {
//        Debug.Log("Load Banner ad....");
//        LogManager.Instance.Log("Load banner ad");

//        if (!Advertisement.isInitialized)
//        {
//            AdsInitializer.Instance.InitializeAds(() => ShowAd());
//            LogManager.Instance.Log("Initialize ads");
//        }
//        else
//        {
//            if (Advertisement.Banner.isLoaded)
//            {
//                LogManager.Instance.Log("Show banner");
                
//                Advertisement.Banner.Show(_adUnitId);
//            }
//            else
//            {
//                LogManager.Instance.Log("Load banner");
//                BannerLoadOptions option = new BannerLoadOptions()
//                {
//                    loadCallback = () => Advertisement.Banner.Show(_adUnitId),
//                    errorCallback = (s) =>
//                    {
//                        LogManager.Instance.Log("Error : " + s + ".");

//                    }
//                };
//                Advertisement.Banner.Load(_adUnitId, option);
//            }
//        }

//    }
//    public override void ShowAd()
//    {

//        if (Advertisement.Banner.isLoaded)
//        {
//            Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
//            BannerOptions options = new BannerOptions
//            {
//                clickCallback = OnBannerClicked,
//                hideCallback = OnBannerHidden,
//                showCallback = OnBannerShown
//            };
//            Advertisement.Banner.Show(_adUnitId, options);
//            Debug.Log("Show banner ad.");
//            LogManager.Instance.Log("Show banner ad");
//        }
//        else
//        {
//            LoadAd();
//        }

//    }

//    void OnBannerClicked() { }
//    void OnBannerShown() { }
//    void OnBannerHidden() { }

}
