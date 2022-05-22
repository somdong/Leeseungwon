#include "Actor.h"

AActor::AActor()
{
	Shape = ' ';
	Location.X = 0;
	Location.Y = 0;
	bool bColide = false;
}

AActor::~AActor()
{
}

void AActor::Draw()
{
}
