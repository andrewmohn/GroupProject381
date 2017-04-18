#include "stdafx.h"

OutputAdapter::OutputAdapter()
{

}
bool OutputAdapter::requestColor() //This function will be activated by the robot when it needs to ID a color
{
	return true;
}
void OutputAdapter::outputNumber(LegoColor color)
<<<<<<< HEAD
{
	std::cout << "Outputting color " << color << " with pin output: ";
	int num1 = color & 1;
	int num2 = (color & 2) >> 1;
	int num3 = (color & 4) >> 2;
=======
{ 
	std::string num = { 40 };
<<<<<<< HEAD
>>>>>>> ad36c28... commit
=======
>>>>>>> ad36c28... commit

	if (num1 == 1)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}
	if (num2 == 1)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}
	if (num3 == 1)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}
	return;
}