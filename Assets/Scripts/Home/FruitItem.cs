using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class FruitItem : MonoBehaviour
{
    public Image icon;
    public Sprite iconLocked;
    public TextMeshProUGUI textName,textStatus;
    public void SetItem(bool unlocked , string name , Sprite sprite)
    {
        if(!unlocked)
        {
            textStatus.text = "Locked";
            textName.text = "????";
            icon.sprite = iconLocked;
        }
        else
        {
            textStatus.text = "Unlocked";
            textName.text = name;
            icon.sprite = sprite;
        }
    }
}
