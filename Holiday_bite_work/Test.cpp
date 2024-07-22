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





//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//
//	return 0;
//}
//

//
//
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//
//	return 0;
//}
//


//﻿int main(int argc, char* argv[])
//
//{
//
//	string a = "hello world";
//
//	string b = a;
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	string c = b;
//
//	c = "";
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	a = "";
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	return 0;
//
//}
//
//


/*

﻿int main(int argc, char* argv[])

{

	string strText = "How are you?";

	string strSeparator = " ";

	string strResult;

	int size_pos = 0;

	int size_prev_pos = 0;

	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)

	{

		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);

		cout << strResult << " ";

		size_prev_pos = ++size_pos;

	}

	if (size_prev_pos != strText.size())

	{

		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);

		cout << strResult << " ";

	}

	cout << endl;

	return 0;

}

       */     


//
//class Solution {
//public:
//    int myAtoi(std::string s) {
//        int size_pos = 0;
//        int length = s.length();
//        // 跳过前导空格
//        while (size_pos < length && s[size_pos] == ' ') {
//            ++size_pos;
//        }
//
//        // 检查是否有正负号
//        int sign = 1;
//        if (size_pos < length && (s[size_pos] == '+' || s[size_pos] == '-')) {
//            if (s[size_pos] == '-') {
//                sign = -1;
//            }
//            ++size_pos;
//        }
//
//        // 读入数字并转换为整数
//        long result = 0;
//        while (size_pos < length && isdigit(s[size_pos])) {
//            result = result * 10 + (s[size_pos] - '0');
//            // 检查是否溢出
//            if (result * sign >= INT_MAX) {
//                return INT_MAX;
//            }
//            if (result * sign <= INT_MIN) {
//                return INT_MIN;
//            }
//            ++size_pos;
//        }
//
//        return result * sign;
//    }
//};
//
//


//
//
//class Solution {
//public:
//    int myAtoi(std::string str) {
//        int size_pos = 0;
//        int length = str.length();
//        // 跳过前导空格
//        while (size_pos < length && str[size_pos] == ' ') {
//            ++size_pos;
//        }
//
//        // 检查是否有正负号
//        int sign = 1;
//        if (size_pos < length && (str[size_pos] == '+' || str[size_pos] == '-')) {
//            if (str[size_pos] == '-') {
//                sign = -1;
//            }
//            ++size_pos;
//        }
//
//        // 开始读取数字
//        long result = 0;
//        while (size_pos < length && isdigit(str[size_pos])) {
//            result = result * 10 + (str[size_pos] - '0');
//
//            // 检查是否溢出
//            if (sign * result > INT_MAX) {
//                return INT_MAX;
//            }
//            if (sign * result < INT_MIN) {
//                return INT_MIN;
//            }
//
//            ++size_pos;
//        }
//
//        return sign * result;
//    }
//};




