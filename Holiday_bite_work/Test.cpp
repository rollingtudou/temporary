//﻿class A
//{
//
//public:
//
//  A(int a)
//
//    :_a1(a)
//
//    ,_a2(_a1)
//
//  {}
//
//  void Print()
//
//  {
//
//    cout << _a1 << " " << _a2 << endl;
//
//  }
//
//private:
//
//  int _a2; // 先初始化a2，  a2 = 随机值     a1 = 1
//
//  int _a1;
//
//}
//
//
//
//int main()
//
//{
//
//    A aa(1);
//
//    aa.Print();
//
//}



//#include<iostream>
//#include<cstdio>
//using namespace std;
//int DayTab[2][13] = {
//    {0,31,28,31,30,31,30,31,31,30,31,30,31},
//    {0,31,29,31,30,31,30,31,31,30,31,30,31},
//};
//bool IsLeapYear(int year) {
//    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//int YearTab[2] = { 365,366 };
//int main() {
//    int year1, month1, day1;
//    int year2, month2, day2, minyear, maxyear;
//    int number, num1, num2;
//    while (scanf("%04d%02d%02d\n%04d%02d%02d", &year1, &month1, &day1, &year2, &month2, &day2) != EOF) 
//    {
//        number = 0;
//        minyear = year1 < year2 ? year1 : year2;
//        maxyear = (minyear == year1) ? year2 : year1;
//        while (minyear < maxyear) {
//            number += YearTab[IsLeapYear(minyear)];
//            ++minyear;
//        }
//        num1 = 0;
//        for (int i = 0; i < month1; ++i) {
//            num1 += DayTab[IsLeapYear(year1)][i];
//        }
//        num1 += day1;
//        num2 = 0;
//        for (int i = 0; i < month2; ++i) {
//            num2 += DayTab[IsLeapYear(year2)][i];
//        }
//        num2 += day2;
//        number += (year1 < year2 ? (num2 - num1 + 1) : (num1 - num2 + 1));
//        cout << number << endl;
//    }
//    return 0;
//}






#include<iostream>
using namespace std;

int main()
{


	return 0;
}


















