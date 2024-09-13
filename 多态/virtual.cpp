#define _CRT_SECURE_NO_WARNINGS 1

//﻿﻿﻿class A
//
//{
//public:
//  void f1() { cout << "A::f1()" << endl; }
//
//  virtual void f2() { cout << "A::f2()" << endl; }
//
//  virtual void f3() { cout << "A::f3()" << endl; }
//};
//
//
//class B : public A
//{
//public:
//	virtual void f1() { cout << "B::f1()" << endl; }
//
//	virtual void f2() { cout << "B::f2()" << endl; }
//
//	void f3() { cout << "B::f3()" << endl; }
//}
// 
// 
//;

//
//
//
//class A
//{
//public:
//    virtual void f()
//    {
//        cout << "A::f()" << endl;
//
//    }
//};
//
//class B : public A
//{
//private:
//    virtual void f()
//    {
//        cout << "B::f()" << endl;
//    }
//};
//
//int main()
//{
//    A* pa = (A*)new B;
//
//    pa->f();
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//﻿class A
//{
//public:
//  A() :m_iVal(0) { test(); }
//
//  virtual void func() { std::cout << m_iVal << ‘ ’; }
//
//  void test() { func(); }
//
//public:
//  int m_iVal;
//};
//
//
//class B : public A
//{
//public:
//    B() { test(); }
//
//    virtual void func()
//    {
//        ++m_iVal;
//
//        std::cout << m_iVal << ‘ ’;
//    }
//};
//
//int main(int argc, char* argv[])
//{
//    A* p = new B;
//
//    p->test();
//
//    return 0;
//}