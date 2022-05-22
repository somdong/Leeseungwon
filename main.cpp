#include <iostream>
#include "Image.h"
#include <vector>

using namespace std;


int main()
{
	std::vector<Image> ImageList;

	Image Temp(0, 0, 165, 55, 128);/*
	Temp.X = 0;
	Temp.Y = 0;
	Temp.R = 165;
	Temp.G = 55;
	Temp.B = 128;*/
	ImageList.push_back(Temp);


	Image Temp2(0, 1, 13, 82, 182);
	/*Temp.X = 0;
	Temp.Y = 1;
	Temp.R = 133;
	Temp.G = 82;
	Temp.B = 182;*/
	ImageList.push_back(Temp);

	cout << ImageList.size() << endl;

	for (int i = 0; i < ImageList.size(); ++i)
	{
		cout << ImageList[i].X << ",";
		cout << ImageList[i].Y << endl;
	}

	return 0;
}