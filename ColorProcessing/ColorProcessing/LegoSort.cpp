#include "stdafx.h"

enum legoColors { red, blue, green, yellow };

class LegoSort
{
private:
	int red;
	int green;
	int blue;
	legoColors legoColor;
public:
	LegoSort();
	void getCameraValues(ColorCameraAdapter);
	legoColors getLegoColor();
};