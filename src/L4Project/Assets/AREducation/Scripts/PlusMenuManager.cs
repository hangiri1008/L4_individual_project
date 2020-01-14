using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlusMenuManager : MonoBehaviour
{
    public GameObject MenuScreenUI;
    bool isMenuScreenActive = false;

    public void ClickPlusMenu()
    {
        if (isMenuScreenActive)
        {
            DisableMenuScreen(); 
        }
        else
        {
            AbleMenuScreen();
        }
    }

    private void AbleMenuScreen()
    {
        isMenuScreenActive = true;
        MenuScreenUI.SetActive(true);
    }

    private void DisableMenuScreen()
    {

        isMenuScreenActive = false;
        MenuScreenUI.SetActive(false);
    }
}
