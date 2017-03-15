#pragma once
//Output adapter is entirely unimplemented since, a) I don't know how it need to be done yet, and b) to make testing easier.
class OutputAdapter
{
private:

public:
	OutputAdapter();
	bool requestColor(); //This function will be activated by the robot when it needs to ID a color
	void outputNumber(LegoColor);
};