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
	cout << "Ӣ����ĸ����: " << l << endl;
	cout << "�ո����: " << b << endl;
	cout << "�����ַ�����: " << n << endl;
	cout << "�����ַ�����: " << o << endl;
	return 0;
}