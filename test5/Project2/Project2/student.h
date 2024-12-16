//student.h	(这是头文件，在此文件中进行类的声明)	
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