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
	else if (color == legoYellow)
	{
		std::cout << "Yellow\n";
	}
	else if (color == legoWhite)
	{
		std::cout << "White\n";
	}
	else if (color == legoBlack)
	{
		std::cout << "Black\n";
	}
	else
	{
		std::cout << "You have not entered a valid lego color value.\n";
		//A failure to ID the lego would have this code create a repeat attempt to read what the lego is.
	}
	return;
}