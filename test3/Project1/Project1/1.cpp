#include<iostream>
using namespace std;
int GCD(int a, int b)
{
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int GAL(int a, int b, int& g, int& l) {
	l = a * b / g;
	return l;
}

int main() {
	int m;
	int n;
	cout << "请分别输入自然数m和n:" << endl;
	cin >> m >> n;
	int gcd = GCD(m, n);
	cout << "m和n的最大公约数为：" << gcd << endl;

	int gal;
	GAL(m, n, gcd, gal);
	cout << "m和n的最小公倍数为：" << gal << endl;
	return 0;
}