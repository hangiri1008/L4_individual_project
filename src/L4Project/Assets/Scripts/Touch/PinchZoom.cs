using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinchZoom : MonoBehaviour
{
    public GameObject Object;

    void Update()
    {
        if (Input.touchCount == 0)
        {
            Touch touch = Input.touches[0];
            Ray ray = Camera.main.ScreenPointToRay(touch.position);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 100f))
            {
                Object = hit.collider.gameObject;
            }
        }

        //zoom the object with two finger only
        if (Input.touchCount == 2)
        {
            Touch firstFingerTouch = Input.GetTouch(0);
            Touch secondFingerTouch = Input.GetTouch(1);

            //Position in the last frame of the touch.
            Vector2 firstFingerLastPos = firstFingerTouch.position - firstFingerTouch.deltaPosition;
            Vector2 secondFingerLastPos = secondFingerTouch.position - secondFingerTouch.deltaPosition;

            //Distance between the touches
            float touchDeltaMag = (firstFingerTouch.position - secondFingerTouch.position).magnitude;
            float lastTouchDeltaMag = (firstFingerLastPos - secondFingerLastPos).magnitude;

            //distances difference
            float deltaMagDiff = lastTouchDeltaMag - touchDeltaMag;

            float zoom = deltaMagDiff * 0.02f * Time.deltaTime;

            Vector3 objectScale = Object.transform.localScale - new Vector3(zoom, zoom, zoom);
            Object.transform.localScale = objectScale;

        }
    }
}