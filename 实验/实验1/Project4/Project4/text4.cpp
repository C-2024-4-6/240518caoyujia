#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.1415926;
	float r, h, V;
	cout << "������Բ׶�׵İ뾶:" << "r=";
	cin >> r;
	cout << "������Բ׶��:" << "h=";
	cin >> h;
	V = PI * r * r * h / 3;
	cout << "Բ׶�����V=" << V << endl;
	return 0;
}