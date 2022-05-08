using System;
using UnityEngine;

public struct ManoMotionFrame
{
	/// The width of the iamge.
	public int width;
	/// The height of the iamge.
	public int height;
	/// The 2D texture of the iamge.
	public Texture2D texture;
	/// The pixels of the iamge.
	public Color32[] pixels;
	/// The orientation of the device. 
	public DeviceOrientation orientation;
}
