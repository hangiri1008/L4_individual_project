using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MoreInfoManager : MonoBehaviour
{
    public Button MoreInfoButton;
    public Image MoreInfoBox;
    public Image MoreDescTextBox;
    public Image MoreQuizTextBox;
    public GameObject Quizzes;
    //Quizzes
    public TextMeshProUGUI[] QuizAnswers;

    public Button QuizButton;
    public Button BoardDescButton;

    public bool IsMoreInfoBoxActivated = false;

    public void ClickMoreInfoButton()
    {
        if (IsMoreInfoBoxActivated)
        {
            MoreInfoButton.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1, -1, 1);
            IsMoreInfoBoxActivated = false;
            MoreInfoBox.gameObject.SetActive(false);
            MoreDescTextBox.gameObject.SetActive(false);
            MoreQuizTextBox.gameObject.SetActive(false);
            Quizzes.gameObject.SetActive(false);
            for (int i = 0; i < QuizAnswers.Length; i++)
            {
                QuizAnswers[i].gameObject.SetActive(false);
            }
        }
        else
        {
            MoreInfoButton.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1, 1, 1);
            IsMoreInfoBoxActivated = true;
            //When only Description Button is abled
            if ((QuizButton.gameObject.active == false) && (BoardDescButton.transform.GetChild(0).gameObject.active == true))
            {
                MoreInfoBox.gameObject.SetActive(true);
                MoreDescTextBox.gameObject.SetActive(true);
                MoreQuizTextBox.gameObject.SetActive(false);
                Quizzes.gameObject.SetActive(false);
            }
            //When only Quiz Button is abled
            if (BoardDescButton.gameObject.active == false && (QuizButton.transform.GetChild(0).gameObject.active == true))
            {
                MoreInfoBox.gameObject.SetActive(true);
                MoreDescTextBox.gameObject.SetActive(false);
                MoreQuizTextBox.gameObject.SetActive(true);
                MoreQuizTextBox.transform.GetChild(0).gameObject.SetActive(true);
                Quizzes.gameObject.SetActive(true);
            }
        }
        
    }
}
