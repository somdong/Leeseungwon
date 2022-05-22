#pragma once
#include "Vector2D.h"
class AActor
{
public:
	AActor(); // 持失切, Constructor
	~AActor(); // 社瑚切, Destructor

	char Shape;
	Vector2D Location;
	bool bCollide;

	void Draw();
};

