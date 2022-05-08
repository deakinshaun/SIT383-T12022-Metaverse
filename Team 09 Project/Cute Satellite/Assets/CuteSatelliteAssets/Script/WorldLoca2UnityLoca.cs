using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldLoca2UnityLoca : MonoBehaviour
{
    // this Scritp is transfer world location to unity location

    public float BegX;
    public float BegY;
    public float FinX;
    public float FinY;
    public float BegLon;
    public float BegLat;
    public float FinLon;
    public float FinLat;
    public float CurLon;//current longitude and latitude is get from mobile device;
    public float CurLat;
    public float TargetX;//target x and y is output;
    public float TargetY;
    public void Transfer()
    {
        TargetX = CurLon * (FinX - BegX) / (FinLon - BegLon);
        TargetY = CurLat * (FinY - BegY) / (FinLat - BegLat);
    }
}
