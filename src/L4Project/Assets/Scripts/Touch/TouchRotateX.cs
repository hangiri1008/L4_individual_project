using UnityEngine;

public class TouchRotateX : MonoBehaviour
{
    private float rotationSpeed = 0.2f;

    void Update()
    {
        //Rotate the object with one finger only
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    // when touch starts, store the starting position where touch started
                    Vector2 lastTouchPos = touch.position;
                    break;

                case TouchPhase.Moved:
                    // rotate the object on x-axis (z-axis on object viewpoint)
                    Quaternion zPosRotate = Quaternion.Euler(0f, 0f , -touch.deltaPosition.x * rotationSpeed);
                    transform.rotation = transform.rotation * zPosRotate;
                    //store the last touch position of the object
                    lastTouchPos = touch.position;
                    break;
            }
        }
    }

}