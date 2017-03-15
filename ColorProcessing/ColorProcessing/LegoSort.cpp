#include "stdafx.h"

LegoSort::LegoSort()
{
	colors[1][0][0] = legoRed;
	colors[0][1][0] = legoGreen;
	colors[0][0][1] = legoBlue;
}

int LegoSort::findRedIndex()
{
	for (int i = 0; i < 2; i++)
	{
		if (redValues[i] == color.red)
		{
			return i;
		}
	}
	return 0;
}
int LegoSort::findGreenIndex()
{
	for (int i = 0; i < 2; i++)
	{
		if (greenValues[i] == color.green)
		{
			return i;
		}
	}
	return 0;
}
int LegoSort::findBlueIndex()
{
	for (int i = 0; i < 2; i++)
	{
		if (blueValues[i] == color.blue)
		{
			return i;
		}
	}
	return 0;
}

//Get the camera values from the adapter
void LegoSort::getCameraValues(ColorCameraAdapter adapter)
{
	color = adapter.getCameraColor();
}
//Find which lego color is being seen
LegoColor LegoSort::findLegoColor()
{
	return colors[findRedIndex()][findBlueIndex()][findGreenIndex()];
}