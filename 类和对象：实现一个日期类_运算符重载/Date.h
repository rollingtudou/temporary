//#pragma once
//
//#include<iostream>
//using namespace std;
//#include<assert.h>
//
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1);
//
//	void Print();
//
//
//	// �ó��ڵ�ǰ��ݺ��·��µĵ��������Ƕ���
//	int GetMonthDay(int year,int month)
//	{
//		static int monthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30,
//							31, 31, 30, 31, 30, 31 };
//
//		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
//		{
//			return 29;
//		}
//
//		return monthDayArray[month];
//	}
//
//	bool operator<(const Date& d);
//	bool operator<=(const Date& d);
//	bool operator>(const Date& d);
//	bool operator>=(const Date& d);
//	bool operator==(const Date& d);
//	bool operator!=(const Date& d);
//
//	Date operator+(int day);
//	Date& operator+=(int day);
//
//	Date operator-(int day);
//
//	bool CheckDate();
//
//	Date operator++(int);
//	Date& operator++();
//
//	friend ostream& operator<<(ostream& out, const Date& d);
//	friend istream& operator>>(istream& in, Date& d);
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};


//
//int globalVar = 1;
//
//static int staticGlobalVar = 1;
//
//void Test()
//
//{
//
//	static int staticVar = 1;
//
//	int localVar = 1;
//
//
//
//	int num1[10] = { 1, 2, 3, 4 };
//
//	char char2[] = "abcd";
//
//	char* pChar3 = "abcd";
//
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//
//	free(ptr1);
//
//	free(ptr3);
//
//}
//
//
//
//1. ѡ���⣺
//
//ѡ�� : A.ջ B.�� C.���ݶ�(��̬��) D.�����(������)
//
//globalVar�����____  staticGlobalVar�����____
//
//staticVar�����____  localVar�����____
//
//num1 �����____
//
//
//
//char2�����____ * char2�����___
//
//pChar3�����____ * pChar3�����____
//
//ptr1�����____ * ptr1�����____
//
//
//
//2. ����⣺
//
//sizeof(num1) = ____;
//
//sizeof(char2) = ____;   strlen(char2) = ____;
//
//sizeof(pChar3) = ____;   strlen(pChar3) = ____;
//
//sizeof(ptr1) = ____;       