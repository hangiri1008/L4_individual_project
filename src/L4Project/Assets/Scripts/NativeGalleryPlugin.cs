using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NativeGalleryPlugin : MonoBehaviour
{
    public void ScreenShot()
    {
        StartCoroutine(TakeScreenshotAndSave());
    }

    private IEnumerator TakeScreenshotAndSave()
    {
        yield return new WaitForEndOfFrame();

        Texture2D screenSize = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
        screenSize.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
        screenSize.Apply();

        // Save the screenshot to Gallery/Photos
        Debug.Log("Permission result: " + NativeGallery.SaveImageToGallery(screenSize, "Recents", "ScreenShot.png"));

        // To avoid memory leaks
        Destroy(screenSize);
    }
}
