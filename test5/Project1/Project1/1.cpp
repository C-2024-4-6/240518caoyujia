#include<iostream> 
using namespace std;
class Time
{	              // ����Time��	
private:	// ���ݳ�ԱΪ���õ�	
	int hour;
	int minute;
	int sec;
public:
	void setTime()
	{
		cin >> hour;	//�����趨��ʱ��	
		cin >> minute;
		cin >> sec;
	}
	void showTime()
	{
		cout << hour << " :" << minute << " :" << sec << endl;

	}
};
int main()
	{
		Time t1;
		t1.setTime();
		t1.showTime();
		return 0;
	}