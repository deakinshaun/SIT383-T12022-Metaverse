using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Mgr : MonoBehaviour
{
    public static Mgr Inst;
    public List<GameObject> panes; 
    [Header("all pane parent")]
    public Transform paneparent;
    public paneDlg pane;
    [Header("mainDlg")]
    public mainDlg m_mainDlg;
    [Header("all pane parent")]
    public AudioSource ads;
     private void Awake()
    {
        
        if(Inst==null)
        {
            Inst = this;
            panes = new List<GameObject>();
            int len = paneparent.childCount;
            for (int i = 0; i < len; i++)
            {
                panes.Add(paneparent.GetChild(i).gameObject);
            }
            pane.gameObject.SetActive(false);
            DontDestroyOnLoad(gameObject);
            Debug.LogWarning(".........................mgr first");
        }
        else
        {
            Debug.LogWarning(".........................mgr copy");
        }
        ads = GetComponent<AudioSource>();
        
    }
    void Start()
    {
        showpan("start");
        Debug.LogWarning(".........................mgr3");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.B))
        {
            botanyDlg.Inst.txtpane.gameObject.SetActive(!botanyDlg.Inst.txtpane.gameObject.activeSelf);
        }
        botanyDlg.Inst.setheight();
    }
    public void onlogin() 
    {
        showpan("login");
    }
    public void onreg()
    {
        showpan("reg");
    }
    public void onback()
    {
        showpan("main");
        SceneManager.LoadScene(1);
    }
   
    public void showpan(string pname)
    {
        for (int i = 0; i < panes.Count; i++)
        {
            if(panes[i]!=null)
            {
                if(panes[i].name==pname)
                {
                    panes[i].SetActive(true);
                }
                else
                {
                    panes[i].SetActive(false);
                }
            }
        }
    }
}
