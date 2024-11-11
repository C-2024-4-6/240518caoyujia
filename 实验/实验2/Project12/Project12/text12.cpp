#include<iostream>
using namespace std;
int main()
{
    double a, b;
    char c;
    cout << "请输入表达式（例如：3 + 4）：";
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
            cout << "除数不能为0！" << endl;
        }
        else {
            cout << a << " / " << b << " = " << a / b << endl;
        }
        break;
    case '%':
        if (b == 0) {
            cout << "除数不能为0！" << endl;
        }
        else if ((int)a != a || (int)b != b) {
            cout << "取模运算要求操作数为整数！" << endl;
        }
        else {
            cout << (int)a << " % " << (int)b << " = " << (int)a % (int)b << endl;
        }
        break;
    default:
        cout << "非法运算符！" << endl;
    }
    return 0;
}