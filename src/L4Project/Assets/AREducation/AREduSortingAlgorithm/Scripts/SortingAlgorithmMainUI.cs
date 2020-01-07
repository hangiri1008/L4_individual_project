using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SortingAlgorithmMainUI : MonoBehaviour
{
    public Image Wiki_BackgroundImage;
    public TextMeshProUGUI Wiki_TitleText;
    public TextMeshProUGUI Wiki_InfoText;
    public Button Wiki_NextTextButton;
    public Button Wiki_PreviousTextButton;

    public Image Guide_BackgroundImage;
    public TextMeshProUGUI Guide_TitleText;
    public TextMeshProUGUI Guide_InfoText;
    public Button Guide_NextTextButton;
    public Button Guide_PreviousTextButton;

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
            Wiki_NextTextButton.gameObject.SetActive(false);
            Wiki_PreviousTextButton.gameObject.SetActive(false);
        }
        else
        {
            wikiInfoActive = true;
            Wiki_BackgroundImage.gameObject.SetActive(true);
            Wiki_TitleText.gameObject.SetActive(true);
            Wiki_InfoText.gameObject.SetActive(true);
            Wiki_NextTextButton.gameObject.SetActive(true);
            Wiki_PreviousTextButton.gameObject.SetActive(true);
        }
    }

    public void WikiNextText()
    {
        if (wikiInfoActive)
        {
            if (wikiPage < 3)
            {
                wikiPage++;

                if (wikiPage == 1)
                {
                    Wiki_InfoText.text = "If the given array has to be sorted in ascending order, then bubble sort will start by comparing the first element of the array with the second element, if the first element is greater than the second element, it will swap both the elements, and then move on to compare the second and the third element, and so on.";
                }
                if (wikiPage == 2)
                {
                    Wiki_InfoText.text = "If we have total n elements, then we need to repeat this process for n-1 times. It is known as bubble sort, because with every complete iteration the largest element in the given array, bubbles up towards the last place or the highest index, just like a water bubble rises up to the water surface.";
                }
                if (wikiPage == 3)
                {
                    Wiki_InfoText.text = "Sorting takes place by stepping through all the elements one-by-one and comparing it with the adjacent element and swapping them if required.";
                }
            }
        }
    }
    public void WikiPreviousText()
    {
        if (wikiInfoActive)
        {
            if (wikiPage > 0)
            {
                wikiPage--;

                if (wikiPage == 0)
                {
                    Wiki_InfoText.text = "Bubble Sort is a simple algorithm which is used to sort a given set of n elements provided in form of an array with n number of elements. Bubble Sort compares all the element one by one and sort them based on their values.";
                }
                if (wikiPage == 1)
                {
                    Wiki_InfoText.text = "If the given array has to be sorted in ascending order, then bubble sort will start by comparing the first element of the array with the second element, if the first element is greater than the second element, it will swap both the elements, and then move on to compare the second and the third element, and so on.";
                }
                if (wikiPage == 2)
                {
                    Wiki_InfoText.text = "If we have total n elements, then we need to repeat this process for n-1 times. It is known as bubble sort, because with every complete iteration the largest element in the given array, bubbles up towards the last place or the highest index, just like a water bubble rises up to the water surface.";
                }
            }
            
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
            Guide_NextTextButton.gameObject.SetActive(false);
            Guide_PreviousTextButton.gameObject.SetActive(false);
            Guide_LinkButton.gameObject.SetActive(false);
        }
        else
        {
            guideInfoActive = true;
            Guide_BackgroundImage.gameObject.SetActive(true);
            Guide_TitleText.gameObject.SetActive(true);
            Guide_InfoText.gameObject.SetActive(true);
            Guide_NextTextButton.gameObject.SetActive(true);
            Guide_PreviousTextButton.gameObject.SetActive(true);
            if (guidePage == 0)
            {
                Guide_LinkButton.gameObject.SetActive(true);
            }
        }
    }

    public void GuideNextText()
    {
        if (guideInfoActive)
        {
            if (guidePage < 2) 
            {
                guidePage++;

                if (guidePage == 1)
                {
                    Guide_LinkButton.gameObject.SetActive(false);
                    Guide_InfoText.text = "Use the button in the bottom center to see how the numbers are sorted in each iteration. You can reset the formation of numbers at any time by pressing the reset button in the middle.";
                }
                if (guidePage == 2)
                {
                    Guide_InfoText.text = "Choose any desired options from clicking the menu on the right bottem to experience any learning materials from different courses, through AR.";
                }
            }
        }
    }
    public void GuidePreviousText()
    {
        if (guideInfoActive)
        {
            if (guidePage > 0)
            {
                guidePage--;

                if (guidePage == 0)
                {
                    Guide_LinkButton.gameObject.SetActive(true);
                    Guide_InfoText.text = "Please place the star wars playing card pictures in the middle of your phone screen. To get the picture, please click the link button below.";
                }
                if (guidePage == 1)
                {
                    Guide_InfoText.text = "Use the button in the bottom center to see how the numbers are sorted in each iteration. You can reset the formation of numbers at any time by pressing the reset button in the middle.";
                }
            }

        }
    }

    public void OpenLink()
    {
        Application.OpenURL("https://drive.google.com/file/d/17BPBg2QlHqq4EbvegPrNxUg7mOsllHlQ/view?usp=sharing");
    }


}
