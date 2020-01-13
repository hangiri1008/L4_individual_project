using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlusMenuManager : MonoBehaviour
{
    //Note: Animator Array does not exist
    //Therefore, custom lists of plus menus (expected to perform as an array).
    private List<Animator> plusMenuList;
    public GameObject[] Menus;

    public bool buttonAbled = false;

    void Start()
    {
        plusMenuList = new List<Animator>();
        for (int i = 0; i < Menus.Length; i++)
        {
            plusMenuList.Add(Menus[i].GetComponent<Animator>());
        }
    }

    public void PressPlusButton()
    {
        if (buttonAbled == false)
        {
            buttonAbled = true;
            foreach (Animator menu in plusMenuList)
            {
                while (menu.GetCurrentAnimatorStateInfo(0).IsName("BoardDescButton_Disabled") && menu.GetCurrentAnimatorStateInfo(0).normalizedTime < 1.0f)
                {

                }

                //Do something
                menu.SetBool("plusButtonAbled", buttonAbled);
            }
        }

        else
        {
            buttonAbled = false;
            foreach (Animator menu in plusMenuList)
            {
                while (menu.GetCurrentAnimatorStateInfo(0).IsName("BoardDescButton_Abled") && menu.GetCurrentAnimatorStateInfo(0).normalizedTime < 1.0f)
                {

                }

                menu.SetBool("plusButtonAbled", buttonAbled);
            }
        }
        
    }
}
