using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterfallScrolling : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    private float scrollY = 0.5f;

    // Update is called once per frame
    void Update()
    {
        float OffsetY = Time.time * scrollY;
     GetComponent<Renderer>().material.mainTextureOffset = new Vector2(0, OffsetY);   
    }
}
