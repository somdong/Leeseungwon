#include <iostream>

using namespace std;

void Bubble_Sort(int* Array, int Count)
{
	int Temp = 0;
	for (int i = 0; i < Count; i++)
	{
		for (int j = 0; j < Count; j++)
		{
			if (j + 1 == Count - i)
			{
				break;
			}
			if (Array[j] > Array[j + 1])
			{
				Temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = Temp;
			}
		}
	}
}
int main()
{
	// 더하기
	int Count = 0;
	int Sum = 0;
	int* Array = nullptr;

	cout << "입력 횟수 : ";
	cin >> Count;

	Array = new int[Count];


	for (int i = 0; i < Count; i++)
	{

		cout << "정수 : ";
		cin >> Array[i];
		Sum += Array[i];
	}
	cout << "합 : ";
	cout << Sum << endl;

	//정렬하기

	Bubble_Sort(Array, Count);

	cout << "정렬" << '\n';
	for (int i = 0; i < Count; i++)
	{
		cout << Array[i] << endl;
	}

	delete[](Array);

	return 0;
}