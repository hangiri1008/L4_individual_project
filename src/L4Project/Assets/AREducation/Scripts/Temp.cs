using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// public class PlusMenuManager : MonoBehaviour
public class Temp : MonoBehaviour
{
    //Note: Animator Array does not exist
    //Therefore, custom lists of plus menus (expected to perform as an array).
    private List<Animator> plusMenuList;
    public GameObject[] Menus;

    //MenuUI which consists menu list for the plus menu
    public GameObject MenuUI;

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
        if (MenuUI.active == true)
        {
            if (buttonAbled == false)
            {
                buttonAbled = true;
                foreach (Animator menu in plusMenuList)
                {
                    menu.SetBool("plusButtonAbled", buttonAbled);
                }
            }

            else
            {
                buttonAbled = false;
                foreach (Animator menu in plusMenuList)
                {
                    menu.SetBool("plusButtonAbled", buttonAbled);
                }
            }
        }

    }
}
