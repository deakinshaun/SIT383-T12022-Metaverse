using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PhysicsButton : MonoBehaviour
{
    [SerializeField] private float threshold = .1f;
    [SerializeField] private float deadZone = 0.025f;
    
    private bool _isPressed;
    private Vector3 _startPos;
    private ConfigurableJoint _joint;

    public UnityEvent onPressed, onReleased;
    void Start()
    {
        _startPos = transform.localPosition;
        _joint = GetComponent<ConfigurableJoint>();
    }

    void Update()
    {
        if (_isPressed != true && GetValue() + threshold >= 1) {
            Pressed();
        }
        if (_isPressed == true && GetValue() - threshold <= 0) {
            Released();
        }
    }

    private float GetValue() {
        var value = Vector3.Distance(_startPos, transform.localPosition) / _joint.linearLimit.limit;

        if (Mathf.Abs(value) < deadZone) {
            value = 0;
        }

        return Mathf.Clamp(value, -1f, 1f);
    }

    private void Pressed() {
        _isPressed = true;
        onPressed.Invoke();
    }

    private void Released() {
        _isPressed = false;
        onReleased.Invoke();
    }
}
