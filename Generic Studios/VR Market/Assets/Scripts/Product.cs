using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Product : MonoBehaviour
{
    public DescriptionManager descriptionManager;
    public void Buy() {
        Destroy(this.gameObject);
        descriptionManager.myText.text = "This item has been purchased";
    }
}
