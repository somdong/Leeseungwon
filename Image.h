#pragma once
class Image
{
public:
	Image()
	{
		X = 0;
		Y = 0;
		R = 0;
		G = 0;
		B = 0;
	}

	Image(int NewX, int NewY, int NewR, int NewG, int NewB)
	{
		X = NewX;
		Y = NewY;
		R = NewR;
		G = NewG;
		B = NewB;
	}
	~Image() {}

	int X;
	int Y;
	int R;
	int G;
	int B;
};

