using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CustomEvents : MonoBehaviour
{

    public static CustomEvents instance;
    // Start is called before the first frame update



    void Awake()
    {
        instance = this;
    }

    public event Action<string,Transform> onBonePose;
    public void PoseBone(string bone, Transform transform)
    {
        if (onBonePose != null)
        {
            onBonePose(bone, transform);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
