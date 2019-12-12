using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CircularMenuControl : MonoBehaviour
{
    public Circular CircularData;
    public OuterRingPiece OuterRingPiecePrefab;
    public float WidthGapDegree = 1f;
    public System.Action<string> callback;
    protected OuterRingPiece[] Pieces;
    protected CircularMenuControl Parent;

    private Vector2 mousePostion;
    private Vector2 fromMiddleTop = new Vector2(0.5f, 1.0f);
    private Vector2 centerCircle = new Vector2(0.5f, 0.5f);
    private Vector2 toMiddleTop;


    [HideInInspector]
    public string Path;

    void Start()
    {
        var stepLength = 360f / CircularData.Elements.Length;
        var iconDist = Vector3.Distance(OuterRingPiecePrefab.IconButton.transform.position, OuterRingPiecePrefab.RingPiece.transform.position);

        //Position it
        Pieces = new OuterRingPiece[CircularData.Elements.Length];

  
        for (int i = 0; i < CircularData.Elements.Length; i++)
        {
            Pieces[i] = Instantiate(OuterRingPiecePrefab, transform);
            //set root element
            Pieces[i].transform.localPosition = Vector3.zero;
            Pieces[i].transform.localRotation = Quaternion.identity;

            //set cake piece
            Pieces[i].RingPiece.fillAmount = 1f / CircularData.Elements.Length - WidthGapDegree / 360f;
            Pieces[i].RingPiece.transform.localPosition = Vector3.zero;
            Pieces[i].RingPiece.transform.localRotation = Quaternion.Euler(0, 0, -stepLength / 2f + WidthGapDegree / 2f + i * stepLength);

            //set icon
            Pieces[i].IconButton.transform.localPosition = Pieces[i].RingPiece.transform.localPosition + (Quaternion.AngleAxis((i-1) * stepLength, Vector3.forward) * Vector3.up * iconDist);
            Pieces[i].IconButton.sprite = CircularData.Elements[i].Icon;

        }
    }

    // Update is called once per frame
    void Update()
    {
        GetCurrentMenuItem();
    }



    private float NormalizeAngle(float a) => (a + 360f) % 360f;

    public void GetCurrentMenuItem()
    {
        mousePostion = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
        toMiddleTop = new Vector2(mousePostion.x / Screen.width, mousePostion.y / Screen.height);
        float angle = (Mathf.Atan2(fromMiddleTop.y - centerCircle.y, fromMiddleTop.x - centerCircle.x) - Mathf.Atan2(toMiddleTop.y - centerCircle.y, toMiddleTop.x - centerCircle.x)) * Mathf.Rad2Deg;

        if (angle < 0) { angle += 360; }

        var stepLength = 360f / CircularData.Elements.Length;
        var activeElement = (int)(angle / stepLength);

        for (int i = 0; i < CircularData.Elements.Length; i++)
        {
            if (i == activeElement)
                Pieces[i].RingPiece.color = new Color(1f, 1f, 1f, 0.75f);
            else
                Pieces[i].RingPiece.color = new Color(1f, 1f, 1f, 0.5f);
        }

        if (Input.GetButtonDown("Fire1"))
        {
            ButtonAction(activeElement);
        }
    }

    private void ButtonAction(int activeElement)
    {
        var path = Path + "/" + CircularData.Elements[activeElement].Name;
        if (CircularData.Elements[activeElement].NextCircular != null)
        {
            SubCircularMenuActive(activeElement, path);
            gameObject.SetActive(false);
        }
        else
        {
            Debug.Log(CircularData.Elements[activeElement]);
            callback?.Invoke(path);
        }
        
    }
    
    
    private void SubCircularMenuActive(int activeElement, string path)
    {
        var newSubRing = Instantiate(gameObject, transform.parent).GetComponent<CircularMenuControl>();
        newSubRing.Parent = this;
        for (var j = 0; j < newSubRing.transform.childCount; j++)
            Destroy(newSubRing.transform.GetChild(j).gameObject);
        newSubRing.CircularData = CircularData.Elements[activeElement].NextCircular;
        newSubRing.Path = path;
        newSubRing.callback = callback;
    }
}