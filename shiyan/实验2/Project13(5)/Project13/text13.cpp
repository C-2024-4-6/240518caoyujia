#include<iostream>
using namespace std;
int main()
{
	int l = 0, n = 0, b = 0, o = 0;
	char c;
	while ((c = cin.get()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			l++;
		}
		else if (c == ' ') {
			b++;
		}
		else if (c >= '0' && c <= '9') {
			n++;
		}
		else {
			o++;
		}
	}
	cout << "英文字母个数: " << l << endl;
	cout << "空格个数: " << b << endl;
	cout << "数字字符个数: " << n << endl;
	cout << "其他字符个数: " << o << endl;
	return 0;
}