
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
        get { return PlayerPrefs.GetInt("gold", 0); }
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

    public static bool IsSkinUnlocked(string skinId)
    {
        return PlayerPrefs.GetInt("SpawnnerSkin_" + skinId, 0) == 1;
    }

    public static void UnLockSkin(string id)
    {
        PlayerPrefs.SetInt("SpawnnerSkin_" + id, 1);
    }

    public static int GetNumSlimeById(int id)
    {
        return PlayerPrefs.GetInt("Slime_num_" + id, 0);
    }

    public static void SetNumSlime(int id, int value)
    {
        PlayerPrefs.SetInt("Slime_num_" + id, value);
    }

    public static string SelectedSkin
    {
        get
        {
            return PlayerPrefs.GetString("Selected_skin", "0");
        }

        set
        {
            PlayerPrefs.SetString("Selected_skin", value);
        }
    }

    public static int NumSlime
    {
        get
        {
            return PlayerPrefs.GetInt("NumSmile", 10);
        }
        set
        {
            PlayerPrefs.SetInt("NumSmile",value);
        }
    }
}
