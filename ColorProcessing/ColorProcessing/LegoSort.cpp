#include "stdafx.h"

LegoSort::LegoSort()
{
	//All non-designated lego values are considered a failure.
	colors[0] = legoFail;
	colors[1] = legoBlack;
	colors[2] = legoBlue;
	colors[3] = legoGreen;
	colors[4] = legoRed;
	colors[5] = legoWhite;
	colors[6] = legoYellow;
	colors[7] = legoGrey;
}

int LegoSort::findHueIndex()
{
	for (int i = 0; i < NUM_HUES; i++)
	{
		if (hues[i] + COLOR_VARIANCE > color.hue && hues[i] - COLOR_VARIANCE < color.hue)
		{
			return i;
		}
	}
}


//Get the camera values from the adapter
void LegoSort::getCameraValues(ColorCameraAdapter adapter)
{
	color = adapter.getCameraColor();
}
//Find which lego color is being seen
LegoColor LegoSort::findLegoColor()
{
	return colors[findHueIndex()];
}