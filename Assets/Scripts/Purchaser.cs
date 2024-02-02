using UnityEngine.Purchasing;
public class Purchaser : MonoSingleton<Purchaser>
{
    protected override void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }
    public static readonly string _utraPack = "ultrapack",
                    _10Sword = "_10sword",
                    _10Bomb = "_10bomb",
                    _removeAds = "remove_ads";
    public IAPManager IAP_Manager
    {
        get
        {
            return IAPManager.Instance;
        }
        private set { }
    }

    private void Start()
    {
        IAP_Manager.Initialize(
            new ProductDefinition(_utraPack, ProductType.Consumable),
            new ProductDefinition(_10Bomb, ProductType.Consumable),
            new ProductDefinition(_10Sword, ProductType.Consumable),
            new ProductDefinition(_removeAds, ProductType.NonConsumable)
        );

    }

}