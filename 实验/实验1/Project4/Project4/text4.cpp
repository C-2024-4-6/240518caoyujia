#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.1415926;
	float r, h, V;
	cout << "ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶:" << "r=";
	cin >> r;
	cout << "ÇëÊäÈëÔ²×¶¸ß:" << "h=";
	cin >> h;
	V = PI * r * r * h / 3;
	cout << "Ô²×¶µÄÌå»ýV=" << V << endl;
	return 0;
}