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
	cout << "������һ��ʮ�����������ַ�����ʾ��";
	cin.getline(hexString, maxLen);
	int result = parseHex(hexString);
	if (result != -1) {
		cout << "ת�����ʮ������Ϊ��" << result << endl;
	}
	else {
		cout << "������ַ������ǺϷ���ʮ��������" << endl;
	}
	return 0;
}