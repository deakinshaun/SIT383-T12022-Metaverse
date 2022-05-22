using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;
using System.IO;
using UnityEngine.SceneManagement;
public class botanyinfo 
{
    public static List<botanyinfo> botanyinfos;
    public string name;
    public string des; //description
   
     botanyinfo()
    {
        name = des = "";
    }
    public bool read(string str)
    {
        StringBuilder sb = new StringBuilder();
        string[] lines = str.Split('\n'); //file line
        for (int i = 0; i < lines.Length; i++)
        {
            lines[i] = lines[i].Trim();
            if (lines[i].Length < 3)
            {
                continue;
            }
            if (name.Length<3) //first line name
            {
                name = lines[i];
            }
            else if (!char.IsLetter(lines[i][0])) //botany property start with  *
            {
                lines[i] = "<color=yellow>" + lines[i] + "</color>";
            }
            else  
            {
                lines[i] += ":";
            }
            sb.AppendFormat("{0}\r\n", lines[i]);
        }
        des = sb.ToString();
        if (name.Length<3||des.Length<10)
        {
            return false;
        }
        return true;
    }
    
    public static botanyinfo find(string pname)
    {
        for (int i = 0; i < botanyinfos.Count; i++)
        {
            if (botanyinfos[i].name == pname)
            {
                return botanyinfos[i];
            }
        }
        return null;
    }
    public static void load() 
    {
        if(botanyinfos == null)
        {
            botanyinfos = new List<botanyinfo>();
        }
        botanyinfos.Clear();
        TextAsset txt = Resources.Load<TextAsset>("botany/botanyinfo"); //botanyinfo.txt
        if (txt==null)
        {
            return;
        }
        string str = txt.text;
        string[] infos = str.Split('@'); //each botany info separate by @ in botanyinfo.txt
        botanyinfo tmp;
        for (int i = 0; i < infos.Length; i++) //botany infos
        {
            if(infos[i].Length>20)
            {
                tmp = new botanyinfo();
                if(tmp!=null)
                {
                    if(tmp.read(infos[i])) //read info
                    {
                        botanyinfos.Add(tmp);
                    }
                }
            }
        }
    }
   
}
public class botanyDlg : MonoBehaviour
{
    public static botanyDlg Inst;
    public InputField iffind; //find input

    [Header("botany scroll")]
    public RectTransform botanyscroll;

    [Header("botany scroll content")]
    public RectTransform botanyscrollcontent;

    public GameObject prebitem; //botany list item
    public List<Botanyitem> botanys; //all botanys
    public Botanyitem cursel;  //current selected botany
    [Header("botany scroll content")]
    public Text txtbotany; //botany info 

    [Header("botany scroll content")]
    public RectTransform contenttxt; //botany info content

    [Header("botany info pane")]
    public GameObject txtpane;

    [Header("botany info button sprite")]
    public Sprite[] spinfo;

    [Header("botany info button")]
    public Button btninfo;
    private void Awake()
    {
        botanys = new List<Botanyitem>();
        if(Inst==null)
        {
            Inst = this;
        }
        showinfo(0);
        Debug.LogWarning("------------------a "+name);
    }
    void Start()
    {
        Debug.LogWarning("------------------s " + name);
        init();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void showmodel(bool bl) //botany ar model 
    {
        if(cursel!=null)
        {
            if(cursel.model!=null)
            {
                cursel.model.gameObject.SetActive(bl);
            }
        }
    }
    public void setheight() //botany info height
    {
        if (txtbotany.gameObject.activeSelf)
        {
            if (contenttxt.rect.height < txtbotany.rectTransform.rect.height)
            {
                contenttxt.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, txtbotany.rectTransform.rect.height);
            }
        }
    }

    public void onbtn(Botanyitem item) //botany select
    {
        if(item!=null)
        {
            Debug.LogWarning("onbtn " + item.name);
            cursel = item;
            txtpane.gameObject.SetActive(false);
            Mgr.Inst.showpan("ar");  //ar camera
            SceneManager.LoadScene(1);
        }
    }
    public void onR() //reset fbx
    {
        if (cursel != null)
        {
            if(cursel.model!=null)
            {
                cview v = cursel.model.GetComponentInChildren<cview>();
                if(v!=null) 
                {
                    v.rst();
                }
            }
        }
    }
    public void showinfo(int n) //botany info
    {
        if(n==0)
        {
            txtpane.gameObject.SetActive(false);
        }
        else if(n==1)
        {
            txtpane.gameObject.SetActive(true);
        }
        else
        {
            txtpane.gameObject.SetActive(!txtpane.gameObject.activeSelf);
        }
       
        if (txtpane.gameObject.activeSelf)
        {
            if (cursel != null)
            {
                if (cursel.minfo != null)
                {
                    txtbotany.text = cursel.minfo.des;
                }
            }
            btninfo.image.sprite = spinfo[1];
        }
        else
        {
            btninfo.image.sprite = spinfo[0];
        }
    }
    void init()
    {
        Sprite[] sprites = Resources.LoadAll<Sprite>("botany"); //botany image
        botanyinfo.load(); //load info

        if (sprites!=null)
        {
            GameObject g;
            Botanyitem item;
            botanyinfo btmp;
            foreach (Sprite sp in sprites)
            {
                Debug.LogWarning("sp " + sp.name);
                g = Instantiate(prebitem); //list item
                if (g != null)
                {
                    g.transform.parent = botanyscrollcontent; //place int list
                    g.transform.localScale = Vector3.one;
                    item = g.GetComponent<Botanyitem>();
                    if (item != null)
                    {
                        btmp = botanyinfo.find(sp.name); //find info
                        if (btmp!=null)
                        {
                            item.minfo = btmp;
                        }
                        else
                        {
                            Debug.LogWarning(sp.name+"---------botanyinfo null ");
                        }
                        botanys.Add(item);
                        item.init(sp);
                    }
                }
            }
            showbotany();
        }
    }
    void showbotany(string str="") //find botany
    {
        string strf = str.ToLower();
        
        float w = 0;
        for (int i = 0; i < botanys.Count; i++)
        {
            if(str!="") //find
            {
                if (botanys[i].name.ToLower().IndexOf(strf) ==-1) //can not find
                {
                    botanys[i].gameObject.SetActive(false);
                    continue;
                }
            }
            botanys[i].gameObject.SetActive(true);
            w += botanys[i].rect.rect.width; //list width
            Debug.LogWarning("w " + w.ToString());
        }
        botanyscrollcontent.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal,w+30);
    }
    public void onfind() //find botany
    {
        iffind.text = iffind.text.Trim();
        showbotany(iffind.text);
    }
}
