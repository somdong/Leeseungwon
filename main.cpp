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
	// ���ϱ�
	int Count = 0;
	int Sum = 0;
	int* Array = nullptr;

	cout << "�Է� Ƚ�� : ";
	cin >> Count;

	Array = new int[Count];


	for (int i = 0; i < Count; i++)
	{

		cout << "���� : ";
		cin >> Array[i];
		Sum += Array[i];
	}
	cout << "�� : ";
	cout << Sum << endl;

	//�����ϱ�

	Bubble_Sort(Array, Count);

	cout << "����" << '\n';
	for (int i = 0; i < Count; i++)
	{
		cout << Array[i] << endl;
	}

	delete[](Array);

	return 0;
}