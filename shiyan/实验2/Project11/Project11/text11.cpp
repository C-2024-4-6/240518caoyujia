#include <iostream>
using namespace std;
int main()
{
	float a,b,c,C;
	cout << "�����������ε�������:" << endl;
	cin >> a  >> b >> c ;
	C = a + b + c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "�޷�����������" << endl;
	}
	else{ cout << "�������ε��ܳ�Ϊ��" << C << endl;
	if (a == b || a == c || c == b) {
		cout << "��������Ϊ����������" << endl;
	}
	else { cout << "�������β��ǵ���������" << endl; }
	}
	return 0;
}