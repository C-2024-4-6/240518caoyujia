#include<iostream>
using namespace std;
int main() {
	int num[10];
	int m = 0;
	cout << "请输入十个数："  ;
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		bool d = true;
		for (int j = 0; j < m; j++)
		{
			if (num[j] == n)
			{
				d = false;
				break;
			}
		}
		if (d) {
			num[m] = n;
			m++;
		}
	}
	cout << "不同的数有：";
	for (int k = 0; k < m; k++) {
		cout << num[k] << "  ";
	}
	return 0;
}