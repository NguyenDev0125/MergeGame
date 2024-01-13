using UnityEngine;

public static class CameraInfo 
{
    public static Vector3 Position{ get => Camera.main.transform.position;  }
    public static Vector2 HaftSize
    {
        get
        {
            return Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Position.z));
        }
    }
}
