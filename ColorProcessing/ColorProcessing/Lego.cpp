#include "stdafx.h"

class Lego
{
private:
	//The lego is defined as a class to keep things organized
	LegoColor color;
public:
	Lego(LegoColor);
	LegoColor getColor();
};

//lol english spelling
Lego::Lego(LegoColor colour)
{
	color = colour;
}

LegoColor Lego::getColor()
{
	return color;
}