// ColorProcessing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	ColorCameraAdapter* colorCamera = new ColorCameraAdapter();
	OutputAdapter* output = new OutputAdapter();
	LegoSort* sorter = new LegoSort();

	std::clock_t start;
	double duration;
	int count = 0;
	
	std::clock_t start1 = std::clock();

	while (true)
	{
		start = std::clock();
		sorter->getCameraValues(*colorCamera);
		output->outputNumber(sorter->findLegoColor());

		duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;

		while (duration < .1)
		{
			duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
		}
		std::cout << "Cycle Time: " << duration << '\n';
		count++;
		std::cout << count << " Cycles Run\n";
		std::cout << (std::clock() - start1) / (double)CLOCKS_PER_SEC << " Seconds since launch.\n";
	}



	system("pause");
    return 0;
}