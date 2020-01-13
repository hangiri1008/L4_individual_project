using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArduinoBoardDescLabelCallOut : MonoBehaviour
{
    public LineRenderer arduino_DescPointingLine;
    public GameObject arduino_targetObject;

    // Start is called before the first frame update
    void Start()
    {
        arduino_DescPointingLine.startWidth = 0.00f;
        arduino_DescPointingLine.endWidth = 0.02f;
        arduino_DescPointingLine.material.color = Color.white;
    }

    // Update is called once per frame
    void Update()
    {
        arduino_DescPointingLine.SetPosition(0, this.transform.position);
        arduino_DescPointingLine.SetPosition(1, arduino_targetObject.transform.position);
    }
}
