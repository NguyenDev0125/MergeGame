using TMPro;
using UnityEngine;
using DG.Tweening;

public class ScorePanel : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreTxt;

    public void UpdateScoreText(int score)
    {
        scoreTxt.transform.DOPunchScale(new Vector2(0.1f,0.1f), 0.4f).OnComplete(()=>
        {
            scoreTxt.transform.localScale = Vector2.one;
        });
        scoreTxt.text = score.ToString();
    }
}
