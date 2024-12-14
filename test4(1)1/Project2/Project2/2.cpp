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
	cout << "输入一个含有10个双精度数字的数组：";
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	bubbleSort(num, 10);
	cout << "排列后的数字为：";
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
    return 0;
}