//student.h	(����ͷ�ļ����ڴ��ļ��н����������)	
using namespace std; 
#include <string>
class Student {
public:
	void display();
	void set_value(int n, string nm, char s);
private:
	int num;
	string name;
	char sex;
};