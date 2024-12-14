#include <iostream>
using namespace std;

void swap(double& a, double& b) {
	double t = a;
	a = b;
	b = t;
}

void bubbleSort(double list[], int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}

int main() {
	double num[10];
	cout << "����һ������10��˫�������ֵ����飺";
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	bubbleSort(num, 10);
	cout << "���к������Ϊ��";
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
    return 0;
}