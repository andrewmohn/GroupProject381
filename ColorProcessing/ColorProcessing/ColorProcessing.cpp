// ColorProcessing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	ColorCameraAdapter* colorCamera = new ColorCameraAdapter();
	OutputAdapter* output = new OutputAdapter();
	LegoSort* sorter = new LegoSort();

	sorter->getCameraValues(*colorCamera);
	output->outputNumber(sorter->findLegoColor());


	system("pause");
    return 0;
}