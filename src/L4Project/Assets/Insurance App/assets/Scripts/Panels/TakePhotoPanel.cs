using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TakePhotoPanel : MonoBehaviour, IPanel
{
    public Text caseNumText;
    public RawImage photoTaken;
    public InputField photoNotes;
    public OverviewPanel overviewPanel;

    private void OnEnable()
    {
        caseNumText.text = "CASE NUMBER " + UIManager.Instance.activeCase.caseID;    
    }

    public void ProcessInfo()
    {
        UIManager.Instance.activeCase.photoNotes = photoNotes.text;
        EnableOverviewPanel();
    }

    private void EnableOverviewPanel()
    {
        overviewPanel.gameObject.SetActive(true);
    }
}
