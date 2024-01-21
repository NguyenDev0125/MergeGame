using UnityEngine;

public class ScoreManager : MonoBehaviour
{
    int score = 0;
    private void Awake()
    {
        score = SaveLoadManager.GetSaveScore();
    }
    public void AddScore(int value)
    {
        score += value;
        SaveLoadManager.SaveCurrentScore(score);
    }
    public void SaveHighScore(int sc)
    {
        if(sc > PlayerData.HighScore)
        PlayerData.HighScore = sc;
        
    }

    public int GetScore()
    {
        return score;
    }
    public int GetHighScore()
    {
        return PlayerData.HighScore;
    }

}
