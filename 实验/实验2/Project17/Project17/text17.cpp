#include<iostream>
using namespace std;
int main()
{
	double a = 0.8, b = 2, c = 0, sum = 0, i = 0, j;
	while (sum +c<= 100) {
		c = 2 * b;
		sum = sum + b;
		b = c;
		i++;
	}
	cout << i << endl;
	cout << sum << endl;
	j = sum * a / i;
	cout << "每天平均花" << j << "元" << endl;
	return 0;
}