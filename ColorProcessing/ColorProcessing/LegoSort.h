#pragma once
class LegoSort
{
private:
	CameraColor color;

	static const int NUM_RED = 2, NUM_GREEN = 2, NUM_BLUE = 2;
	static const int COLOR_VARIANCE = 5;

	int redValues[NUM_RED] = { 0, 255 };
	int greenValues[NUM_GREEN] = { 0, 255 };
	int blueValues[NUM_BLUE] = { 0, 255 };
	LegoColor colors[NUM_RED][NUM_GREEN][NUM_BLUE];

	int findRedIndex();
	int findGreenIndex();
	int findBlueIndex();
public:
	//Constructor
	LegoSort();
	//Get the camera values from the adapter
	void getCameraValues(ColorCameraAdapter);
	//Find which lego color is being seen
	LegoColor findLegoColor();
};