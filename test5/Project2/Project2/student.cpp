//student.cpp	�ڴ��ļ��н��к����Ķ���	
#include <iostream>
#include "student.h"
void Student::display()
{
	cout << "num:" << num <<endl;
	cout << "name:" << name << endl;
	cout << "sex:"	<<	sex << endl;	
}
void Student::set_value(int n, string nm, char s)
{
	num = n;
	name = nm; // ֱ��ʹ�ø�ֵ�������std::string���͸�ֵ 
	sex = s;
}