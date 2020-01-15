using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropdownManager : MonoBehaviour
{

    public void HandleLanguageOption(int option)
    {
        if (option == 0)
        {
            Lean.Localization.LeanLocalization.CurrentLanguage = "English";
        }
        if (option == 1)
        {
            Lean.Localization.LeanLocalization.CurrentLanguage = "Spanish";
        }
        if (option == 2)
        {
            Lean.Localization.LeanLocalization.CurrentLanguage = "Chinese";
        }
    }
}
