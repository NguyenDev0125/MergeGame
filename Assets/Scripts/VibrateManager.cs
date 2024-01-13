using RDG;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class VibrateManager
{
    public static void Vibrate()
    {
        if(PlayerData.Vibrate)
        {
            Handheld.Vibrate();
        }
    }

    public static void Vibrate(int time , int ampliture)
    {
        if (!PlayerData.Vibrate) return;
        Vibration.Vibrate(time, ampliture);
    }
}
