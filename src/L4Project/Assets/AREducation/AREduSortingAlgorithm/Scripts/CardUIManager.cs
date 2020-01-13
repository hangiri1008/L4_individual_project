using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardUIManager : MonoBehaviour
{
    //Animation for each cards in the array
    public Animator[] cardAnim;
    public int currentCardAnim = 0;
    private int minCardAnim = 0;
    private int maxCardAnim = 11;

    public void NextButton()
    {
        if (currentCardAnim < maxCardAnim)
        {
            currentCardAnim++;
            for(int i=0; cardAnim.Length< i; i++)
            {
                cardAnim[i].SetInteger("NextAnimation", currentCardAnim);
            }
        }


    }
    public void PreviousButton()
    {
        if (minCardAnim < currentCardAnim)
        {
            currentCardAnim--;
            for (int i = 0; cardAnim.Length < i; i++)
            {
                cardAnim[i].SetInteger("NextAnimation", currentCardAnim);
            }
        }
    }
    public void ResetButton()
    {
        currentCardAnim = minCardAnim;
        for (int i = 0; cardAnim.Length < i; i++)
        {
            cardAnim[i].SetInteger("NextAnimation", currentCardAnim);
        }
    }
}