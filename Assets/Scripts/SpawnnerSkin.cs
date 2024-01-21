using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class SpawnnerSkin
{
    public string skinId;
    public string skinName;
    public string skinDes;
    public int slimeUnlockId;
    public int price;
    public Sprite sprite;

    public bool IsUnlocked()
    {
        return PlayerData.IsSkinUnlocked(skinId);
    }

    public void UnLock()
    {
        PlayerData.UnLockSkin(skinId);
    }
}
