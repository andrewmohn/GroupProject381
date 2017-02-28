#include "stdafx.h"

class LegoSort
{
private:
	Lego lego;
	LegoColor legoColor;
public:
	LegoSort();
	void getCameraValues(ColorCameraAdapter);
	LegoColor findLegoColor();
};