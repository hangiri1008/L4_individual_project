using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ArduinoBoardDescUI : MonoBehaviour
{
    //Control on MoreInfoManager
    public MoreInfoManager moreInfoManager;

    //Arduino
    public GameObject Arduino;

    //Arduino components
    public GameObject PowerUSB;
    public GameObject Power;
    public GameObject VoltageRegulator;
    public GameObject CrystalOscillator;
    public GameObject ArduinoResetOne;
    public GameObject ThreePointThreeV;
    public GameObject FiveV;
    public GameObject[] GND;
    public GameObject Vin;
    public GameObject[] AnalogPins;
    public GameObject MainMicrocontroller;
    public GameObject ICSPPin;
    public GameObject PowerLEDIndicator;
    public GameObject TXAndRXLEDs;
    public GameObject[] DigitalIO;
    public GameObject AREF;
    public GameObject ArduinoResetTwo;

    public TextMeshProUGUI BoardDescButtonText;
    public Button QuizButton;

    public Button MoreButton;
    public Image MoreInfoBox;
    public Image MoreDescTextBox;
    //Scroll Rect Area for list of Board Desc components
    public Image BottomHighligtedArea;

    bool isBoardDescActive = false;

    public void ClickBoardDesc()
    {
        if (isBoardDescActive)
        {
            DisableBoardDesc();
        }
        else
        {
            AbleBoardDesc();
        }
    }

    public void ClickButtonAll()
    {
        PowerUSB.SetActive(true);
        Power.SetActive(true);
        VoltageRegulator.SetActive(true);
        CrystalOscillator.SetActive(true);
        ArduinoResetOne.SetActive(true);
        ThreePointThreeV.SetActive(true);
        FiveV.SetActive(true);
        for(int i=0; i<GND.Length; i++)
        {
            GND[i].SetActive(true);
        }
        Vin.SetActive(true);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(true);
        }
        MainMicrocontroller.SetActive(true);
        ICSPPin.SetActive(true);
        PowerLEDIndicator.SetActive(true);
        TXAndRXLEDs.SetActive(true);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(true);
        }
        AREF.SetActive(true);
        ArduinoResetTwo.SetActive(true);

    }

    public void ClickButtonOne()
    {
        PowerUSB.SetActive(true);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }

    public void ClickButtonTwo()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(true);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }

    public void ClickButtonThree()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(true);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }

    public void ClickButtonFour()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(true);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }

    public void ClickButtonFive()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(true);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }

    public void ClickButtonSix()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(true);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }

    public void ClickButtonSeven()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(true);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }

    public void ClickButtonEight()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(true);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonNine()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(true);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonTen()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(true);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonEleven()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(true);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonTwelve()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(true);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonThirteen()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(true);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonFourteen()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(true);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonFifthteen()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(true);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonSixteen()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(true);
        ArduinoResetTwo.SetActive(false);
    }
    public void ClickButtonSeventeen()
    {
        PowerUSB.SetActive(false);
        Power.SetActive(false);
        VoltageRegulator.SetActive(false);
        CrystalOscillator.SetActive(false);
        ArduinoResetOne.SetActive(false);
        ThreePointThreeV.SetActive(false);
        FiveV.SetActive(false);
        for (int i = 0; i < GND.Length; i++)
        {
            GND[i].SetActive(false);
        }
        Vin.SetActive(false);
        for (int i = 0; i < AnalogPins.Length; i++)
        {
            AnalogPins[i].SetActive(false);
        }
        MainMicrocontroller.SetActive(false);
        ICSPPin.SetActive(false);
        PowerLEDIndicator.SetActive(false);
        TXAndRXLEDs.SetActive(false);
        for (int i = 0; i < DigitalIO.Length; i++)
        {
            DigitalIO[i].SetActive(false);
        }
        AREF.SetActive(false);
        ArduinoResetTwo.SetActive(true);
    }

    private void AbleBoardDesc()
    {
        isBoardDescActive = true;
        //Arduino AR Object Active
        Arduino.SetActive(true);
        //Turn on More Option Button
        MoreButton.gameObject.SetActive(true);
        MoreButton.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1, -1, 1);
        //Turn off everything except Board Desc ICON
        BoardDescButtonText.gameObject.SetActive(false);
        QuizButton.gameObject.SetActive(false);
        //Scroll Rect Area Active
        BottomHighligtedArea.gameObject.SetActive(true);
    }

    private void DisableBoardDesc()
    {
        isBoardDescActive = false;
        Arduino.SetActive(false);
        //When disabling Board Desc, Make sure turn off every functions/elements related to 'More' button
        moreInfoManager.IsMoreInfoBoxActivated = false;
        MoreButton.gameObject.SetActive(false);
        MoreButton.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1, 1, 1);
        MoreDescTextBox.gameObject.SetActive(false);
        MoreInfoBox.gameObject.SetActive(false);
        //Turn On Default
        ClickButtonAll();
        BoardDescButtonText.gameObject.SetActive(true);
        QuizButton.gameObject.SetActive(true);
        BottomHighligtedArea.gameObject.SetActive(false);
    }
}
