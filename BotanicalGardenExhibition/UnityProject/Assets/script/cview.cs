using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//模型旋转
public class cview : MonoBehaviour
{
    public Vector3 mdpos; //mouse down pos
    public Quaternion mdqua;//mouse down rotation
    [Header("rotate coefficient")]
    public float rcof;
    public bool bmousedown; 
    public Quaternion iqua; //start rotation
    public Vector3 ipos; //start position
    public Vector3 rtx; //rotate axis x
    public Vector3 rty; //rotate axis y
    public Camera cam;
    public bool brt;   //can rotate
    void Start()
    {
        iqua = transform.localRotation;
    }

    // Update is called once per frame
    void Update()
    {
        if(brt)  
        {
            if (Input.GetMouseButtonDown(0))  
            {
                mdqua = transform.rotation; //start pos
                mdpos = Input.mousePosition;
                bmousedown = true;
            }
            if (Input.GetMouseButtonUp(0))
            {
                bmousedown = false;
            }
            if (bmousedown)
            {
                rty = cam.transform.right;   //y rotate axis
                rtx = -cam.transform.up;    //x rotate axis
                Vector3 v = Input.mousePosition - mdpos; 
                Quaternion qy = Quaternion.AngleAxis(v.y * rcof, rty);  //y rotate
                Quaternion qx = Quaternion.AngleAxis(v.x * rcof, rtx);  //x rotate
                Quaternion qt = qx * qy * mdqua;           
                float f = Quaternion.Angle(qt, transform.rotation);  
                if (f >= 2) 
                {
                    transform.rotation = qt;
                    mdqua = transform.rotation; 
                    mdpos = Input.mousePosition;
                }
            }
           
        }
        
       
    }
    public void rst()  //reset rotation
    {
        transform.localRotation = iqua;  
    }   
}
