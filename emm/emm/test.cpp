#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

/*struct Student
{
	void SetStudentInfo(const char* name, const char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}
	void PrintStudentInfo()
	{
		cout << _name << " " << _gender << " " << _age << endl;
	}
	char _name[20];
	char _gender[3];
	int _age;
};
int main()
{
	Student s;
	s.SetStudentInfo("Peter", "男", 18);
	s.PrintStudentInfo();
	system("pause");
	return 0;
}*/

#if 0
class A
{
public:
	void PrintA
	{
		  cout << _a << endl;
}
private:
	char _a;
};

int main()
{
	PrintA;
	return 0;
	system("pause");
}
#endif

/*// 类中既有成员变量，又有成员函数
class A1 {
public:
	void f1(){}
private:
	int _a;
};
// 类中仅有成员函数
class A2 {
public:
	void f2() {}
};
// 类中什么都没有---空类
class A3
{};

int main()
{
	cout << sizeof(A1) << " " << sizeof(A2) << " " << endl;
	system("pause");
	return 0;
}*/

/*class Date
{
public:
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};
int main()
{
	Date d1, d2;
	d1.SetDate(2018, 5, 1);
	d2.SetDate(2018, 7, 1);
	d1.Display();
	d2.Display();
	system("pause");
	return 0;
}*/

class A
{
public:
	void PrintA()
	{
		cout << _a << endl;
	}
	void Show()
	{
		cout << "Show()" << endl;
	}
private:
	int _a;
};
int main()
{
	Date* p = NULL;
	p->PrintA();
	p->Show();
}