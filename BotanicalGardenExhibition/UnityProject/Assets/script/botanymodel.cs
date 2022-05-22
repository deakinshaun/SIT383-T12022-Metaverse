using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//botany click
public class botanymodel : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnMouseDown()
    {
        botanyDlg.Inst.showinfo(1);
        Debug.LogWarning(name + " OnMouseDown");
    }
}
