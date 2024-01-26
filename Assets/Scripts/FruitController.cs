using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FruitController : MonoBehaviour
{
    [SerializeField] FruitSpawnner spawnner;
    [SerializeField] EffectController effectController;
    [SerializeField] ScoreController scoreController;
    [SerializeField] CameraShaker cameraShaker;
    [SerializeField] CoinController coinController;
    [SerializeField] public float delayMerge;
    [SerializeField] int levelMax;
    [SerializeField] int levelMedium;
    [SerializeField] UnlockNewFruitPanel unlockFrPanel;
    [SerializeField] QuestPanel questPanel;

    List<Fruit> listFruits;

    public void MergeFruit(Fruit fruit1 , Fruit fruit2)
    {
        if (GameManager.Instance.gameState == GameState.GameOver) return;

        fruit1.HideFruit();
        fruit2.HideFruit();
        StartCoroutine(Merge(fruit1.id , fruit1.scoreToAdd,fruit1.transform.position, fruit2.transform.position));
    }
    public IEnumerator Merge(int id , int sc, Vector2 pos1, Vector2 pos2)
    {
        int level = id;
        yield return new WaitForSeconds(delayMerge);

        Vector2 newPos = (pos1 + pos2) / 2;
        questPanel.OnSlimeExplode(id, pos1, pos2);
        spawnner.SpawnFruit(++level, newPos);
        PlayerData.SetNumSlime(id  , PlayerData.GetNumSlimeById(id) + 2);
        if(PlayerPrefs.GetInt("fruit_" +  level, 0) == 0 && FruitManager.GetFruitById(level).defaultUnlocked == false)
        {
            Debug.Log("Unlock " + level);
            PlayerPrefs.SetInt("fruit_" +  level, 1);
            unlockFrPanel.Open(level,FruitManager.GetFruitById(level).Sprite);
        }
        if(level == levelMax)
        {
            effectController.Play(EffectName.explodeText,newPos , Vector3.one);
            cameraShaker.ShakeCamera(0.18f, 2f);
            SoundManager.Instance?.PlaySound(SoundName.Boom, 1);
            VibrateManager.Vibrate(100, 40);
        }
        else if(level >= levelMedium)
        {
            effectController.Play(EffectName.magicSmoke , newPos , Vector3.one);
            SoundManager.Instance?.PlaySound(SoundName.MergeFruit, 1);
            VibrateManager.Vibrate(70, 20);
        }
        else
        {
            effectController.Play(EffectName.smoke, newPos, Vector3.one);
            SoundManager.Instance?.PlaySound(SoundName.MergeFruit, 1);
            VibrateManager.Vibrate(70, 15);
        }
        int score = sc + 1 + Random.Range(0, 3);
        effectController.PlayTextPopup(score.ToString(), newPos);
        scoreController.AddScore(score);
        coinController.AddScore(sc, pos1);


    }
}
