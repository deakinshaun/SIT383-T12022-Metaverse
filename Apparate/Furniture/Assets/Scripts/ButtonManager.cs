using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    private Button btn;
    public GameObject furniture;

    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.AddListener(SelectObject);  
    }

    void SelectObject()
    {
        DataHandler.Instance.furniture = furniture;
    }
}
