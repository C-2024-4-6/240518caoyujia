#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "输入华氏温度:f=";
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << fixed << setprecision(2) << c << endl;
	cout << "摄氏温度为：" << c << "℃" << endl;
	return 0;
}