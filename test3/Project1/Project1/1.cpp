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
	cout << "��ֱ�������Ȼ��m��n:" << endl;
	cin >> m >> n;
	int gcd = GCD(m, n);
	cout << "m��n�����Լ��Ϊ��" << gcd << endl;

	int gal;
	GAL(m, n, gcd, gal);
	cout << "m��n����С������Ϊ��" << gal << endl;
	return 0;
}