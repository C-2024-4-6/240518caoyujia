#include<iostream>
using namespace std;
void sortArray(int* arr, int size) {
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
			}
		}
	}
}
int main() {
	int size;
	cout << "����������Ԫ�صĸ�����";
	cin >> size;
	int* arr = new int[size];
	cout << "��������������Ԫ�أ�";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	sortArray(arr, size);
	cout << "����������Ԫ��Ϊ��";
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
	delete[]arr;
	return 0;
}