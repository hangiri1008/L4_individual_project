using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocationPanel : MonoBehaviour, IPanel
{
    public RawImage mapImg;
    public InputField mapNotes;
    public Text caseNumText;
    public TakePhotoPanel takePhotoPanel;

    public string apiKey;
    public float xCord, yCord;
    public int zoom, imgWSize, imgHSize;
    public string url = "https://maps.googleapis.com/maps/api/staticmap?";

    private void OnEnable()
    {
        caseNumText.text = "CASE NUMBER " + UIManager.Instance.activeCase.caseID;
    }

    private IEnumerator Start()
    {
        //Fetch GEO Data
        if (Input.location.isEnabledByUser == true)
        {
            //start service
            Input.location.Start();

            int maxWait = 20;
            while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
            {
                yield return new WaitForSeconds(1.0f);
                maxWait--;
            }

            if (maxWait < 1)
            {
                Debug.Log("Timed Out!");
                yield break;
            }

            if (Input.location.status == LocationServiceStatus.Failed)
            {
                Debug.Log("Unable to determine the device location...");
            }
            else
            {
                xCord = Input.location.lastData.latitude;
                yCord = Input.location.lastData.longitude;
            }

            Input.location.Stop();
        }
        else
        {
            Debug.Log("Location services are not Enabled!");
        }
        StartCoroutine(GetLocationRoutine());
    }

    //Download static map
    IEnumerator GetLocationRoutine()
    {
        //Construct appropriate url
        url = url + "center=" + xCord + "," + yCord + "&zoom=" + zoom + "&size=" + imgWSize + "x" + imgHSize + "&key=" + apiKey;

        using (WWW map = new WWW(url))
        {
            yield return map;

            if (map.error != null)
            {
                Debug.LogError("Map Error: " + map.error);
            }

            mapImg.texture = map.texture;
        }
    }

    public void ProcessInfo()
    {
        UIManager.Instance.activeCase.locationNotes = mapNotes.text;
        EnableTakePhotoPanel();
    }

    private void EnableTakePhotoPanel()
    {
        takePhotoPanel.gameObject.SetActive(true);
    }
}