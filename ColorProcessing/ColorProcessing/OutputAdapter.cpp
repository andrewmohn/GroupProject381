#include "stdafx.h"

//Output adapter is entirely unimplemented since, a) I don't know how it need to be done yet, and b) to make testing easier.
class OutputAdapter
{
private:
	OutputAdapter* adapter = nullptr;
	OutputAdapter();
public:
	//ColorCameraAdapter is a singleton, and will not have more than one class instanced
	OutputAdapter* startInstance();
	void sendToRobot(int);
};

OutputAdapter* OutputAdapter::startInstance()
{
	if (adapter == nullptr)
	{
		adapter = new OutputAdapter();
		return adapter;
	}
	return adapter;
}