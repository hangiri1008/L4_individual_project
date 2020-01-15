using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MotherBoardDescUI : MonoBehaviour
{
    //Control on MoreInfoManager
    public MoreInfoManager moreInfoManager;

    //Arduino
    public GameObject MotherBoard;

    //Arduino components
    public GameObject BIOS;
    public GameObject SouthBridge;
    public GameObject AGPSlot;
    public GameObject[] PCISlot;
    public GameObject NorthBridge;
    public GameObject[] ConnectorsForIntegratedPeripherals;
    public GameObject CPUSocket;
    public GameObject ATXPowerConnector;
    public GameObject[] DRAMMemorySlot;
    public GameObject CMOSBackupBattery;

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
        BIOS.SetActive(true);
        SouthBridge.SetActive(true);
        AGPSlot.SetActive(true);
        for(int i=0; i< PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(true);
        }
        NorthBridge.SetActive(true);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(true);
        }
        CPUSocket.SetActive(true);
        ATXPowerConnector.SetActive(true);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(true);
        }
        CMOSBackupBattery.SetActive(true);
    }

    public void ClickButtonOne()
    {
        BIOS.SetActive(true);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }

    public void ClickButtonTwo()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(true);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }

    public void ClickButtonThree()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(true);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }

    public void ClickButtonFour()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(true);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }

    public void ClickButtonFive()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(true);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }

    public void ClickButtonSix()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(true);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }

    public void ClickButtonSeven()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(true);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }

    public void ClickButtonEight()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(true);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(false);
    }
    public void ClickButtonNine()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(true);
        }
        CMOSBackupBattery.SetActive(false);
    }
    public void ClickButtonTen()
    {
        BIOS.SetActive(false);
        SouthBridge.SetActive(false);
        AGPSlot.SetActive(false);
        for (int i = 0; i < PCISlot.Length; i++)
        {
            PCISlot[i].SetActive(false);
        }
        NorthBridge.SetActive(false);
        for (int i = 0; i < ConnectorsForIntegratedPeripherals.Length; i++)
        {
            ConnectorsForIntegratedPeripherals[i].SetActive(false);
        }
        CPUSocket.SetActive(false);
        ATXPowerConnector.SetActive(false);
        for (int i = 0; i < DRAMMemorySlot.Length; i++)
        {
            DRAMMemorySlot[i].SetActive(false);
        }
        CMOSBackupBattery.SetActive(true);
    }

    private void AbleBoardDesc()
    {
        isBoardDescActive = true;
        //Arduino AR Object Active
        MotherBoard.SetActive(true);
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
        MotherBoard.SetActive(false);
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