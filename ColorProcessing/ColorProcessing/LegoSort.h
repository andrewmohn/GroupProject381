#pragma once
class LegoSort
{
private:
	CameraColor color;

	static const int NUM_RED = 5, NUM_GREEN = 5, NUM_BLUE = 5;
	static const int COLOR_VARIANCE = 5;

	int redValues[NUM_RED] = { 98, 114, 117, 141, 145 };
	int greenValues[NUM_GREEN] = { 100, 113, 116, 128, 145 };
	int blueValues[NUM_BLUE] = { 102, 104, 117, 130, 145 };
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