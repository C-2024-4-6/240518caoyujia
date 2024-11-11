#include<iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "ÇëÊäÈëx=";
	cin >> x;
	if (0 < x < 1) {
		y = 3 - 2 * x;
		cout << "y=" << y << endl;
	}
	else if (1 <= x < 5) { y = 2 / (4 * x) + 1;
	cout << "y=" << y << endl;
	}
	else { y = x*x; 
	cout << "y=" << y << endl;
	};
	return 0;
}