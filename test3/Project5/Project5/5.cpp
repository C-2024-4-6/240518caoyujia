#include<iostream>
using namespace std;
int main() {
	int n10 = 1;
	int t, n;
	n = n10;
	for (int i = 0; i < 9; i++)
	{
		t = (n + 1) * 2;
		n = t;
	}
	cout << "第一天猴子共摘" << n << "个桃子" << endl;
	return 0;
}