#define _CRT_SECURE_NO_WARNINGS 1

// xiugai
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






	   //
	   //// erasing from vector
	   //#include <iostream>
	   //#include <vector>
	   //using namespace std;
	   //
	   //int main()
	   //{
	   //	std::vector<int> myvector;
	   //
	   //	// set some values (from 1 to 10)
	   //	for (int i = 1; i <= 10; i++) myvector.push_back(i);
	   //
	   //	// erase the 6th element
	   //	myvector.erase(myvector.begin() + 5);
	   //
	   //	// erase the first 3 elements:
	   //	myvector.erase(myvector.begin(), myvector.begin() + 3);
	   //
	   //	std::cout << "myvector contains:";
	   //	for (unsigned i = 0; i < myvector.size(); ++i)
	   //		std::cout << ' ' << myvector[i];
//	   //	std::cout << '\n';
//	   //
//	   //	return 0;
//	   //}
//
//
//
//
//﻿int main()
//
//{
//
//	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(100); // capacity = 100
//
//	v.resize(20);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//	v.reserve(50);
//
//	v.resize(5);
//
//	cout << v.size() << ":" << v.capacity() << endl;
//
//}
//
//﻿int main()
//
//{
//
//	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int n = sizeof(ar) / sizeof(int);  // 10
//
//	vector<int> v(ar, ar + n);
//
//	cout << v.size() << ":" << v.capacity() << endl;  // 10 : 10   
//
//	v.reserve(100);
//
//	v.resize(20);
//
//	cout << v.size() << ":" << v.capacity() << endl;  // 20 : 100
//
//	v.reserve(50);
//
//	v.resize(5);
//
//	cout << v.size() << ":" << v.capacity() << endl;  // 5 ： 100
//
//}

