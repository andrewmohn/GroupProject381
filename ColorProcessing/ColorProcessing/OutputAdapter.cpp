#include "stdafx.h"

OutputAdapter::OutputAdapter()
{

}
bool OutputAdapter::requestColor() //This function will be activated by the robot when it needs to ID a color
{
	return true;
}
void OutputAdapter::outputNumber(LegoColor color)
{
	std::cout << "The color you have entered is: ";

	if (color == legoRed)
	{
		std::cout << "Red\n";
	}
	else if (color == legoGreen)
	{
		std::cout << "Green\n";
	}
	else if (color == legoBlue)
	{
		std::cout << "Blue\n";
	}
	return;
}