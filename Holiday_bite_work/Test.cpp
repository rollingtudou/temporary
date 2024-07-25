#define _CRT_SECURE_NO_WARNINGS 1


// git 测试
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
// 
// 
// 
// 
// 
// 
// 
//
//isalnum 函数的作用
//isalnum 是 C / C++ 中的一个标准库函数，用于判断一个字符是否为字母或数字。
//如果字符是字母或数字，isalnum 返回非零值（通常为 1）；
//如果字符不是字母或数字，isalnum 返回 0。

//#include<al>

//class Solution {
//public:
//	bool isPalindrome(string s) {
//		int left = 0, right = s.size() - 1;
//		while (left < right) {
//
//			// 这两个while用来在遇到其他字符的时候跳过字符
//			while (left < right && !isalnum(s[left])) {
//				left++;
//			}
//			while (left < right && !isalnum(s[right])) {
//				right--;
//			}
//
//			// 进行比较
//			if (tolower(s[left]) != tolower(s[right])) {
//				return false;
//			}
//			left++;
//			right--;
//		}
//		return true;
//	}
//};
//
//class Solution {
//public:
//    // 去除首尾空格的函数
//    std::string trim(const std::string& s) {
//        auto s_begin = s.find_first_not_of(' ');
//        if (s_begin == std::string::npos) {
//            return "";
//        }
//        auto s_end = s.find_last_not_of(' ');
//        return s.substr(s_begin, s_end - s_begin + 1);
//    }
//
//    // 反转单词的函数
//    std::string reverseWords(std::string s) {
//        // 修剪首尾空格
//        s = trim(s);
//
//        if (s.empty()) {
//            return "";
//        }
//
//        int start = 0;
//        int end = 0;
//        std::string reversedString;
//
//        while (end <= s.size()) {
//            // 找到当前单词的末尾
//            while (end < s.size() && s[end] != ' ') {
//                end++;
//            }
//
//            // 反转当前单词
//            for (int i = end - 1; i >= start; i--) {
//                reversedString += s[i];
//            }
//
//            // 在反转的单词后添加空格（最后一个单词除外）
//            if (end < s.size()) {
//                reversedString += ' ';
//            }
//
//            // 更新下一个单词的起始和结束指针
//            end++;
//            start = end;
//        }
//
//        return reversedString;
//    }
//};


/// test git

//
// 
// 
// 
// 
// 
// 
//                               写时拷贝
// 
// 
//#include <iostream>
//#include <cstring>
//#include <cassert>
//
//class String {
//public:
//    String(const char* str = "") 
//        : _str(new char[strlen(str) + 1])
//        , _count(new int(1))  // 一个string对象刚开始的 _count 就是 1
//    {
//        strcpy(_str, str);
//    }
//
//    String(const String& s) 
//        : _str(s._str)
//        , _count(s._count) 
//    {
//        ++(*_count);
//    }
//
//    String& operator=(const String& s) {
//        if (this != &s) {
//
//            // 确保在没有对象再引用该资源时，正确地释放内存以避免内存泄漏
//            if (--(*_count) == 0) {
//                delete[] _str;
//                delete _count;
//            }
//            _str = s._str;
//            _count = s._count;
//            ++(*_count);
//        }
//        return *this;
//    }
//
//    ~String() {
//        if (--(*_count) == 0) {
//            delete[] _str;
//            delete _count;
//        }
//    }
//
//    void modify(const char* newStr) {
//        if (*_count > 1) {
//            --(*_count);
//            _str = new char[strlen(newStr) + 1];
//            strcpy(_str, newStr);
//            _count = new int(1);
//        }
//        else {
//            _str = new char[strlen(newStr) + 1];
//            strcpy(_str, newStr);
//        }
//    }
//
//    const char* c_str() const {
//        return _str;
//    }
//
//private:
//    char* _str;
//    int* _count;
//};
//
//// 写时拷贝测试用例
//void testCopyOnWrite() {
//    String s1("Hello");
//    String s2 = s1;
//
//    std::cout << "s1: " << s1.c_str() << ", s2: " << s2.c_str() << std::endl;
//    std::cout << "修改前引用计数：" << std::endl;
//
//    s1.modify("World");
//
//    std::cout << "s1: " << s1.c_str() << ", s2: " << s2.c_str() << std::endl;
//    std::cout << "修改后引用计数：" << std::endl;
//}
//
//int main() {
//    testCopyOnWrite();
//    return 0;
//}
