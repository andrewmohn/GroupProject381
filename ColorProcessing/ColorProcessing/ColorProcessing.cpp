// ColorProcessing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	ColorCameraAdapter* colorCamera = new ColorCameraAdapter();
	OutputAdapter* output = new OutputAdapter();
	LegoSort* sorter = new LegoSort();

	colorCamera->getCameraColor();
    return 0;
}