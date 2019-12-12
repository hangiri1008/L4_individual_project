using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    private static UIManager _instance;
    private int caseID=0;

    public Case activeCase;
    public ClientInfoPanel clientInfoPanel;
    public GameObject borderPanel;

    public static UIManager Instance
    {
        get
        {
            if (_instance == null)
            {
                Debug.LogError("The UI Manager is NULL");
            }
            return _instance;
        }
    }

    private void Awake()
    {
        _instance = this;
    }

    public void CreateCase()
    {
        activeCase = new Case();
        activeCase.caseID = caseID.ToString();
        caseID++;
        EnableClientInfoPanel();
    }

    private void EnableClientInfoPanel()
    {
        clientInfoPanel.gameObject.SetActive(true);
        borderPanel.SetActive(true);
    }
}
