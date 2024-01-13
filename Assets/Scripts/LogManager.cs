using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LogManager : MonoSingleton<LogManager>
{
    [SerializeField] Text log;
    public void Log(string log)
    {
        this.log.text += "\n "+log;
    }
}
