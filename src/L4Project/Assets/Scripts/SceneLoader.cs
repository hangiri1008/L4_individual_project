using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    bool isLandscapeMode = false;

    public void LoadARMapScene()
    {
        SceneManager.LoadScene("ARMap");
    }

    public void LoadAREducationScene()
    {
        LandscapeMode();

        SceneManager.LoadScene("AREduMain");
    }

    public void LoadStartScene()
    {
        PortraitMode();

        SceneManager.LoadScene(0);
    }

    public void QuitScene()
    {
        Application.Quit();
    }

    private void PortraitMode()
    {
        isLandscapeMode = false;

        Screen.autorotateToPortrait = true;

        Screen.autorotateToPortraitUpsideDown = true;

        Screen.autorotateToLandscapeLeft = false;

        Screen.autorotateToLandscapeRight = false;

        Screen.orientation = ScreenOrientation.AutoRotation;
    }

    private void LandscapeMode()
    {
        isLandscapeMode = true;

        Screen.autorotateToPortrait = false;

        Screen.autorotateToPortraitUpsideDown = false;

        Screen.autorotateToLandscapeLeft = true;

        Screen.autorotateToLandscapeRight = true;

        Screen.orientation = ScreenOrientation.AutoRotation;
    }

}
