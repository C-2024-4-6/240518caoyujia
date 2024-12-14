#include<iostream>
#include<cctype>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	for (int i = 0; i < strlen(s); i++) 
	{
		if(isalpha(s[i]))
		{
			char letter = tolower(s[i]);
			counts[letter - 'a']++;
		}
	}
}

int main()
{
	const int maxLen = 100;
	char s[maxLen];
	int counts[26];
	cout << "������һ���ַ���:";
	cin.getline(s, maxLen);
	count(s, counts);
	cout << "ÿ����ĸ���ֵķ���������£�" << endl;
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			char letter = 'a' + i;
			cout << letter << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}