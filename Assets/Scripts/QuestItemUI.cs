using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class QuestItemUI : MonoBehaviour
{
    [SerializeField] Image wifu, slime;
    [SerializeField] TextMeshProUGUI goldText, numSlimeText;
    [SerializeField] QuestPanel questPanel;
    private Quest quest;
    public Quest Quest => quest;
    int numSlime;
    int gold;
    public int Gold => gold;
    public Vector2 slimePos => slime.transform.position;
    public void SetItem(Quest quest, Sprite wifu)
    {
        this.quest = quest;
        this.wifu.sprite = wifu;
        this.numSlime = quest.num;
        this.slime.sprite = FruitManager.GetFruitById(quest.slimeId).Sprite;
        gold = quest.GetGold();
        goldText.text = gold.ToString();
        numSlimeText.text = quest.num.ToString();
    }

    public void TakeSlime()
    {
        slime.transform.DOPunchScale(Vector3.one * 0.1f, 0.1f).OnComplete(() =>
        {
            slime.transform.localScale = Vector3.one;
            numSlime--;
            numSlimeText.text = numSlime.ToString();
            if(numSlime <= 0)
            {
                questPanel.QuestComplete(this);
            }
        });
    }
}
