#include<iostream>
using namespace std;
int main()
{
    double a, b;
    char c;
    cout << "��������ʽ�����磺3 + 4����";
    cin >> a >> c >> b;

    switch (c) {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if (b == 0) {
            cout << "��������Ϊ0��" << endl;
        }
        else {
            cout << a << " / " << b << " = " << a / b << endl;
        }
        break;
    case '%':
        if (b == 0) {
            cout << "��������Ϊ0��" << endl;
        }
        else if ((int)a != a || (int)b != b) {
            cout << "ȡģ����Ҫ�������Ϊ������" << endl;
        }
        else {
            cout << (int)a << " % " << (int)b << " = " << (int)a % (int)b << endl;
        }
        break;
    default:
        cout << "�Ƿ��������" << endl;
    }
    return 0;
}