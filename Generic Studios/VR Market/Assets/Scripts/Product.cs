using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Product : MonoBehaviour
{
    public PhysicsButton physicsButton;
    public void Buy() {
        Destroy(this.gameObject);
        Destroy(physicsButton.button);
    }
}
