using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

//list item
public class Botanyitem : MonoBehaviour
{
    public Button btn; 
    public RectTransform rect;

    [Header("botany image")]
    public Image icon;
    [Header("botany name")]
    public Text txt; 
    public Transform model; //fbx
    public botanyinfo minfo; //info
    private void Awake()
    {
        if(rect==null)
        {
            rect = GetComponent<RectTransform>();
        }
        
    }

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void onbtn() //select this botany
    {
        botanyDlg.Inst.onbtn(this);
    }
    public void init(Sprite sp)
    {
        if(sp!=null)
        {
            name = sp.name;
            icon.sprite = sp;
            txt.text = name;
        }
    }
}
