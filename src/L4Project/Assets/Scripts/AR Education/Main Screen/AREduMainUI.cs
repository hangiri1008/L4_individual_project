using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AREduMainUI : MonoBehaviour
{
    public TextMeshProUGUI MenuAllText;
    public TextMeshProUGUI MenuExploringText;
    public TextMeshProUGUI MenuGameText;

    public void MenuAllSelected()
    {
        ChangeMenuAllColor();
        ChangeMenuAllSize();
    }

    public void MenuExploringSelected()
    {
        ChangeMenuExploringColor();
        ChangeMenuExploringSize();
    }

    public void MenuGameSelected()
    {
        ChangeMenuGameColor();
        ChangeMenuGameSize();
    }

    private void ChangeMenuGameColor()
    {
        MenuAllText.color = new Color32(142, 142, 142, 255);
        MenuExploringText.color = new Color32(142, 142, 142, 255);
        MenuGameText.color = new Color32(255, 255, 255, 255);
    }

    private void ChangeMenuAllColor()
    {
        MenuAllText.color = new Color32(255, 255, 255, 255);
        MenuExploringText.color = new Color32(142, 142, 142, 255);
        MenuGameText.color = new Color32(142, 142, 142, 255);
    }

    private void ChangeMenuExploringColor()
    {
        MenuAllText.color = new Color32(142, 142, 142, 255);
        MenuExploringText.color = new Color32(255, 255, 255, 255);
        MenuGameText.color = new Color32(142, 142, 142, 255);
    }

    private void ChangeMenuAllSize()
    {
        MenuAllText.fontSize = 42;
        MenuExploringText.fontSize = 40;
        MenuGameText.fontSize = 40;
    }

    private void ChangeMenuExploringSize()
    {
        MenuAllText.fontSize = 40;
        MenuExploringText.fontSize = 42;
        MenuGameText.fontSize = 40;
    }

    private void ChangeMenuGameSize()
    {
        MenuAllText.fontSize = 40;
        MenuExploringText.fontSize = 40;
        MenuGameText.fontSize = 42;
    }

}
