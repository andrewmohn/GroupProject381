#include "stdafx.h"

LegoSort::LegoSort()
{
	//All non-designated lego values are considered a failure.
	for (int i = 0; i < NUM_HUES; i++)
	{
		for (int j = 0; j < NUM_SAT; j++)
		{
			for (int k = 0; k < NUM_VALUES; k++)
			{
				colors[i][j][k] = legoFail;
			}
		}
	}
	colors[2][1][0] = legoBlack;
	colors[3][3][1] = legoBlue;
	colors[0][4][2] = legoRed;
	colors[1][0][3] = legoWhite;
	colors[1][2][4] = legoYellow;
}

int LegoSort::findHueIndex()
{
	int hueIndex = 0;
	for (int i = 0; i < NUM_HUES; i++)
	{
		if (color.hue + COLOR_VARIANCE >= 180)
		{
			if (color.hue + COLOR_VARIANCE - 180 > hues[i])
			{
				hueIndex = i;
			}
		}
		else if (color.hue - COLOR_VARIANCE < 0)
		{
			if (color.hue - COLOR_VARIANCE + 180 < hues[i])
			{
				hueIndex = i;
			}
		}
		else if (color.hue + COLOR_VARIANCE > hues[i] && color.hue - COLOR_VARIANCE < hues[i])
		{
			hueIndex = i;
		}
	}
	return hueIndex;
}

//Get the camera values from the adapter
void LegoSort::getCameraValues(ColorCameraAdapter adapter)
{
	color = adapter.getCameraColor();
}
//Find which lego color is being seen
LegoColor LegoSort::findLegoColor()
{
	LegoColor lego = legoFail;
	//Find the most important part, the hue
	int hueIndex = findHueIndex();
	int satValue = 0;

	//Find the lego color associated with that hue.
	for (int i = 0; i < NUM_SAT; i++)
	{
		for (int j = 0; j < NUM_VALUES; j++)
		{
			//First hue value found
			if (lego == legoFail && colors[hueIndex][i][j] != legoFail)
			{
				lego = colors[hueIndex][i][j];
				satValue = i;
			}
			//If we find a second value associated to this hue that is not the found value
			else if (colors[hueIndex][i][j] != legoFail && lego != colors[hueIndex][i][j])
			{
				//We check which saturation is closer
				if (abs(sats[i] - color.saturation) < abs(sats[satValue] - color.saturation))
				{
					lego = colors[hueIndex][i][j];
				}
			}
		}
	}
	
	return lego;
}