#pragma once
class LegoSort
{
private:
	CameraColor color;

	static const int NUM_HUES = 5, NUM_SAT = 5, NUM_VALUES = 5;
	static const int COLOR_VARIANCE = 5;

	int hues[NUM_HUES] = { 98, 114, 117, 141, 145 };
	LegoColor colors[NUM_HUES];

	int findHueIndex();
public:
	//Constructor
	LegoSort();
	//Get the camera values from the adapter
	void getCameraValues(ColorCameraAdapter);
	//Find which lego color is being seen
	LegoColor findLegoColor();
};