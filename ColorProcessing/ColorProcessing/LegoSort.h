#pragma once
class LegoSort
{
private:
	CameraColor color;

	static const int NUM_HUES = 4, NUM_SAT = 5, NUM_VALUES = 5;
	static const int COLOR_VARIANCE = 10;

	int hues[NUM_HUES] = { 5, 24, 48, 100 };
	int sats[NUM_SAT] = { 21, 75, 145, 156, 191 };
	int valu[NUM_VALUES] = { 87, 175, 206, 221, 231 };
	LegoColor colors[NUM_HUES][NUM_SAT][NUM_VALUES];
	int findHueIndex();
public:
	//Constructor
	LegoSort();
	//Get the camera values from the adapter
	void getCameraValues(ColorCameraAdapter);
	//Find which lego color is being seen
	LegoColor findLegoColor();
};