using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// public class ArduinoBoardDescUI : MonoBehaviour
public class Temp2 : MonoBehaviour
{
    public GameObject Arduino;

    public GameObject MenuScreenUI;
    public GameObject BoardDescUI;

    public bool IsBoardDescActive = false;

    public void ClickBoardDesc()
    {
        if (IsBoardDescActive == false)
        {
            AbleBoardDesc();
        }
        else
        {
            DisableBoardDesc();
        }
    }

    private void AbleBoardDesc()
    {
        IsBoardDescActive = true;
        Arduino.SetActive(true);
        BoardDescUI.SetActive(true);

        MenuScreenUI.SetActive(false);
    }

    private void DisableBoardDesc()
    {

        IsBoardDescActive = false;
        Arduino.SetActive(false);
        BoardDescUI.SetActive(false);
        MenuScreenUI.SetActive(true);
    }
}
