using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DescLabelCallOut : MonoBehaviour
{
    public LineRenderer DescPointingLine;
    public GameObject TargetObject;

    // Start is called before the first frame update
    void Start()
    {
        DescPointingLine.startWidth = 0.00f;
        DescPointingLine.endWidth = 0.02f;
        DescPointingLine.material.color = Color.white;
    }

    // Update is called once per frame
    void Update()
    {
        DescPointingLine.SetPosition(0, this.transform.position);
        DescPointingLine.SetPosition(1, TargetObject.transform.position);
    }
}
