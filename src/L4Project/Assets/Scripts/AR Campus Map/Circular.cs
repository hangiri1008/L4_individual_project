using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Circular", menuName = "CircularMenu/Circular", order = 1)]
public class Circular : ScriptableObject
{
    public CircularElement[] Elements;
}
