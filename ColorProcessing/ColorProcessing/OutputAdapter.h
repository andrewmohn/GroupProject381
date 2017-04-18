#pragma once

class OutputAdapter
{
private:
	HANDLE hSerial;
public:
	OutputAdapter();
	~OutputAdapter();
	bool requestColor(); //This function will be activated by the robot when it needs to ID a color
	void outputNumber(LegoColor);
};