#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	long double a, t = 100, x, b = 0;
	cout << "请从键盘上a：" << endl;
	cin >> a;
	a = fabs(a);
	x = a;
	if (x == 0) {
		cout << "除数不能为0！" << endl;
	}
	else {
		while (fabs(t - b) >= 0.0000000001)
		{
			t = (x + a / x) / 2;
			b = x;
			x = t;
		}
		cout << "用迭代法求 a 的平方根为：" << fixed << setprecision(10) << x << endl;
	}
}