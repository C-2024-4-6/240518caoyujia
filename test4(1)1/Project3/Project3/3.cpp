#include <iostream>
using namespace std;
int main() 
{
	bool drawer[101];
	for (int i = 1; i < 101; i++)
	{
		drawer[i] = false;
	}
	for (int i = 1; i < 101; i++)
	{
		for (int j = i; j < 101; j+=i) {
			drawer[j] = !drawer[j];
		}
	}
	cout << "���п��ŵĹ��Ӻ���Ϊ��";
	for (int i = 1; i < 101; i++) {
		if (drawer[i]) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}