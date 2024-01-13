using TMPro.Examples;
using UnityEngine;

public class PlayerData : MonoBehaviour
{
    public static int RemoveAds
    {
        get { return PlayerPrefs.GetInt("remove_ads", 0); }
        set { PlayerPrefs.SetInt("remove_ads", value); }
    }

    public static int HighScore
    {
        get { return PlayerPrefs.GetInt("hight_score", 0); }
        set 
        {
            PlayerPrefs.SetInt("hight_score", value);
        }
    }

    public static int Coin
    {
        get { return PlayerPrefs.GetInt("gold", 10000); }
        set { PlayerPrefs.SetInt("gold", value); }
    }

    public static int NumBoom
    {
        get { return PlayerPrefs.GetInt("boom", 3); }
        set { PlayerPrefs.SetInt("boom", value); }
    }

    public static int NumSword
    {
        get { return PlayerPrefs.GetInt("sword", 3); }
        set { PlayerPrefs.SetInt("sword", value); }
    }
    public static float Sound
    {
        get
        {
            return PlayerPrefs.GetFloat("sound", 1f);
        }
        set
        {
            PlayerPrefs.SetFloat("sound", value);
        }
    }

    public static float Music
    {
        get
        {
            return PlayerPrefs.GetFloat("music", 1f);
        }
        set
        {
            PlayerPrefs.SetFloat("music", value);
        }
    }

    public static bool Vibrate
    {
        get
        {
            return PlayerPrefs.GetInt("vibrate", 1) == 1;
        }
        set
        {
            PlayerPrefs.SetInt("vibrate", value == true ? 1 : 0);
        }
    }
}
