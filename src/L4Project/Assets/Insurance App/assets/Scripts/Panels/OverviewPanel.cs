﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OverviewPanel : MonoBehaviour, IPanel
{
    public Text caseNumTitle, nameTitle, dateTitle, locationTitle, locationNotes, photoNotes;
    public RawImage photoTaken;
    
    public void ProcessInfo()
    {
        throw new System.NotImplementedException();
    }
}
