#include <iostream>

using namespace std;

void Sort(int* Array, int* Count)
{
	int Temp = 0;
	for (int i = 0; i < *Count; i++)
	{
		for (int j = 0; j < *Count - i; j++)
		{
			if (j + 1 == *Count - i - 1)
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
	int* Pcount = nullptr;

	Pcount = &Count;

	cout << "Ƚ�� �Է� : ";
	cin >> Count;

	Array = new int[Count];


	for (int i = 0; i < Count; i++)
	{

		cout << "���� �Է� : ";
		cin >> Array[i];
		Sum += Array[i];
	}
	cout << "�� : ";
	cout << Sum << endl;

	//����

	Sort(Array, Pcount);
	
	cout << "����" << '\n';
	for (int i = 0; i < Count; i++)
	{
		cout << Array[i] << endl;
	}

	delete[](Array);

	return 0;
}