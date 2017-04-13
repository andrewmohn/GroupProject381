#include "stdafx.h"

LegoSort::LegoSort()
{
	//All non-designated lego values are considered a failure.
	for (int i = 0; i < NUM_RED; i++)
	{
		for (int j = 0; j < NUM_GREEN; j++)
		{
			for (int k = 0; k < NUM_BLUE; k++)
			{
				colors[i][j][k] = legoFail;
			}
		}
	}

	//Input the values available
	colors[3][3][3] = legoRed;
	colors[0][1][0] = legoGreen;
	colors[0][0][0] = legoWhite;
	colors[4][4][4] = legoBlack;
	colors[2][1][1] = legoYellow;
}

int LegoSort::findHueIndex()
{
	for (int i = 0; i < 2; i++)
	{
		if (redValues[i] + COLOR_VARIANCE > color.hue && redValues[i] - COLOR_VARIANCE < color.hue)
		{
			return i;
		}
	}
}
int LegoSort::findSaturationIndex()
{
	for (int i = 0; i < 2; i++)
	{
		if (greenValues[i] + COLOR_VARIANCE > color.saturation && greenValues[i] - COLOR_VARIANCE < color.saturation)
		{
			return i;
		}
	}
}
int LegoSort::findValueIndex()
{
	for (int i = 0; i < 2; i++)
	{
		if (blueValues[i] + COLOR_VARIANCE > color.value && blueValues[i] - COLOR_VARIANCE < color.value)
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
	return colors[findHueIndex()][findSaturationIndex()][findValueIndex()];
}