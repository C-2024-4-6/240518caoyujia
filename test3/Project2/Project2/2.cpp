#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)  return false;
	else if (num <= 3)	return true;
	else {
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)return false;
			else return true;
		}
	}
}
int main() {
	int num;
	cout << "请输入一个整数：" << endl;
	cin >> num;
	if (is_prime(num)) {
		cout << "是素数。" << endl;
	}
	else {
		cout<<"不是素数。"<<endl;
	}
	cout << "前200个素数是：" << endl;
	int c=0;
	for (int i = 2; c < 200; i++) {
		if (is_prime(i)) {
			cout << setw(5) << i;
			c++;
			if (c %10== 0) {
				cout << endl;
			}
		}
	}
	return 0;
}