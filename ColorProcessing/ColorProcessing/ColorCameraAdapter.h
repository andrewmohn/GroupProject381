#pragma once
using namespace cv;

class ColorCameraAdapter
{
private:
	CameraColor color;
	VideoCapture cap;
public:	
	ColorCameraAdapter();
	~ColorCameraAdapter();
	CameraColor getCameraColor();
};