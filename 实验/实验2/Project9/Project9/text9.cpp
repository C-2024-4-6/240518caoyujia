#include<iostream>
using namespace std;
int main()
{
	char aa;
	cout << "����һ���ַ�";
	cin >> aa;
	if (aa >= 'a' && aa <= 'z')
	{
		aa = aa - 32;
		cout << aa << endl;
	}
	else {
		cout << int(aa + 1) << endl;
	}
	return 0;
}