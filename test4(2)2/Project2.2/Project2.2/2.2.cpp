#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString)
{
	int n16 = 0;
	int l = strlen(hexString);
	for (int i = 0; i < l; i++)
	{
		char n = hexString[i];
		int m;
		if (isdigit(n)) {
			m = n - '0';
		}
		else if (isupper(n)) {
			m = n - 'A' + 10;
		}
		else if (islower(n)) {
			m = n - 'a' + 10;
		}
		else { return -1; }
		n16 = n16 * 16 + m;
	}
	return n16;
}
int main() {
	const int maxLen = 100;
	char hexString[maxLen];
	cout << "请输入一个十六进制数的字符串表示：";
	cin.getline(hexString, maxLen);
	int result = parseHex(hexString);
	if (result != -1) {
		cout << "转换后的十进制数为：" << result << endl;
	}
	else {
		cout << "输入的字符串不是合法的十六进制数" << endl;
	}
	return 0;
}