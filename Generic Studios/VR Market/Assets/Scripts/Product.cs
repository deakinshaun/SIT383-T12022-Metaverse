using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Product : MonoBehaviour
{
    public DescriptionManager descriptionManager;
    public void Buy() {
        Destroy(this.gameObject);
        descriptionManager.myString = "This item has been purchased";
    }
}
