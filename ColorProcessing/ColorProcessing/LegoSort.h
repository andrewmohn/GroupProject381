#pragma once
class LegoSort
{
private:
	CameraColor color;
	int redValues[2] = { 0, 255 };
	int greenValues[2] = { 0, 255 };
	int blueValues[2] = { 0, 255 };
	LegoColor colors[2][2][2];

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
