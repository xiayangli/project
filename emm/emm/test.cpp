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
	s.SetStudentInfo("Peter", "��", 18);
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

/*// ���м��г�Ա���������г�Ա����
class A1 {
public:
	void f1(){}
private:
	int _a;
};
// ���н��г�Ա����
class A2 {
public:
	void f2() {}
};
// ����ʲô��û��---����
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
	int _year; // ��
	int _month; // ��
	int _day; // ��
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
	int top; // ���ջ��λ�� 
}Stack;

// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	ps->capacity = 0;
}

//��ջ
void StackPush(Stack* ps, SDataType data)
{
	ps->array[ps->capacity++] = v;
}

//��ջ
void StackPop(Stack* ps)
{
	ps->capacity--;
}

//��ȡջ��Ԫ��
SDataType StackTop(Stack* ps)
{
	ps->top = ps->array[ps->capacity - 1];
	return ps->top;
}

//��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps)
{
	return ps->capacity;
}

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	return !ps->capacity;
}

// ����ջ 
void StackDestroy(Stack* ps)
{
	ps->capacity;
}
*/

#if 0
// Ĭ�Ϲ��캯��
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
// ���²��Ժ�����ͨ��������
void Test()
{
	Date d1;
}
#endif

