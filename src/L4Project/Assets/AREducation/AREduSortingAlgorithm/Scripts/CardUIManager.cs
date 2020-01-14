using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardUIManager : MonoBehaviour
{
    //Animation for each cards in the array
    public Animator firstCardAnim;
    public Animator secondCardAnim;
    public Animator thirdCardAnim;
    public Animator fourthCardAnim;
    public Animator fifthCardAnim;
    public Animator sixthCardAnim;

    public int currentCardAnim = 0;
    private int minCardAnim = 0;
    private int maxCardAnim = 11;

    public void NextButton()
    {
        if (currentCardAnim < maxCardAnim)
        {
            currentCardAnim++;
            firstCardAnim.SetInteger("NextAnimation", currentCardAnim);
            secondCardAnim.SetInteger("NextAnimation", currentCardAnim);
            thirdCardAnim.SetInteger("NextAnimation", currentCardAnim);
            fourthCardAnim.SetInteger("NextAnimation", currentCardAnim);
            fifthCardAnim.SetInteger("NextAnimation", currentCardAnim);
            sixthCardAnim.SetInteger("NextAnimation", currentCardAnim);
        }


    }
    public void PreviousButton()
    {
        if (minCardAnim < currentCardAnim)
        {
            currentCardAnim--;
            firstCardAnim.SetInteger("NextAnimation", currentCardAnim);
            secondCardAnim.SetInteger("NextAnimation", currentCardAnim);
            thirdCardAnim.SetInteger("NextAnimation", currentCardAnim);
            fourthCardAnim.SetInteger("NextAnimation", currentCardAnim);
            fifthCardAnim.SetInteger("NextAnimation", currentCardAnim);
            sixthCardAnim.SetInteger("NextAnimation", currentCardAnim);
        }
    }
    public void ResetButton()
    {
        currentCardAnim = minCardAnim;
        firstCardAnim.SetInteger("NextAnimation", currentCardAnim);
        secondCardAnim.SetInteger("NextAnimation", currentCardAnim);
        thirdCardAnim.SetInteger("NextAnimation", currentCardAnim);
        fourthCardAnim.SetInteger("NextAnimation", currentCardAnim);
        fifthCardAnim.SetInteger("NextAnimation", currentCardAnim);
        sixthCardAnim.SetInteger("NextAnimation", currentCardAnim);
    }
}