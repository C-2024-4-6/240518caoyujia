#include<iostream>
using namespace std;
int main()
{
	int a, b, e, x, y;
	int d = 5;
	int c = 3;
	cout << "请从键盘上分别输入两个正整数：" << endl;
	cin >> a >> b;
	if (a <= 0 || b <= 0) {
		cout << "请输入正整数！" << endl;
	}
	else {
		x = a; y = b;
		if (a % b == 0 || b % a == 0) {
			if (a > b) {
				cout << "最大公约数为" << b << endl;
				cout << "最小公倍数为" << a << endl;
			}
			else {
				cout << "最大公约数为" << a << endl;
				cout << "最小公倍数为" << b << endl;
			}
		}
		else {
			while (b != 0) {
				int temp = a % b;
				a = b;
				b = temp;
			}
			cout << "最大公约数为" << a << endl;
			e = x * y / a;
			cout << "最小公倍数为" << e << endl;
		}
	}
}
