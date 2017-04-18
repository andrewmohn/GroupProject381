#include "stdafx.h"

OutputAdapter::OutputAdapter()
{
	hSerial = CreateFileA("COM3", GENERIC_WRITE, 0,	NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,	NULL);
	DCB dcbSerialParams = { 0 };
	dcbSerialParams.BaudRate = CBR_9600;
	dcbSerialParams.ByteSize = 8;
	dcbSerialParams.StopBits = ONESTOPBIT;
	dcbSerialParams.Parity = NOPARITY;
	dcbSerialParams.fDtrControl = DTR_CONTROL_ENABLE;
	SetCommState(hSerial, &dcbSerialParams);
	Sleep(2000); //Wait for reset
}

OutputAdapter::~OutputAdapter()
{
	CloseHandle(hSerial);
}

bool OutputAdapter::requestColor() //This function will be activated by the robot when it needs to ID a color
{
	return true;
}
void OutputAdapter::outputNumber(LegoColor color)
{
//	std::cout << "Outputting color " << color << " with pin output: ";
	
	DWORD bytesSend;
	std::string s = std::to_string((int)color);
	char num = s[0];

	//Try to write the buffer on the Serial port
	if(WriteFile(hSerial, &num, sizeof(num), &bytesSend, 0))
	{
		std::cout << "Successfully Wrote to COM3\n";
		std::cout << num << " Was sent. " << bytesSend << " Bytes were sent.\n";
	}
	PurgeComm(hSerial, PURGE_RXCLEAR | PURGE_TXCLEAR);
	
	return;
}