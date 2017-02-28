#include "stdafx.h"

//Color Camera Adapter is entirely unimplemented since, a) I don't know how it need to be done yet, and b) to make testing easier.
class ColorCameraAdapter
{
public:
	ColorCameraAdapter();
	CameraColor getCameraColor();
};

ColorCameraAdapter::ColorCameraAdapter()
{

}

CameraColor ColorCameraAdapter::getCameraColor()
{
	CameraColor color;
	std::cin >> color.red;
	std::cin >> color.green;
	std::cin >> color.blue;
	return color;
}