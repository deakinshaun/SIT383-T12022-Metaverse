using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class mainDlg : MonoBehaviour
{
    [Header("bottom buttons")]
    public Button[] btns;
    [Header("bottom button icons")]
    public Image[] icons;
    public botanyDlg botanypane;
    public friendDlg friendpane;
    public userDlg userpane;
    public List<GameObject> panes;
    void Start()
    {
        panes = new List<GameObject>();
        panes.Add(friendpane.gameObject);
        panes.Add(botanypane.gameObject);
        panes.Add(userpane.gameObject);
        onsel(1);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    public void onfriend()
    {
        onsel(0);
    }
    public void onar()
    {
        onsel(1);
    }
    public void onuser()
    {
        onsel(2);
    }
    void onsel(int id)
    {
       
        Debug.LogWarning("onsel " + id);
        for (int i = 0; i < btns.Length; i++)
        {
            if(i==id)
            {
                
                btns[i].image.color = icons[i].color = btns[i].colors.selectedColor;
                panes[i].gameObject.SetActive(true);
            }
            else
            {
                btns[i].image.color = icons[i].color = btns[i].colors.normalColor;
                panes[i].gameObject.SetActive(false);
            }
        }
    }
}
