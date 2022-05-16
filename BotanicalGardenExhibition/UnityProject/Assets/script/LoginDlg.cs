using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class LoginDlg : MonoBehaviour
{
    public InputField ifname;
    public InputField ifpwd;
    public Toggle tgpwd;
    void Start()
    {
        tgpwd.onValueChanged.AddListener(ontgpwd);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void ontgpwd(bool bl)
    {
        PlayerPrefs.SetInt("tgpwd", Convert.ToInt32(bl));
    }
    public void onback()
    {
        Mgr.Inst.showpan("start");
    }
    public void onlogin() 
    {
        Mgr.Inst.showpan("main");
    }
    public void onforgetpwd()
    {
        if(tgpwd.isOn)
        {
            PlayerPrefs.SetString("name", ifname.text);
            PlayerPrefs.SetString("pwd", ifpwd.text);
        }
    }
}
