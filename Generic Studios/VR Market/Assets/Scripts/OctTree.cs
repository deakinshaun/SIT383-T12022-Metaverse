using System.Collections;
using System.Collections.Generic;
using UnityEngine; 

public class OctTree : MonoBehaviour
{
    protected float OctTreeLeafSize = 0.01f;
    protected int maxPointPerVoxel = 5;
    protected GameObject nodeShape;

    protected class OctTreeElement
    {
        //public PointCloudPoint point;
        public Color colour;
        //public OctTreeNode containedIn;
    }
    void Start()
    {
        
    }


    void Update()
    {
        
    }
}
