#include "stdafx.h"

//Output adapter is entirely unimplemented since, a) I don't know how it need to be done yet, and b) to make testing easier.
class OutputAdapter
{
public:
	OutputAdapter();
	void sendLego(Lego);
};

OutputAdapter::OutputAdapter()
{

}

void OutputAdapter::sendLego(Lego lego)
{
	std::cout << lego.getColor();
	return;
}