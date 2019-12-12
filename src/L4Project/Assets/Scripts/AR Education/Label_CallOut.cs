﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Label_CallOut : MonoBehaviour
{
    public LineRenderer line;
    public GameObject targetObject;

    // Start is called before the first frame update
    void Start()
    {
        line.startWidth = 0.01f;
        line.endWidth = 0.01f;
    }

    // Update is called once per frame
    void Update()
    {  
        line.SetPosition(0, this.transform.position);
        line.SetPosition(1, targetObject.transform.position);
    }
}