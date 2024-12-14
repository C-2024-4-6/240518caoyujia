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
	cout << "请输入数组元素的个数：";
	cin >> size;
	int* arr = new int[size];
	cout << "请依次输入数组元素：";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	sortArray(arr, size);
	cout << "排序后的数组元素为：";
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
	delete[]arr;
	return 0;
}