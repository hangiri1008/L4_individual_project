using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "CircularElement", menuName = "CircularMenu/Element", order = 2)]
public class CircularElement : ScriptableObject
{
    public string Name;
    public Sprite Icon;
    public Circular NextCircular;
}
