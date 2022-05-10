#include <iostream>

using namespace std;

int main()
{
	int* Data = nullptr;

	Data = new int;

	*Data = 100;

	delete Data;
	Data = nullptr;

	return 0;
}