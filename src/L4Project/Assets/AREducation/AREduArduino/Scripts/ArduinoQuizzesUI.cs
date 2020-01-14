using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ArduinoQuizzesUI : MonoBehaviour
{
    //Control on MoreInfoManager
    public MoreInfoManager moreInfoManager;

    //Arduino
    public GameObject Arduino;

    public Button BoardDescButton;
    public Button QuizButton;

    public Button MoreButton;
    public Image MoreInfoBox;
    public Image MoreQuizTextBox;

    //Scroll Rect Area for list of Quizzes
    public Image BottomHighligtedArea;

    //Quizzes
    public TextMeshProUGUI[] QuizAnswers;

    bool isQuizActive = false;

    public void ClickQuiz()
    {
        if (isQuizActive)
        {
            DisableQuiz();
        }
        else
        {
            AbleQuiz();
        }
    }

    public void ClickButtonAll()
    {
        if (moreInfoManager.IsMoreInfoBoxActivated == true)
        {
            MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(true);

            for(int i=0; i<QuizAnswers.Length; i++)
            {
                QuizAnswers[i].gameObject.SetActive(false);
            }
        }
    }

    public void ClickButtonOne()
    {
        if (moreInfoManager.IsMoreInfoBoxActivated == true)
        {
            MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

            for (int i = 0; i < QuizAnswers.Length; i++)
            {
                QuizAnswers[i].gameObject.SetActive(false);
            }
            QuizAnswers[0].gameObject.SetActive(true);
        }
    }

    public void ClickButtonTwo()
    {
        if (moreInfoManager.IsMoreInfoBoxActivated == true)
        {
            MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

            for (int i = 0; i < QuizAnswers.Length; i++)
            {
                QuizAnswers[i].gameObject.SetActive(false);
            }
            QuizAnswers[1].gameObject.SetActive(true);
        }
    }

    public void ClickButtonThree()
    {
        if (moreInfoManager.IsMoreInfoBoxActivated == true)
        {
            MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

            for (int i = 0; i < QuizAnswers.Length; i++)
            {
                QuizAnswers[i].gameObject.SetActive(false);
            }
            QuizAnswers[2].gameObject.SetActive(true);
        }
    }

    public void ClickButtonFour()
    {
        if (moreInfoManager.IsMoreInfoBoxActivated == true)
        {
            MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

            for (int i = 0; i < QuizAnswers.Length; i++)
            {
                QuizAnswers[i].gameObject.SetActive(false);
            }
            QuizAnswers[3].gameObject.SetActive(true);
        }
    }

    public void ClickButtonFive()
    {
        MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

        for (int i = 0; i < QuizAnswers.Length; i++)
        {
            QuizAnswers[i].gameObject.SetActive(false);
        }
        QuizAnswers[4].gameObject.SetActive(true);
    }

    public void ClickButtonSix()
    {
        MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

        for (int i = 0; i < QuizAnswers.Length; i++)
        {
            QuizAnswers[i].gameObject.SetActive(false);
        }
        QuizAnswers[5].gameObject.SetActive(true);
    }

    public void ClickButtonSeven()
    {
        MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

        for (int i = 0; i < QuizAnswers.Length; i++)
        {
            QuizAnswers[i].gameObject.SetActive(false);
        }
        QuizAnswers[6].gameObject.SetActive(true);
    }

    public void ClickButtonEight()
    {
        MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

        for (int i = 0; i < QuizAnswers.Length; i++)
        {
            QuizAnswers[i].gameObject.SetActive(false);
        }
        QuizAnswers[7].gameObject.SetActive(true);
    }

    public void ClickButtonNine()
    {
        MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(false);

        for (int i = 0; i < QuizAnswers.Length; i++)
        {
            QuizAnswers[i].gameObject.SetActive(false);
        }
        QuizAnswers[8].gameObject.SetActive(true);
    }

    private void AbleQuiz()
    {
        isQuizActive = true;
        //Arduino AR Object Active
        Arduino.SetActive(true);
        //Turn on More Option Button
        MoreButton.gameObject.SetActive(true);
        MoreButton.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1, -1, 1);
        //Turn off everything except Quiz ICON
        QuizButton.transform.GetChild(1).gameObject.SetActive(false);
        BoardDescButton.gameObject.SetActive(false);
        //Change location of Quiz ICON to front
        QuizButton.gameObject.transform.localPosition = new Vector3(-264.35f, -300.1f, 0f);
        //Scroll Rect Area Active
        BottomHighligtedArea.gameObject.SetActive(true);
    }

    private void DisableQuiz()
    {
        isQuizActive = false;
        Arduino.SetActive(false);
        //When disabling Quizzes, Make sure turn off every functions/elements related to 'More' button
        moreInfoManager.IsMoreInfoBoxActivated = false;
        MoreButton.gameObject.SetActive(false);
        MoreButton.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1, 1, 1);
        MoreQuizTextBox.gameObject.SetActive(false);
        MoreInfoBox.gameObject.SetActive(false);
        for (int i = 0; i < QuizAnswers.Length; i++)
        {
            QuizAnswers[i].gameObject.SetActive(false);
        }
        //Turn On Default
        QuizButton.transform.GetChild(1).gameObject.SetActive(true);
        BoardDescButton.gameObject.SetActive(true);
        BottomHighligtedArea.gameObject.SetActive(false);
        //Original position
        QuizButton.gameObject.transform.localPosition = new Vector3(240.15f, -300.1f, 0f);
    }
}
