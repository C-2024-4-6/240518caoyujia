#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
    int s1l = strlen(s1);
    int s2l = strlen(s2);
    for (int i = 0; i <= s2l - s1l; i++) {
        int j;
        for (j = 0; j < s1l; j++) {
            if (s2[i + j] != s1[j]) { break; }
        }
        if (j == s1l) { return i; }
    }
    return -1;
}
int main() {
    const int maxLen = 100;
    char s1[maxLen];
    char s2[maxLen];
    cout << "�������һ��C�ַ�����";
    cin.getline(s1, maxLen);
    cout << "������ڶ���C�ַ�����";
    cin.getline(s2, maxLen);
    int result = indexof(s1, s2);
    if (result != -1) {
        cout << s1 << " �� " << s2 << " ���Ӵ����±�Ϊ��" << result << endl;
    }
    else {
        cout << s1 << " ���� " << s2 << " ���Ӵ�" << endl;
    }
    return 0;
}