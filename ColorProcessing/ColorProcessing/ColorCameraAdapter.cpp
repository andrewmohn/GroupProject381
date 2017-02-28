#include "stdafx.h"

//Color Camera Adapter is entirely unimplemented since, a) I don't know how it need to be done yet, and b) to make testing easier.
class ColorCameraAdapter
{
private:
	ColorCameraAdapter* adapter = nullptr;
	ColorCameraAdapter();
public:
	//ColorCameraAdapter is a singleton, and will not have more than one class instanced
	ColorCameraAdapter* startInstance();
	CameraColor getCameraColor();
};

ColorCameraAdapter* ColorCameraAdapter::startInstance()
{
	if (adapter == nullptr)
	{
		adapter = new ColorCameraAdapter();
		return adapter;
	}
	return adapter;
}