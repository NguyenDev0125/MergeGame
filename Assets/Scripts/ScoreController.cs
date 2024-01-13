using UnityEngine;

public class ScoreController : MonoBehaviour
{
    [SerializeField] ScorePanel scorePanel;
    [SerializeField] ScoreManager scoreManager;
    [SerializeField] CameraShaker shaker;
    [SerializeField] EffectController effectController;
    [SerializeField] float keepStreakTime = 1f;
    [SerializeField] int shakeSteakCondition = 4;
    [SerializeField] int shakeScoreCondition = 4;
    int streak = 0;
    float timer = 0f;
    public void AddScore(int score)
    {
        timer = keepStreakTime;
        streak++;
        scoreManager.AddScore(score + streak);
        scorePanel.UpdateScoreText(scoreManager.GetScore());
        if (streak > shakeSteakCondition)
        {
            float shakeDuration = 0.1f + 0.01f * (streak - shakeSteakCondition);
            shaker.ShakeCamera(shakeDuration, 0.1f + (streak - shakeSteakCondition) * 0.02f);
            effectController.PlayStreakTextPopup("Streak x" + streak);
        }
        else if(score >= shakeScoreCondition)
        {
            shaker.ShakeCamera();
        }
    }

    private void FixedUpdate()
    {
        timer -= Time.fixedDeltaTime;
        if(timer <= 0f)
        {
            streak = 0;
        }
    }
}
