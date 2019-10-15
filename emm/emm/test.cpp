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

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	Date* p = NULL;
//	p->PrintA();
//	p->Show();
//}

/*
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1);
	Date(const Date& d);
	Date& operator=(const Date& d);
	Date operator+(int days);
		Date operator-(int days);
	int operator-(const Date& d);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	bool operator>(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator!=(const Date& d)const;
private:
	int _year;
	int _month;
	int _day;
};
*/

/*
typedef int SDataType;
typedef struct Stack
{
	SDataType* array;
	int capacity;
	int top; // 标记栈顶位置 
}Stack;

// 初始化栈 
void StackInit(Stack* ps)
{
	ps->capacity = 0;
}

//入栈
void StackPush(Stack* ps, SDataType data)
{
	ps->array[ps->capacity++] = v;
}

//出栈
void StackPop(Stack* ps)
{
	ps->capacity--;
}

//获取栈顶元素
SDataType StackTop(Stack* ps)
{
	ps->top = ps->array[ps->capacity - 1];
	return ps->top;
}

//获取栈中有效元素个数
int StackSize(Stack* ps)
{
	return ps->capacity;
}

// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps)
{
	return !ps->capacity;
}

// 销毁栈 
void StackDestroy(Stack* ps)
{
	ps->capacity;
}
*/

#if 0
// 默认构造函数
class Date
{
public:
	Date()
	{
		_year = 1900;
		_month = 1;
		_day = 1;
	}
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
// 以下测试函数能通过编译吗？
void Test()
{
	Date d1;
}
#endif

