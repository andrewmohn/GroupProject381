// ColorProcessing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	ColorCameraAdapter* colorCamera = new ColorCameraAdapter();
	OutputAdapter* output = new OutputAdapter();
	LegoSort* sorter = new LegoSort();
	Lego* theLego;

	while (true)
	{
		sorter->getCameraValues(*colorCamera);
		theLego = new Lego(sorter->findLegoColor());
		output->sendLego(*theLego);
	}
    return 0;
}