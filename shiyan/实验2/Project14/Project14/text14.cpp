#include<iostream>
using namespace std;
int main()
{
	int a, b, e, x, y;
	int d = 5;
	int c = 3;
	cout << "��Ӽ����Ϸֱ�����������������" << endl;
	cin >> a >> b;
	if (a <= 0 || b <= 0) {
		cout << "��������������" << endl;
	}
	else {
		x = a; y = b;
		if (a % b == 0 || b % a == 0) {
			if (a > b) {
				cout << "���Լ��Ϊ" << b << endl;
				cout << "��С������Ϊ" << a << endl;
			}
			else {
				cout << "���Լ��Ϊ" << a << endl;
				cout << "��С������Ϊ" << b << endl;
			}
		}
		else {
			while (b != 0) {
				int temp = a % b;
				a = b;
				b = temp;
			}
			cout << "���Լ��Ϊ" << a << endl;
			e = x * y / a;
			cout << "��С������Ϊ" << e << endl;
		}
	}
}
