#include "stdafx.h"

//Color Camera Adapter is entirely unimplemented since, a) I don't know how it need to be done yet, and b) to make testing easier.


ColorCameraAdapter::ColorCameraAdapter()
{
	//Constructor will "Wrap" the camera object
}
CameraColor ColorCameraAdapter::getCameraColor()
{
	std::cout << "Please enter things for testing.\n";
	std::cin >> color.red;
	std::cin >> color.green;
	std::cin >> color.blue;
	return color;
}