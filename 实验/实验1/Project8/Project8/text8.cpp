#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "���뻪���¶�:f=";
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << fixed << setprecision(2) << c << endl;
	cout << "�����¶�Ϊ��" << c << "��" << endl;
	return 0;
}