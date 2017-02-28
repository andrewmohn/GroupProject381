#include "stdafx.h"

class LegoSort
{
private:
	CameraColor color;
public:
	//Constructor
	LegoSort();
	//Get the camera values from the adapter
	void getCameraValues(ColorCameraAdapter);
	//Find which lego color is being seen
	LegoColor findLegoColor();
};

LegoSort::LegoSort()
{

}

void LegoSort::getCameraValues(ColorCameraAdapter adapter)
{
	color = adapter.getCameraColor();
}

LegoColor LegoSort::findLegoColor()
{
	if (color.red == 255 && color.green == 0 && color.blue == 0)
	{
		return legoRed;
	}
	else if (color.red == 0 && color.green == 255 && color.blue == 0)
	{
		return legoGreen;
	}
	else if (color.red == 0 && color.green == 0 && color.blue == 255)
	{
		return legoBlue;
	}
}