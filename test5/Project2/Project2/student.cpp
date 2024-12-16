//student.cpp	在此文件中进行函数的定义	
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
	name = nm; // 直接使用赋值运算符对std::string类型赋值 
	sex = s;
}