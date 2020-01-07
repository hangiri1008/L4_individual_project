using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AREduMainUI : MonoBehaviour
{
    public TextMeshProUGUI MenuAllText;
    public TextMeshProUGUI MenuExploringText;
    public TextMeshProUGUI MenuGameText;

    public Button[] ExploringActivityButtons;
    public Button[] GameActivityButtons;

    private bool exploreIsEnabled = true;
    private bool gameIsEnabled = true;

    private void Update()
    {
        if (exploreIsEnabled == true && gameIsEnabled == true)
        {
            for (int i = 0; i < ExploringActivityButtons.Length; i++)
            {
                ExploringActivityButtons[i].gameObject.SetActive(true);
                ExploringActivityButtons[i].gameObject.transform.localPosition = new Vector3(-21.3f, 120f - 160f*i, 0f);
            }
            for (int j = 0; j < GameActivityButtons.Length; j++)
            {
                GameActivityButtons[j].gameObject.SetActive(true);
                GameActivityButtons[j].gameObject.transform.localPosition = new Vector3(-21.3f, 120f - 160f * (ExploringActivityButtons.Length+ j) , 0f);
            }
        }

        if (exploreIsEnabled == true && gameIsEnabled == false)
        {
            for (int i = 0; i < ExploringActivityButtons.Length; i++)
            {
                ExploringActivityButtons[i].gameObject.SetActive(true);
                ExploringActivityButtons[i].gameObject.transform.localPosition = new Vector3(-21.3f, 120f - 160f * i, 0f);
            }
            for (int j = 0; j < GameActivityButtons.Length; j++)
            {
                GameActivityButtons[j].gameObject.SetActive(false);
            }
        }

        if (exploreIsEnabled == false && gameIsEnabled == true)
        {
            for (int i = 0; i < ExploringActivityButtons.Length; i++)
            {
                ExploringActivityButtons[i].gameObject.SetActive(false);
            }
            for (int j = 0; j < GameActivityButtons.Length; j++)
            {
                GameActivityButtons[j].gameObject.SetActive(true);
                GameActivityButtons[j].gameObject.transform.localPosition = new Vector3(-21.3f, 120f - 160f * j, 0f);
            }
        }
    }

    public void MenuAllSelected()
    {
        ChangeMenuAllColor();
        ChangeMenuAllSize();
        exploreIsEnabled = true;
        gameIsEnabled = true;
    }

    public void MenuExploringSelected()
    {
        ChangeMenuExploringColor();
        ChangeMenuExploringSize();
        exploreIsEnabled = true;
        gameIsEnabled = false;
    }

    public void MenuGameSelected()
    {
        ChangeMenuGameColor();
        ChangeMenuGameSize();
        exploreIsEnabled = false;
        gameIsEnabled = true;
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
