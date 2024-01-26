using System;
using UnityEngine;
[Serializable]
public class Quest
{
    public int slimeId, num, goldToGive, goldToGiveMax;
    public int GetGold()
    {
        return UnityEngine.Random.Range(goldToGive, goldToGiveMax);
    }
}
