using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;
public class botanyfbx : MonoBehaviour //find fbx
{
    public static botanyfbx Inst;
    private void Awake()
    {
        Inst = this;
        init();
    }
    void Start()
    {
        
    }
    void init()
    {
        if (botanyDlg.Inst.cursel != null)
        {
            Transform t;
            for (int i = 0; i < transform.childCount; i++) //all fbx
            {
                t = transform.GetChild(i);
                if (t == null)
                {
                    continue;
                }

                if (botanyDlg.Inst.cursel.name == t.gameObject.name) //current botany
                {
                    botanyDlg.Inst.cursel.model = t; 
                    Debug.LogWarning("model " + t.name);
                }
                else
                {
                    t.gameObject.SetActive(false);
                }
            }
            if (botanyDlg.Inst.cursel.model == null)
            {
                Debug.LogError("mmodel err");
            }
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
