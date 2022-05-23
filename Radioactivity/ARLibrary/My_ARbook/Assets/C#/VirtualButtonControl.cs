
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
//虚拟按钮的接口
public class VirtualButtonControl : MonoBehaviour, IVirtualButtonEventHandler
{
    //虚拟按钮组件
    VirtualButtonBehaviour[] buttons;
    private void Awake()
    {
        buttons = GetComponentsInChildren<VirtualButtonBehaviour>();
        for (int i = 0; i < buttons.Length; i++)
        {
            //注册当前代码
            buttons[i].RegisterEventHandler(this);
        }
    }
    //判断 点击按钮的名字
    public void OnButtonPressed(VirtualButtonBehaviour vb)
    {
        switch (vb.VirtualButtonName)
        {
            case "open":
                OnClickVir();
                break;
        }

    }
    public void OnClickVir()
    {
        //点击按钮
        //Handheld.Vibrate();
        Debug.Log("111");
    }
    public void OnButtonReleased(VirtualButtonBehaviour vb)
    {

    }

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

}