//
//
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int>& numbers) {
//		int candidate = numbers[0];
//		int count = 1;
//
//		for (int i = 1; i < numbers.size(); ++i) {
//			if (count == 0) {
//				candidate = numbers[i];
//				count = 1;
//			}
//			else if (numbers[i] == candidate) {
//				count++;
//			}
//			else {
//				count--;
//			}
//		}
//
//		// 验证候选者是否确实超过数组长度的一半
//		count = 0;
//		for (int num : numbers) {
//			if (num == candidate) {
//				count++;
//			}
//		}
//		if (count > numbers.size() / 2) {
//			return candidate;
//		}
//		else {
//			return -1; // 按题意，这里实际上不会执行
//		}
//	}
//};

//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int>& numbers) {
//		int candidate = numbers[0];
//		int count = 1;
//
//		for (int i = 1; i < numbers.size(); ++i) {
//			if (count == 0) {
//				candidate = numbers[i];
//				count = 1;
//			}
//			else if (numbers[i] == candidate) {
//				count++;
//			}
//			else {
//				count--;
//			}
//		}
//
//		// 验证候选者是否确实超过数组长度的一半
//		count = 0;
//		for (int num : numbers) {
//			if (num == candidate) {
//				count++;
//			}
//		}
//		if (count > numbers.size() / 2) {
//			return candidate;
//		}
//		else {
//			return -1; // 按题意，这里实际上不会执行
//		}
//	}
//};



//class Solution {
//public:
//	vector<string> letterCombinations(string digits) {
//		// 判空
//		if (digits.empty()) return {};
//
//		vector<string> result;
//		string combination;
//
//		// 每个mapping索引位置存储对应数字的数字的字母组合
//		vector<string> mapping = {
//			"",    // 0
//			"",    // 1
//			"abc", // 2
//			"def", // 3
//			"ghi", // 4
//			"jkl", // 5
//			"mno", // 6
//			"pqrs",// 7
//			"tuv", // 8
//			"wxyz" // 9
//		};
//
//		backtrack(result, combination, digits, 0, mapping);
//		return result;
//	}
//
//private:
//	void backtrack(vector<string>& result, string& combination, const string& digits, int index, const vector<string>& mapping) {
//		if (index == digits.size()) {
//			result.push_back(combination);
//			return;
//		}
//
//		string letters = mapping[digits[index] - '0'];
//		for (char letter : letters) {
//			combination.push_back(letter);
//			backtrack(result, combination, digits, index + 1, mapping);
//			combination.pop_back();
//		}
//	}
//}
// 
// 
// 

//
//﻿int main()
//
//{
//
//	int ar[] = { 1,2,3,4,0,5,6,7,8,9 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	vector<int> v(ar, ar + n);
//
//	vector<int>::iterator it = v.begin();
//
//	while (it != v.end())
//	{
//
//		if (*it != 0)
//		{
//			cout << *it;
//		}
//		else
//		{
//			v.erase(it);
//		}
//
//		it++;
//
//	}
//
//	return 0;
//
//}
//



//class Solution 
//{
//public:
//	vector<string> letterCombinations(string digits) {
//		vector<string> combinations;
//		// 如果输入的字符串为空，直接返回空的结果
//		if (digits.empty()) {
//			return combinations;
//		}
//
//		// 用vector来存储数字到字母的映射
//		vector<string> phoneMap = {
//			"",    // 0
//			"",    // 1
//			"abc", // 2
//			"def", // 3
//			"ghi", // 4
//			"jkl", // 5
//			"mno", // 6
//			"pqrs",// 7
//			"tuv", // 8
//			"wxyz" // 9
//		};
//
//		string combination;
//
//		// 调用回溯函数
//		backtrack(combinations, phoneMap, digits, 0, combination);
//		return combinations;
//	}
//
//	void backtrack(vector<string>& combinations, const vector<string>& phoneMap
//		, const string& digits, int index, string& combination) 
//	{
//		// 如果当前索引等于输入字符串的长度，说明已经生成一个完整的组合
//		if (index == digits.length()) 
//		{
//			combinations.push_back(combination); // 将当前组合加入结果
//		}
//		else 
//		{
//			char digit = digits[index]; // 获取当前索引对应的数字字符
//			const string& letters = phoneMap[digit - '0']; // 通过数字字符查找对应的字母集合
//			// 遍历当前数字对应的每个字母
//			for (const char& letter : letters) 
//			{
//				combination.push_back(letter); // 将字母加入当前组合
//
//				// 当index为输入数字个数时，此时的combination中存的就是数字个数个字母相互组合
//				backtrack(combinations, phoneMap, digits, index + 1, combination); // 递归调用生成下一个位置的字母
//				combination.pop_back(); // 回溯，撤销最后一次添加的字母
//			}
//		}
//	}
//};







///////////////////////////////////////////////////////////
//list
//﻿template<typename T>
//void removeDuplicates(list<T>& aList)
//{
//	T curValue;
//
//	list<T>::iterator cur, p;
//
//	cur = aList.begin();
//
//	while (cur != aList.end())
//	{
//		curValue = *cur;
//
//		p = cur + 1;
//
//		while (p != aList.end())
//		{
//			if (*p == curValue)
//			{
//				aList.erase(p++);
//			}
//			else
//			{
//				p++;
//			}
//		}
// }



//﻿int main()
//{
//	int ar[] = { 0,1, 2, 3, 4,  5, 6, 7, 8, 9 };
//	int n = sizeof(ar) / sizeof(int);
//
//	list<int> mylist(ar, ar + n);
//
//	list<int>::iterator pos = find(mylist.begin(), mylist.end(), 5);
//
//	reverse(mylist.begin(), pos);
//
//	reverse(pos, mylist.end());
//
//	list<int>::const_reverse_iterator crit = mylist.crbegin();
//
//	while (crit != mylist.crend())
//	{
//		cout << *crit << " ";
//		++crit;
//	}
//	cout << endl;
//}

//
//T* operator->()
//{
//	return &_node->_date;
//}

//#include <iostream>
//using namespace std;
//
//int main
//}


//﻿template<typename Type>
//
//Type Max(const Type& a, const Type& b)
//{
//
//	cout << "This is Max<Type>" << endl;
//
//	return a > b ? a : b;
//
//}
//
//template<>
//
//int Max<int>(const int& a, const int& b)
//
//{
//
//	cout << "This is Max<int>" << endl;
//
//	return a > b ? a : b;
//
//}
//
//template<>
//
//char Max<char>(const char& a, const char& b)
//
//{
//
//	cout << "This is Max<char>" << endl;
//
//	return a > b ? a : b;
//
//}
//
//int Max(const int& a, const int& b)
//
//{
//
//	cout << "This is Max" << endl;
//
//	return a > b ? a : b;
//
//}
//
//int main()
//
//{
//
//	Max(10, 20);
//
//	Max(12.34, 23.45);
//
//	Max('A', 'B');
//
//	Max<int>(20, 30);
//
//	return 0;
//
//}
//
//template<class T1, class T2>
//
//class Data
//
//{
//
//public:
//
//	Data() { cout << "Data<T1, T2>" << endl; }
//
//private:
//
//	T1 _d1;
//
//	T2 _d2;
//
//};
//
//
//template <class T1>
//class Data<T1, int>
//
//{
//
//public:
//
//	Data() { cout << "Data<T1, int>" << endl; }
//
//private:
//
//	T1 _d1;
//
//	int _d2;
//
//};
//
//template <typename T1, typename T2>
//
//class Data <T1*, T2*>
//
//{
//
//public:
//
//	Data() { cout << "Data<T1*, T2*>" << endl; }
//
//private:
//
//	T1 _d1;
//
//	T2 _d2;
//
//};
//
//template <typename T1, typename T2>
//
//class Data <T1&, T2&>
//
//{
//
//public:
//
//	Data(const T1& d1, const T2& d2)
//
//		: _d1(d1)
//
//		, _d2(d2)
//
//	{
//
//		cout << "Data<T1&, T2&>" << endl;
//
//	}
//
//private:
//
//	const T1& _d1;
//
//	const T2& _d2;
//
//};
//
//int main()
//
//{
//
//	Data<double, int> d1;
//
//	Data<int, double> d2;
//
//	Data<int*, int*> d3;
//
//	Data<int&, int&> d4(1, 2);
//
//	return 0
//}


// SD test 12

//
//class Base final
//{
//public:
//	void func5() { cout << "Base::func5" << endl; }
//
//protected:
//	int a = 1;
//
//private:
//	// C++98的⽅法
//	/*Base()
//	{}*/
//};


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	string _name;
//	static int _count;
//};
//
//int Person::_count = 0; // 静态成员初始化
//
//class Student : public Person {
//protected:
//	int _stuNum;
//	static int _count;
//
//};
//
//int Student::_count = 0; // 静态成员初始化
//
//
//int main() {
//	Person p;
//	Student s;
//
//	// 非静态成员_name地址不同，说明子类继承后，父子类对象各有一份
//	cout << &p._name << endl;
//	cout << &s._name << endl;
//
//	// 静态成员_count地址相同，说明子类和父类共用同一个静态成员
//	cout << &p._count << endl;
//	cout << &s._count << endl;
//
//	// 公有的情况下，父子类都可以访问静态成员
//	cout << Person::_count << endl;
//	cout << Student::_count << endl;
//
//	return 0;
//}

// test 13

class Base1 { public: int _b1; };
class Base2 { public: int _b2; };
class Derive : public Base1, public Base2 { public: int _d; };

int main()
{
	Derive d;
	Base1* p1 = &d;
	Base2* p2 = &d;
	Derive* p3 = &d;
	return 0;
}
