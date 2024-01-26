using Newtonsoft.Json;
using UnityEngine;

public class SaveLoadManager 
{
    public static void SaveGame()
    {
        RemoveGameData();
        string json = "";
        Fruit[] fruits = GameObject.FindObjectsOfType<Fruit>();
        FruitSaveData[] listFrData = new FruitSaveData[fruits.Length];
        for(int i = 0; i < fruits.Length; i++)
        {
            listFrData[i] = new FruitSaveData();
            listFrData[i].id = fruits[i].id;
            listFrData[i].posX = fruits[i].transform.position.x;
            listFrData[i].posY = fruits[i].transform.position.y;
            listFrData[i].rotZ = fruits[i].transform.rotation.eulerAngles.z;
        }
        json = JsonConvert.SerializeObject(listFrData);
        PlayerPrefs.SetString("Game_data" , json);
    }

    public static void RemoveGameData()
    {
        PlayerPrefs.DeleteKey("Game_data");
    }

    public static FruitSaveData[] GetFruitsDataSaved()
    {
        string json = PlayerPrefs.GetString("Game_data", "");
        FruitSaveData[] listId = JsonConvert.DeserializeObject<FruitSaveData[]>(json);
        Debug.Log("Load");
        return listId;

    }

    public static void SaveCurrentCoin(int value)
    {
        PlayerPrefs.SetInt("CurrentCoin", value);
    }

    public static void SaveCurrentScore(int value)
    {
        PlayerPrefs.SetInt("CurrentScore", value);
    }

    public static int GetSaveCoin()
    {
        return PlayerPrefs.GetInt("CurrentCoin", 0);
    }

    public static int GetSaveScore()
    {
        return PlayerPrefs.GetInt("CurrentScore", 0);
    }
}

public class FruitSaveData
{
    public int id;
    public float posX, posY;
    public float rotZ;
}
