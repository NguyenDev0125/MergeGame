using System.Collections;
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

    public void MergeFruit(Fruit fruit1 , Fruit fruit2)
    {
        if (GameManager.Instance.gameState == GameState.GameOver) return;
        StartCoroutine(Merge(fruit1, fruit2));
    }

    public IEnumerator Merge(Fruit fruit1, Fruit fruit2)
    {
        int level = fruit1.id;
        yield return new WaitForSeconds(delayMerge);
        Vector2 newPos = (fruit1.transform.position + fruit2.transform.position) / 2;
        spawnner.SpawnFruit(++level, newPos);
        if(PlayerPrefs.GetInt("fruit_" + PlayerPrefs.GetInt("map_selected", 0) + level, 0) == 0 && FruitManager.GetFruitById(level).defaultUnlocked == false)
        {
            Debug.Log("Unlock " + level);
            PlayerPrefs.SetInt("fruit_" + PlayerPrefs.GetInt("map_selected",0) + level, 1);
            unlockFrPanel.Open(FruitManager.GetFruitById(level).Sprite);
        }
        if(level == levelMax)
        {
            effectController.Play(EffectName.explodeText,newPos , fruit1.transform.localScale / 2);
            cameraShaker.ShakeCamera(0.18f, 2f);
            SoundManager.Instance?.PlaySound(SoundName.Boom, 1);
            VibrateManager.Vibrate(100, 40);
        }
        else if(level >= levelMedium)
        {
            effectController.Play(EffectName.magicSmoke , newPos , fruit1.transform.localScale / 2);
            SoundManager.Instance?.PlaySound(SoundName.MergeFruit2, 1);
            VibrateManager.Vibrate(70, 20);
        }
        else
        {
            effectController.Play(EffectName.smoke, newPos, fruit1.transform.localScale / 2);
            SoundManager.Instance?.PlaySound(SoundName.MergeFruit, 1);
            VibrateManager.Vibrate(70, 15);
        }
        int score = fruit1.scoreToAdd + 1 + Random.Range(0, 3);
        effectController.PlayTextPopup(score.ToString(), newPos);
        scoreController.AddScore(score);
        if(fruit1.coin > 0)
        {
            coinController.AddScore(fruit1.coin, fruit1.transform.position);
        }
    }
}
