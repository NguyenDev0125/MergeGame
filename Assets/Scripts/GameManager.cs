using UnityEngine;

public class GameManager : MonoSingleton<GameManager>
{
    [SerializeField] VoidEventChanel GameOverEvent;
    [SerializeField] GiveItemPanel giftPanel;
    public UIController uiController;
    public GameController gameController;
    public GameState gameState = GameState.Playing;
    protected override void Awake()
    {
        base.Awake();
        GameOverEvent.onEventRaised += GameOver;
        giftPanel.RandomGift();
    }

    public void ShowBannerAd()
    {
        MaxManager.Instance.ShowBannerAd();
    }

    public void ShowInterAd()
    {
        MaxManager.Instance.ShowInterAd();
    }
    public void GameOver()
    {
        gameState = GameState.GameOver;
        gameController.DestroyAllFruit();
        SoundManager.Instance.PlaySound(SoundName.GameOver);
    }
    
}
public enum GameState
{
    GameOver,
    Playing
}
