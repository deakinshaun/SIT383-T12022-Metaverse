using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class paneDlg : MonoBehaviour
{
    public Text info;
    public Button[] btns;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void onok()
    {
        gameObject.SetActive(false);
    }
    public void oncancel()
    {
        gameObject.SetActive(false);
    }
    public void show(string str,int t=1)
    {
        info.text = str;
        for (int i = 0; i < btns.Length; i++)
        {
            if(i<t)
            {
                btns[i].gameObject.SetActive(true);
            }
            else
            {
                btns[i].gameObject.SetActive(false);
            }
           
        }
    }
}
