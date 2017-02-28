#include "stdafx.h"

class LegoSort
{
private:
	Lego lego;
	LegoColor legoColor;
public:
	//Constructor
	LegoSort();
	//Get the camera values from the adapter
	void getCameraValues(ColorCameraAdapter);
	//Find which lego color is being seen
	LegoColor findLegoColor();
	//Send the number that the part should be sorted to
	void setSortNumber();
};