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



#include<iostream>
using namespace std;

class Person {
public:
    virtual void BuyTicket() {
        std::cout << "买票-全价" << std::endl;
    }
};

class Student : public Person {
public:
    void BuyTicket() override {
        std::cout << "买票-打折" << std::endl;
    }
};

class Soldier : public Person {
public:
    void BuyTicket() override {
        std::cout << "买票-优先" << std::endl;
    }
};

void Func(Person* ptr) {
    ptr->BuyTicket();  // 通过指针调用虚函数
}

int main() {
    Person ps;
    Student st;
    Soldier sr;

    Func(&ps);  // 输出: 买票-全价
    Func(&st);  // 输出: 买票-打折
    Func(&sr);  // 输出: 买票-优先
    return 0;
}



class A
{
public :
    virtual void func(int val = 1) { std::cout << "A->" << val << std::endl; }
    virtual void test() { func(); }
};
class B : public A
{
public :
    void func(int val = 0) { std::cout << "B->" << val << std::endl; }
};
int main(int argc, char* argv[])
{
    B* p = new B;
    p->test();

    return 0;
}