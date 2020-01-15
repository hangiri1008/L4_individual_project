using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MotherBoardInfoScreenUI : MonoBehaviour
{
    public Image Wiki_BackgroundImage;
    public TextMeshProUGUI Wiki_TitleText;
    public TextMeshProUGUI Wiki_InfoText;

    public Image Guide_BackgroundImage;
    public TextMeshProUGUI Guide_TitleText;
    public TextMeshProUGUI Guide_InfoText;

    public Button Guide_LinkButton;

    //params
    bool wikiInfoActive = false;
    bool guideInfoActive = true;
    int wikiPage = 0;
    int guidePage = 0;

    public void WikiClickInfo()
    {
        if (guideInfoActive)
        {
            GuideClickInfo();
        }

        if (wikiInfoActive)
        {
            wikiInfoActive = false;
            Wiki_BackgroundImage.gameObject.SetActive(false);
            Wiki_TitleText.gameObject.SetActive(false);
            Wiki_InfoText.gameObject.SetActive(false);
        }
        else
        {
            wikiInfoActive = true;
            Wiki_BackgroundImage.gameObject.SetActive(true);
            Wiki_TitleText.gameObject.SetActive(true);
            Wiki_InfoText.gameObject.SetActive(true);
        }
    }

    public void GuideClickInfo()
    {
        if (wikiInfoActive)
        {
            WikiClickInfo();
        }

        if (guideInfoActive)
        {
            guideInfoActive = false;
            Guide_BackgroundImage.gameObject.SetActive(false);
            Guide_TitleText.gameObject.SetActive(false);
            Guide_InfoText.gameObject.SetActive(false);
            Guide_LinkButton.gameObject.SetActive(false);
        }
        else
        {
            guideInfoActive = true;
            Guide_BackgroundImage.gameObject.SetActive(true);
            Guide_TitleText.gameObject.SetActive(true);
            Guide_InfoText.gameObject.SetActive(true);
            if (guidePage == 0)
            {
                Guide_LinkButton.gameObject.SetActive(true);
            }
        }
    }

    public void OpenLink()
    {
        Application.OpenURL("https://drive.google.com/file/d/1kUt4yohlcE47ItC81O7cn60p3rwStjJ9/view?usp=sharing");
    }


}
