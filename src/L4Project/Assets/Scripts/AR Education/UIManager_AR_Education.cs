using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager_AR_Education : MonoBehaviour
{
    //config 
    public Animator animator;
    public GameObject label;
    public int currentAnimationNum = 0;
    public int startNum = 0;
    public int endNum = 2;

    //property of CurrentAnimation
    public int CurrentAnimation
    {
        get
        {
            return currentAnimationNum;
        }
        set
        {
            currentAnimationNum = value;
            if (currentAnimationNum == 1)
            {
                label.SetActive(true);
            }
            else
            {
                label.SetActive(false);
            }
        }
    } 


    //singleton manager
    private static UIManager_AR_Education _instance;
    public static UIManager_AR_Education Instance
    {
        get
        {
            return _instance;
        }
    }
    
    private void Awake()
    {
        _instance = this;
        label.SetActive(false);
    }

    public void Next()
    {
        //check if it has reached the max num
        if(CurrentAnimation == endNum)
        {
            //do nothing
        }
        else
        {
            CurrentAnimation++;
            animator.SetInteger("AnimationNumber", CurrentAnimation);
        }
    }
    public void Previous()
    {
        //check if it has reached the min num
        if (CurrentAnimation == startNum)
        {
            //do nothing
        }
        else
        {
            CurrentAnimation--;
            animator.SetInteger("AnimationNumber", CurrentAnimation);
        }
    }
}
