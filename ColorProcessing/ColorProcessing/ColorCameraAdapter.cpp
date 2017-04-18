#include "stdafx.h"


//Color Camera Adapter is entirely unimplemented since, a) I don't know how it need to be done yet, and b) to make testing easier.


ColorCameraAdapter::ColorCameraAdapter()
{
	//Constructor will "Wrap" the camera object
	cap.open(0);
}

ColorCameraAdapter::~ColorCameraAdapter()
{
	cap.release();
}

CameraColor ColorCameraAdapter::getCameraColor()
{
	Mat image, imageHsv;

	if (!cap.isOpened())
	{
		std::cout << "Failed to open camera, retrying.";
		cap.open(0);
	}

	if (cap.grab())
	{
		if (!cap.retrieve(image))
		{
			std::cout << "Failed to get image.\n";
		}

		if (image.empty())
		{
			std::cout << "Image is empty.\n";
		}

//		namedWindow("window", WINDOW_AUTOSIZE);
//		imshow("window", image);
//		waitKey(0);
	}

	Mat mask(image.rows, image.cols, 0, Scalar(0));
	Point pnt((image.cols / 2)+ 5, (image.rows / 2)+30);
	circle(mask, pnt, 20, Scalar(255), -1);

//	imshow("window", mask);
//	waitKey(0);

	cvtColor(image, imageHsv, COLOR_BGR2HSV);

	Scalar average = mean(imageHsv, mask);

	CameraColor temp = { average[0], average[1], average[2] };

	std::cout << "Color Value Hue: " << temp.hue << " Saturation: " << temp.saturation << " Value: " << temp.value << std::endl;

	return temp;
}