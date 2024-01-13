using UnityEngine;

public class AutoDisableObject : MonoBehaviour
{
    public void DisableObject()
    {
        gameObject.SetActive(false);
    }
}
