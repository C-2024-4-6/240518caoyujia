#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, t=100, x, b = 0;
	cout << "��Ӽ�����a��" << endl;
	cin >> a;
	x = a;
	if (x == 0) {
		cout << "��������Ϊ0��" << endl;
	}
	else {
		while (fabs(t - b) >= 0.00001)
		{
			t = (x + a / x) / 2;
			b = x;
			x = t;
		}
		cout << "�õ������� a ��ƽ����Ϊ��" << x << endl;
	}
}