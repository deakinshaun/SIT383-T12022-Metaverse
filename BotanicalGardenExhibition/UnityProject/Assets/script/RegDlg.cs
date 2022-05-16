using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class RegDlg : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void onback()
    {
        Mgr.Inst.showpan("start");
    }
    public void onreg()
    {
        Mgr.Inst.showpan("login");
    }
}
