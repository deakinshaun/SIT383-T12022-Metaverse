using UnityEngine;
public class ToggleVisualizationValues : MonoBehaviour
{
	ManoVisualization _manoVisualization;

	private void Start()
	{
		_manoVisualization = GetComponent<ManoVisualization>();
	}
}
