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
    cout << "请输入第一个C字符串：";
    cin.getline(s1, maxLen);
    cout << "请输入第二个C字符串：";
    cin.getline(s2, maxLen);
    int result = indexof(s1, s2);
    if (result != -1) {
        cout << s1 << " 是 " << s2 << " 的子串，下标为：" << result << endl;
    }
    else {
        cout << s1 << " 不是 " << s2 << " 的子串" << endl;
    }
    return 0;
}