using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ClientInfoPanel : MonoBehaviour, IPanel
{
    public Text caseNumText;
    public InputField firstName, lastName;
    public LocationPanel locationPanel;

    private void OnEnable()
    {
        caseNumText.text = "CASE NUMBER " + UIManager.Instance.activeCase.caseID;
    }

    public void ProcessInfo()
    {
        //check if first name & last name are not empty
        if (string.IsNullOrEmpty(firstName.text) || string.IsNullOrEmpty(lastName.text))
        {
            Debug.Log("Plase Fill Out Your Name");
        }
        else
        {
            UIManager.Instance.activeCase.name = firstName.text + " " + lastName.text;
            EnableLocationPanel();
        }
    }

    private void EnableLocationPanel()
    {
        locationPanel.gameObject.SetActive(true);
    }
}
