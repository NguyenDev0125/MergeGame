using UnityEngine;
using System.Collections.Generic;

public class SoundManager : MonoSingleton<SoundManager>
{
    [SerializeField] Sound BGM;
    [SerializeField]
    List<Sound> listSounds;
    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(this.gameObject);
        foreach(Sound s in listSounds)
        {
            s.audioSource = gameObject.AddComponent<AudioSource>();
            s.audioSource.volume = s.volume * PlayerData.Sound;
            s.audioSource.clip = s.clip;
            //s.audioSource.pitch = 0.5f;
        }
        BGM.audioSource = gameObject.AddComponent<AudioSource>();
        BGM.audioSource.volume = BGM.volume *  PlayerData.Music;
        BGM.audioSource.clip = BGM.clip;
    }
    private void Start()
    {
        PlayBGM();
    }

    public void PlaySound(SoundName soundName)
    {
        foreach (Sound s in listSounds)
        {
            if (s.soundName == soundName)
            {
                if (s.audioSource.isPlaying) continue;
                else
                {
                    s.audioSource.Play();
                    break;
                }
            }
        }
    }

    public void PlaySound(SoundName soundName , float volumeMultiplier)
    {
        foreach (Sound s in listSounds)
        {
            if (s.soundName == soundName)
            {
                if (s.audioSource.isPlaying) continue;
                else
                {
                    s.audioSource.PlayOneShot(s.clip, s.volume );
                    break;
                }

            }
        }
    }
    public void StopSound(SoundName soundName)
    {
        foreach (Sound s in listSounds)
        {
            if (s.soundName == soundName)
            {
                s.audioSource.Stop();
            }
        }
    }

    public void PlayLoop(SoundName soundName)
    {
        foreach (Sound s in listSounds)
        {
            if (s.soundName == soundName)
            {
                if (s.audioSource.isPlaying) return;
                s.audioSource.Stop();
                s.audioSource.loop = true;
            }
        }
    }
    public void PlayBGM()
    {
        BGM.audioSource.loop = true;
        BGM.audioSource.Play();
    }
    public void StopBGM()
    {
        BGM.audioSource.Stop();
    }
    public void ChangeSoundVolume(float value)
    {
        for(int i = 0; i < listSounds.Count; i++)
        {
            listSounds[i].audioSource.volume = value * listSounds[i].volume;
            //listSounds[i].audioSource.pitch = value;
        }
    }

    public void ChangeMusicVolume(float value)
    {
        BGM.audioSource.volume = BGM.volume * PlayerData.Music;
    }
}
[System.Serializable]
public class Sound
{
    public SoundName soundName;
    [Range(0.1f,2f)]
    public float volume;
    public AudioClip clip;
    [HideInInspector]
    public AudioSource audioSource;
}

public enum SoundName
{
    Bounce,
    MergeFruit,
    MergeFruit2,
    MergeFruit3,
    SpawnFruit,
    Boom,
    BGM,
    Warning,
    LevelComplete,
    GameOver,
    Clock,
    Coin,
    Score,
    BoomTick,
    Sword,
    Win,
    Firework,
    Clap,
    Victory
}
