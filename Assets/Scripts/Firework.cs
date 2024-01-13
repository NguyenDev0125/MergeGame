using UnityEngine;

public class Firework : MonoBehaviour
{
    private void OnEnable()
    {
        SoundManager.Instance?.PlaySound(SoundName.Firework);
        
    }
}
