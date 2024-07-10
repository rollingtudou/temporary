//////////////////////////////#include<iostream>
//////////////////////////////using namespace std;
////////////////////////////
////////////////////////////#include <iostream>
////////////////////////////#include <string>
////////////////////////////
////////////////////////////class Person {
////////////////////////////private:
////////////////////////////    std::string name;
////////////////////////////    int age;
////////////////////////////
////////////////////////////public:
////////////////////////////    // 默认构造函数
////////////////////////////    Person() : name("Unknown"), age(0) {}
////////////////////////////
////////////////////////////    // 带参数的构造函数
////////////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
////////////////////////////
////////////////////////////    // 成员函数，用于输出个人信息
////////////////////////////    void displayInfo() const {
////////////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////////////////////////    }
////////////////////////////};
////////////////////////////
////////////////////////////int main() {
////////////////////////////    // 使用默认构造函数创建对象
////////////////////////////    Person person1;
////////////////////////////    person1.displayInfo();
////////////////////////////
////////////////////////////    // 使用带参数的构造函数创建对象
////////////////////////////    Person person2("Alice", 30);
////////////////////////////    person2.displayInfo();
////////////////////////////
////////////////////////////    return 0;
////////////////////////////}
//////////////////////////
//////////////////////////
//////////////////////////#include <iostream>
//////////////////////////
//////////////////////////class Counter {
//////////////////////////private:
//////////////////////////    static int count; // 静态成员变量，用于跟踪实例数量
//////////////////////////
//////////////////////////public:
//////////////////////////    // 构造函数，每次创建对象时增加count
//////////////////////////    Counter() {
//////////////////////////        count++;
//////////////////////////    }
//////////////////////////
//////////////////////////    // 析构函数，用于清理资源（如果有的话）
//////////////////////////    ~Counter() {
//////////////////////////        // 这里不做特别处理，只是示例
//////////////////////////    }
//////////////////////////
//////////////////////////    // 静态成员函数，返回当前创建的对象总数
//////////////////////////    static int getTotalCount() {
//////////////////////////        return count;
//////////////////////////    }
//////////////////////////};
//////////////////////////
//////////////////////////// 静态成员变量的定义在类外进行
//////////////////////////int Counter::count = 0;
//////////////////////////
//////////////////////////int main() {
//////////////////////////    // 创建Counter对象
//////////////////////////    Counter c1;
//////////////////////////    Counter c2;
//////////////////////////    Counter c3;
//////////////////////////
//////////////////////////    // 打印当前创建的对象总数
//////////////////////////    std::cout << "Total number of Counter objects created: " << Counter::getTotalCount() << std::endl;
//////////////////////////
//////////////////////////    return 0;
//////////////////////////}
////////////////////////
////////////////////////
////////////////////////#include <iostream>
////////////////////////#include <string>
////////////////////////
////////////////////////class Person {
////////////////////////private:
////////////////////////    std::string name;
////////////////////////    const int age; // 常量成员变量，只能在构造函数中初始化
////////////////////////
////////////////////////public:
////////////////////////    // 构造函数，初始化常量成员变量
////////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
////////////////////////
////////////////////////    // 常量成员函数，保证不会修改成员变量
////////////////////////    void printInfo() const {
////////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////////////////////    }
////////////////////////
////////////////////////    // 成员函数，通过常量引用传递参数
////////////////////////    void setName(const std::string& newName) const {
////////////////////////        // 这里我们不修改name，只是为了演示常量引用的使用
////////////////////////        std::cout << "Attempt to set name to: " << newName << ", but it's not allowed." << std::endl;
////////////////////////    }
////////////////////////};
////////////////////////
////////////////////////int main() {
////////////////////////    const int MAX_AGE = 100; // 定义一个常量
////////////////////////    Person person("Alice", 30); // 创建Person对象
////////////////////////
////////////////////////    person.printInfo(); // 调用常量成员函数
////////////////////////
////////////////////////    // 尝试修改常量成员变量，编译器将报错
////////////////////////    // person.age = MAX_AGE;
////////////////////////
////////////////////////    const std::string newName = "Bob";
////////////////////////    person.setName(newName); // 通过常量引用传递参数
////////////////////////
////////////////////////    // 尝试修改常量对象的成员，编译器将报错
////////////////////////    // person.name = "Charlie";
////////////////////////
////////////////////////    const Person personConst("Dave", 25);
////////////////////////    personConst.printInfo(); // 常量对象调用常量成员函数
////////////////////////
////////////////////////    //const int* const ptrToAge = &person.age; // 常量指针指向常量数据
////////////////////////    // *ptrToAge = 40; // 错误：尝试通过常量指针修改常量数据
////////////////////////    // ptrToAge = nullptr; // 错误：尝试修改常量指针
////////////////////////
////////////////////////    std::cout << "Age from pointer: " << *ptrToAge << std::endl;
////////////////////////
////////////////////////    return 0;
////////////////////////}
//////////////////////
//////////////////////#include <iostream>
//////////////////////#include <string>
//////////////////////
//////////////////////class Person {
//////////////////////private:
//////////////////////    std::string name;
//////////////////////    const int age; // 常量成员变量，只能在构造函数中初始化
//////////////////////
//////////////////////public:
//////////////////////    // 构造函数，初始化常量成员变量
//////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
//////////////////////
//////////////////////    // 常量成员函数，保证不会修改成员变量
//////////////////////    void printInfo() const {
//////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
//////////////////////    }
//////////////////////};
//////////////////////
//////////////////////int main() {
//////////////////////    const int MAX_AGE = 100; // 定义一个常量
//////////////////////    Person person("Alice", 30); // 创建Person对象
//////////////////////
//////////////////////    person.printInfo(); // 调用常量成员函数
//////////////////////
//////////////////////    // 下面两行代码是非法的，因为它们试图修改常量数据
//////////////////////    // person.age = MAX_AGE;
//////////////////////    // person.name = "Charlie";
//////////////////////
//////////////////////    // 创建一个常量Person对象
//////////////////////    const Person personConst("Dave", 25);
//////////////////////    personConst.printInfo(); // 常量对象调用常量成员函数
//////////////////////
//////////////////////    // 常量指针指向常量数据成员，这里我们不修改它
//////////////////////    const int* ptrToAge = &person.age;
//////////////////////    std::cout << "Age from pointer: " << *ptrToAge << std::endl;
//////////////////////
//////////////////////    // 下面两行代码是非法的，因为它们试图修改常量指针或通过它修改常量数据
//////////////////////    // *ptrToAge = 40;
//////////////////////    // ptrToAge = nullptr;
//////////////////////
//////////////////////    return 0;
//////////////////////}
////////////////////#include <iostream>
////////////////////#include <string>
////////////////////
////////////////////class Person {
////////////////////private:
////////////////////    std::string name;
////////////////////    const int age; // age是一个const类型，只能在构造函数中初始化
////////////////////
////////////////////public:
////////////////////    // 构造函数，初始化const成员变量
////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
////////////////////
////////////////////    // 获取age的常量指针
////////////////////    const int* getAgePtr() const {
////////////////////        return &age;
////////////////////    }
////////////////////
////////////////////    // 常量成员函数，保证不会修改成员变量
////////////////////    void printInfo() const {
////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////////////////    }
////////////////////};
////////////////////
////////////////////int main() {
////////////////////    Person person("Alice", 30); // 创建Person对象
////////////////////
////////////////////    person.printInfo(); // 调用常量成员函数
////////////////////
////////////////////    // 获取指向age的常量指针
////////////////////    const int* ptrToAge = person.getAgePtr();
////////////////////    std::cout << "Age from pointer: " << *ptrToAge << std::endl;
////////////////////
////////////////////    // 下面的操作是非法的，因为ptrToAge是指向const的指针
////////////////////    // *ptrToAge = 25; // 错误：尝试修改通过const指针指向的数据
////////////////////
////////////////////    // ptrToAge本身是一个const指针，不能被重新赋值
////////////////////    // ptrToAge = nullptr; // 错误：尝试修改const指针
////////////////////
////////////////////    return 0;
////////////////////}
//////////////////
//////////////////#include <iostream>
//////////////////#include <string>
//////////////////
//////////////////// 引擎类
//////////////////class Engine {
//////////////////private:
//////////////////    std::string type;
//////////////////
//////////////////public:
//////////////////    Engine(const std::string& type) : type(type) {}
//////////////////
//////////////////    void start() const {
//////////////////        std::cout << "Engine type: " << type << ", Engine started." << std::endl;
//////////////////    }
//////////////////};
//////////////////
//////////////////// 车轮类
//////////////////class Wheel {
//////////////////private:
//////////////////    int size;
//////////////////
//////////////////public:
//////////////////    Wheel(int size) : size(size) {}
//////////////////
//////////////////    void rotate() const {
//////////////////        std::cout << "Wheel with size " << size << " inches is rotating." << std::endl;
//////////////////    }
//////////////////};
//////////////////
//////////////////// 汽车类，组合了引擎和车轮
//////////////////class Car {
//////////////////private:
//////////////////    std::string model;
//////////////////    Engine engine; // 组合引擎类
//////////////////    Wheel wheel;   // 组合车轮类
//////////////////
//////////////////public:
//////////////////    Car(const std::string& model, const Engine& engine, const Wheel& wheel)
//////////////////        : model(model), engine(engine), wheel(wheel) {}
//////////////////
//////////////////    void startEngine() {
//////////////////        engine.start();
//////////////////    }
//////////////////
//////////////////    void rotateWheel() {
//////////////////        wheel.rotate();
//////////////////    }
//////////////////
//////////////////    void displayInfo() const {
//////////////////        std::cout << "Car model: " << model << std::endl;
//////////////////        engine.start(); // 演示引擎启动
//////////////////        wheel.rotate(); // 演示车轮旋转
//////////////////    }
//////////////////};
//////////////////
//////////////////int main() {
//////////////////    // 创建引擎和车轮实例
//////////////////    Engine myEngine("V8");
//////////////////    Wheel myWheel(18);
//////////////////
//////////////////    // 使用引擎和车轮创建汽车实例
//////////////////    Car myCar("2024 Sedan", myEngine, myWheel);
//////////////////
//////////////////    // 显示汽车信息
//////////////////    myCar.displayInfo();
//////////////////
//////////////////    return 0;
//////////////////}
////////////////
////////////////#include <iostream>
////////////////
////////////////class Point {
////////////////public:
////////////////    int x, y;
////////////////
////////////////    // 构造函数
////////////////    Point(int x = 0, int y = 0) : x(x), y(y) {}
////////////////
////////////////    // 重载 + 运算符作为成员函数
////////////////    Point operator+(const Point& rhs) const {
////////////////        return Point(x + rhs.x, y + rhs.y);
////////////////    }
////////////////
////////////////    // 重载 << 运算符作为友元函数
////////////////    friend std::ostream& operator<<(std::ostream& os, const Point& point);
////////////////};
////////////////
////////////////// 友元函数的定义
////////////////std::ostream& operator<<(std::ostream& os, const Point& point) {
////////////////    os << "(" << point.x << ", " << point.y << ")";
////////////////    return os;
////////////////}
////////////////
////////////////int main() {
////////////////    Point p1(1, 2);
////////////////    Point p2(3, 4);
////////////////    Point p3 = p1 + p2; // 使用重载的 + 运算符
////////////////
////////////////    // 使用重载的 << 运算符
////////////////    std::cout << "p1: " << p1 << ", p2: " << p2 << ", p3: " << p3 << std::endl;
////////////////
////////////////    return 0;
////////////////}
//////////////
//////////////
//////////////#include <iostream>
//////////////
//////////////// 函数原型声明
//////////////void print(const std::string& message);
//////////////void print(int number);
//////////////void print(double value, int precision);
//////////////
//////////////// 函数定义
//////////////void print(const std::string& message) {
//////////////    std::cout << "String: " << message << std::endl;
//////////////}
//////////////
//////////////void print(int number) {
//////////////    std::cout << "Integer: " << number << std::endl;
//////////////}
//////////////
//////////////void print(double value, int precision) {
//////////////    std::cout << "Double with precision " << precision
//////////////        << ": " << std::fixed << std::setprecision(precision) << value << std::endl;
//////////////}
//////////////
//////////////int main() {
//////////////    // 调用重载的print函数
//////////////    print("Hello, World!");      // 调用第一个print函数
//////////////    print(123);                  // 调用第二个print函数
//////////////    print(3.1415926, 3);        // 调用第三个print函数
//////////////
//////////////    return 0;
//////////////}
////////////
////////////
////////////#include <iostream>
////////////#include <string>
////////////#include <iomanip> // 包含setprecision和ios_base
////////////
////////////// 函数原型声明
////////////void print(const std::string& message);
////////////void print(int number);
////////////void print(double value, int precision);
////////////
////////////// 函数定义
////////////void print(const std::string& message) {
////////////    std::cout << "String: " << message << std::endl;
////////////}
////////////
////////////void print(int number) {
////////////    std::cout << "Integer: " << number << std::endl;
////////////}
////////////
////////////void print(double value, int precision) {
////////////    std::cout << "Double with precision " << precision << ": ";
////////////    std::cout << std::fixed << std::setprecision(precision) << value << std::endl;
////////////}
////////////
////////////int main() {
////////////    // 调用重载的print函数
////////////    print("Hello, World!");      // 调用第一个print函数
////////////    print(123);                  // 调用第二个print函数
////////////    print(3.1415926, 3);       a // 调用第三个print函数
////////////
////////////    return 0;
////////////}
//////////
//////////#include <iostream>
//////////#include <string>
//////////
//////////// 定义一个简单的Person类
//////////class Person {
//////////private:
//////////    std::string name;
//////////    int age;
//////////
//////////public:
//////////    // 构造函数，用于初始化Person对象
//////////    Person(const std::string& name, int age) : name(name), age(age) {
//////////        std::cout << "Person created: " << name << ", Age: " << age << std::endl;
//////////    }
//////////
//////////    // 成员函数，用于显示个人信息
//////////    void displayInfo() const {
//////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
//////////    }
//////////};
//////////
//////////int main() {
//////////    // 使用构造函数创建Person对象
//////////    Person person1("Alice", 30);
//////////    person1.displayInfo(); // 输出: Name: Alice, Age: 30
//////////
//////////    // 创建另一个Person对象
//////////    Person person2("Bob", 24);
//////////    person2.displayInfo(); // 输出: Name: Bob, Age: 24
//////////
//////////    return 0;
//////////}
////////
////////
////////#include <iostream>
////////#include <string>
////////
////////class Person {
////////private:
////////    std::string name;
////////    int age;
////////    static int instanceCount; // 跟踪类的实例数量
////////
////////public:
////////    // 默认构造函数
////////    Person(const std::string& name, int age) : name(name), age(age) {
////////        instanceCount++; // 每次创建对象时，实例计数增加
////////        std::cout << "Person created: " << name << ", Age: " << age << std::endl;
////////    }
////////
////////    // 析构函数
////////    ~Person() {
////////        instanceCount--; // 对象销毁时，实例计数减少
////////        std::cout << "Person destroyed: " << name << ". Remaining instances: " << instanceCount << std::endl;
////////    }
////////
////////    // 成员函数，用于显示个人信息
////////    void displayInfo() const {
////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////    }
////////
////////    // 获取实例数量的静态成员函数
////////    static int getInstanceCount() {
////////        return instanceCount;
////////    }
////////};
////////
////////// 初始化静态成员变量
////////int Person::instanceCount = 0;
////////
////////int main() {
////////    {
////////        Person person1("Alice", 30);
////////        person1.displayInfo();
////////
////////        // 可以在这里访问析构函数输出，当person1超出作用域时
////////    } // person1的析构函数在这里被调用
////////
////////    std::cout << "Current instance count: " << Person::getInstanceCount() << std::endl;
////////
////////    {
////////        Person person2("Bob", 24);
////////        person2.displayInfo();
////////    } // person2的析构函数在这里被调用
////////
////////    std::cout << "Current instance count: " << Person::getInstanceCount() << std::endl;
////////
////////    return 0;
////////}
//////
//////
//////#include <iostream>
//////#include <string>
//////
//////// 基类：Animal
//////class Animal {
//////protected:
//////    std::string name;
//////
//////public:
//////    // 构造函数
//////    Animal(std::string name) : name(name) {}
//////
//////    // 虚析构函数
//////    virtual ~Animal() {
//////        std::cout << name << " is being destroyed." << std::endl;
//////    }
//////
//////    // 虚函数，可以在派生类中重写
//////    virtual void speak() const {
//////        std::cout << name << " makes a sound." << std::endl;
//////    }
//////};
//////
//////// 派生类：Dog
//////class Dog : public Animal {
//////public:
//////    // 构造函数
//////    Dog(std::string name) : Animal(name) {}
//////
//////    // 重写基类的speak函数
//////    void speak() const override {
//////        std::cout << name << " barks." << std::endl;
//////    }
//////};
//////
//////// 另一个派生类：Cat
//////class Cat : public Animal {
//////public:
//////    // 构造函数
//////    Cat(std::string name) : Animal(name) {}
//////
//////    // 重写基类的speak函数
//////    void speak() const override {
//////        std::cout << name << " meows." << std::endl;
//////    }
//////};
//////
//////int main() {
//////    Animal* animals[2]; // 基类指针数组
//////
//////    // 创建派生类对象
//////    animals[0] = new Dog("Buddy");
//////    animals[1] = new Cat("Whiskers");
//////
//////    // 使用基类指针调用派生类函数
//////    for (int i = 0; i < 2; ++i) {
//////        animals[i]->speak(); // 多态性
//////    }
//////
//////    // 释放内存
//////    for (int i = 0; i < 2; ++i) {
//////        delete animals[i];
//////    }
//////
//////    return 0;
//////}
////
////
////
////#include <iostream>
////#include <vector>
////#include <memory>
////
////// 基类 Shape
////class Shape {
////public:
////    // 虚析构函数
////    virtual ~Shape() {}
////
////    // 纯虚函数，用于计算面积
////    virtual double area() const = 0;
////};
////
////// 派生类 Circle
////class Circle : public Shape {
////private:
////    double radius;
////
////public:
////    Circle(double r) : radius(r) {}
////
////    // 重写计算面积的函数
////    double area() const override {
////        return 3.14159 * radius * radius;
////    }
////};
////
////// 派生类 Rectangle
////class Rectangle : public Shape {
////private:
////    double width;
////    double height;
////
////public:
////    Rectangle(double w, double h) : width(w), height(h) {}
////
////    // 重写计算面积的函数
////    double area() const override {
////        return width * height;
////    }
////};
////
////// 函数，接受 Shape 指针的向量，并计算所有形状的总面积
////void calculateTotalArea(const std::vector<std::shared_ptr<Shape>>& shapes) {
////    double totalArea = 0.0;
////    for (const auto& shape : shapes) {
////        totalArea += shape->area(); // 多态调用
////    }
////    std::cout << "Total area of all shapes: " << totalArea << std::endl;
////}
////
////int main() {
////    // 创建形状的智能指针列表
////    std::vector<std::shared_ptr<Shape>> shapes;
////    shapes.push_back(std::make_shared<Circle>(5.0));
////    shapes.push_back(std::make_shared<Rectangle>(4.0, 5.0));
////
////    // 计算总面积
////    calculateTotalArea(shapes);
////
////    return 0;
////}
//
//#define _CRT_SECURE_NO_WARNINGS
//#define  CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//typedef struct student  //定义结构体
//{
//    char name[20]; //姓名
//    char num[15];  //学号
//    char sex[10];  //性别
//    char from[20]; //籍贯
//    char political[10]; //政治面貌
//    char phone[15];  //手机号
//    char QQ[15];   //QQ号
//    char dorm[10];  //宿舍
//    struct student* next; //结构体指针
//}stu;
//stu* head;
//
//void print() //主菜单
//{
//    system("cls");
//    printf("\n\n\n");
//    printf("  ☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
//    printf("  ***********************************************************\n");
//    printf("  \t\t\t班级通讯录管理系统\n");
//    printf("\n");
//    printf("  \t\t1. 输入数据");
//    printf("\t\t2. 显示数据\n");
//    printf("  \t\t3. 插入数据");
//    printf("\t\t4. 删除数据\n");
//    printf("  \t\t5. 查看数据");
//    printf("\t\t6. 修改数据\n");
//    printf("  \t\t7. 保存数据");
//    printf("\t\t8. 返回主菜单\n");
//    printf("  ***********************************************************\n");
//    printf("  ~~~~~退~~~~~~~~~~出~~~~~~~~~~请~~~~~~~~~~按~~~~~~~~~~9~~~~~\n");
//    printf("  -----------------------------------------------------------\n\n");
//}
//
//
//void input(stu* p1) //输入相关数据
//{
//    printf("姓名:");
//    scanf_s("%s", &p1->name);
//    printf("学号:");
//    scanf_s("%s", &p1->num);
//    printf("性别:");
//    scanf_s("%s", &p1->sex);
//    printf("籍贯:");
//    scanf_s("%s", &p1->from);
//    printf("政治面貌:");
//    scanf_s("%s", &p1->political);
//    printf("手机号:");
//    scanf_s("%s", &p1->phone);
//    printf("QQ号:");
//    scanf_s("%s", &p1->QQ);
//    printf("宿舍:");
//    scanf_s("%s", &p1->dorm);
//}
//
//
//stu* inputdata()  //数据输入的函数
//{
//    stu* p1, * p2 = nullptr;
//    //stu* p2 = NULL; // 初始化为 NULL，表示没有指向任何对象
//    int i = 1;
//    p1 = (stu*)malloc(sizeof(stu));
//    if (p1 != NULL)
//    {
//        head = p1;
//        printf("\n\t\t\t☆☆☆输入数据☆☆☆\n");
//        printf("------------------------------------------------------------------\n");
//        printf("在姓名处输入“ok”代表输入数据结束\n");
//        while (i)
//        {
//            printf("姓名:");
//            scanf_s("%19s", &p1->name);
//            if (strcmp(p1->name, "ok") == 0)
//            {
//                printf("\n输入完毕!\n");
//                printf("========================================================================\n");
//                i = 0;
//
//                p2->next = NULL;
//                free(p1);
//                p1 = p2;
//            }
//            else
//            {
//                printf("学号:");
//                scanf_s("%19s", &p1->num);
//                printf("性别:");
//                scanf_s("%19s", &p1->sex);
//                printf("籍贯:");
//                scanf_s("%19s", &p1->from);
//                printf("政治面貌:");
//                scanf_s("%19s", &p1->political);
//                printf("手机号:");
//                scanf_s("%19s", &p1->phone);
//                printf("QQ号:");
//                scanf_s("%19s", &p1->QQ);
//                printf("宿舍:");
//                scanf_s("%19s", &p1->dorm);
//                printf("=====================================\n");
//                p2 = p1;
//                p1 = (stu*)malloc(sizeof(stu));
//                if (p1 != NULL)
//                {
//                    p2->next = p1;
//                }
//            }
//        }
//        return(p1->next);
//    }
//}
//
//
//stu* lookdata(stu* p1)  //查看数据的函数
//{
//    printf("\n\t\t\t☆☆☆显示数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    while (p1 != NULL)
//    {
//        printf("姓名:%s\n", p1->name);
//        printf("学号:%s\t", p1->num);
//        printf("性别:%s\t", p1->sex);
//        printf("籍贯:%s\t", p1->from);
//        printf("政治面貌:%s\t", p1->political);
//        printf("手机号:%s\t", p1->phone);
//        printf("QQ号:%s\t", p1->QQ);
//        printf("宿舍:%s\n", p1->dorm);
//        printf("======================================================================\n");
//        p1 = p1->next;
//    }
//    return p1;
//}
//
//
//void insert()  //插入数据
//{
//    int i = 0;
//    char named[20];
//    stu* p1, * p2 = nullptr, * p3;
//    p1 = head;
//    p3 = (stu*)malloc(sizeof(stu));
//    p3->next = NULL;
//    printf("\n\t\t\t☆☆☆插入数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入插入者的资料:\n");
//    input(p3);
//    printf("\n插入选项\n");
//    printf("1.首位置插入\t2.尾位置插入\t3.前插\n");
//    printf("请输入你的选择:");
//    scanf_s("%19s", &p1->num);
//    ("%d", &i);
//    switch (i)
//    {
//    case 1:p3->next = p1;
//        head = p3;
//        break;
//    case 2:while (p1->next != NULL)
//    {
//        p2 = p1;
//        p1 = p1->next;
//    }
//          p1->next = p3;
//          break;
//    case 3:printf("请输入姓名（前插）:");
//        scanf_s("%19s", named);
//        while (strcmp(named, p1->name) != 0)
//        {
//            p2 = p1;
//            p1 = p1->next;
//        }
//        p2->next = p3;
//        p3->next = p1;
//        break;
//    }
//    printf("插入成功!\n");
//    printf("======================================================================\n");
//    return;
//}
//
//void deleted()   //删除数据
//{
//    stu* p1, * p2 = nullptr;
//    char Name[20]; //想要删除的人的姓名
//    printf("\n\t\t\t☆☆☆删除数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入要删除的姓名:");
//    scanf_s("%19s", Name);
//    p1 = head;
//    if (head == NULL)
//    {
//        printf("内存空空神马都没有!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    if (strcmp(Name, p1->name) == 0)
//    {
//        head = p1->next;
//        printf("删除成功!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    while (p1 != NULL && (strcmp(Name, p1->name) != 0))
//    {
//        p2 = p1;
//        p1 = p1->next;
//    }
//    if (p1 == NULL)
//    {
//        printf("此人不存在!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    if (p1->next != NULL)
//    {
//        p1 = p1->next;
//        p2->next = p1;
//        printf("删除成功!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    else
//    {
//        p2->next = NULL;
//        printf("删除成功!\n");
//        printf("======================================================================\n");
//        return;
//    }
//}
//
//
//int find(stu* p2)  //通过姓名查找查看数据的函数
//{
//    char name[20];
//    int b = 0;
//    int nume;
//    printf("\n\t\t\t☆☆☆查看数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入您想查找人的姓名:");
//    scanf_s("%19s", name, (unsigned)_countof(name)); // 正确：指定缓冲区大小为 name 数组的大小
//    while (p2 != NULL)
//    {
//        if (strcmp(name, p2->name) == 0)
//        {
//            printf("你要找到的数据\n");
//            printf("姓名:%s\n", p2->name);
//            printf("学号:%s\t", p2->num);
//            printf("性别:%s\t", p2->sex);
//            printf("籍贯:%s\t", p2->from);
//            printf("政治面貌:%s\t", p2->political);
//            printf("手机号:%s\t", p2->phone);
//            printf("QQ号:%s\t", p2->QQ);
//            printf("宿舍:%s\n", p2->dorm);
//            printf("======================================================================\n");
//            b = 1;
//        }
//        p2 = p2->next;
//    }
//    if (b == 0)
//    {
//        printf("\n您要查找的人不存在!\n");
//        return 0;
//    }
//}
//
//
//int update(stu* p2) //通过姓名查找修改数据
//{
//    char name[20];
//    int b = 0, i;
//    printf("\n\t\t\t☆☆☆修改数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入将要修改人的姓名:");
//    scanf_s("%19s", name);
//    while (p2 != NULL)
//    {
//        if (strcmp(name, p2->name) == 0)
//        {
//            printf("该同学的基本信息\n");
//            printf("姓名:%s\n", p2->name);
//            printf("学号:%s\t", p2->num);
//            printf("性别:%s\t", p2->sex);
//            printf("籍贯:%s\t", p2->from);
//            printf("政治面貌:%s\t", p2->political);
//            printf("手机号:%s\t", p2->phone);
//            printf("QQ号:%s\t", p2->QQ);
//            printf("宿舍:%s\n", p2->dorm);
//            printf("\n请选择要修改的信息\n");
//            printf("\t1.姓名\t2.学号\t3.性别\t4.籍贯\n\t5.政治面貌\t6.手机号\t7.QQ\t8.宿舍\n");
//            printf("\n您的选择是(1~8):");
//            scanf_s("%19d", &i);
//            printf("请输入修改之后的内容\n");
//            switch (i)
//            {
//            case 1:printf("姓名:");
//                scanf_s("%19s", &p2->name);
//                break;
//            case 2:printf("学号:");
//                scanf_s("%19s", &p2->num);
//                break;
//            case 3:printf("性别:");
//                scanf_s("%19s", &p2->sex);
//                break;
//            case 4:printf("籍贯:");
//                scanf_s("%19s", &p2->from);
//                break;
//            case 5:printf("政治面貌:");
//                scanf_s("%19s", &p2->political);
//                break;
//            case 6:printf("手机号:");
//                scanf_s("%19s", &p2->phone);
//                break;
//            case 7:printf("QQ:");
//                scanf_s("%19s", &p2->QQ);
//                break;
//            case 8:printf("宿舍:");
//                scanf_s("%19d", &p2->dorm);
//                break;
//            }
//            printf("\n修改成功!\n");
//            printf("=========================================================================\n");
//            b = 1;
//        }
//        p2 = p2->next;
//    }
//    if (b == 0)
//    {
//        printf("没有找到该人的资料!\n");
//        return 0;
//    }
//}
//
//
//int save(stu* p2) //保存数据
//{
//    FILE* fp;
//    char file[15];
//    printf("\n\t\t\t☆☆☆保存数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("输入文件名:");
//    scanf_s("%19s", file, (unsigned)_countof(file)); // 正确：指定缓冲区大小为 name 数组的大小
//    if ((fp = fopen(file, "w")) == NULL)
//    {
//        printf("cannot open this file\n");
//        exit(0);
//    }
//    fprintf(fp, "姓名\t学号\t性别\t籍贯\t政治面貌\t手机号\tQQ号\t宿舍\n");
//    while (p2 != NULL)
//    {
//        fprintf(fp, "%s\t", p2->name);
//        fprintf(fp, "%s\t", p2->num);
//        fprintf(fp, "%s\t", p2->sex);
//        fprintf(fp, "%s\t", p2->from);
//        fprintf(fp, "%s\t", p2->political);
//        fprintf(fp, "%s\t", p2->phone);
//        fprintf(fp, "%s\t", p2->QQ);
//        fprintf(fp, "%s\n", p2->dorm);
//        p2 = p2->next;
//    }
//    printf("\n保存成功!\n");
//    printf("======================================================================\n");
//    fclose(fp);
//}
//
//
//void screen()
//{
//    int i;
//    char s[251] = { "欢迎使用由可以换成自己名字制作班级通讯录管理系统，\n\n\t\t\t本系统用于通讯录管理----排序，打印\n\n\n\t\tWelcome to use produced by ZM class address book\n\n\t\t management system,sorting,printing" };
//
//    printf("\n================================================================================\n");
//    printf("\n\n\n\t\t\t");
//    for (i = 0; s[i] != NULL; i++)
//    {
//        Sleep(30);
//        printf("%c", s[i]);
//    }
//    printf("\n\n\n\n\n\n\n\n\t\t ~ Hi~ o(*￣▽￣*)ブ~ ~ ~祝您旅途愉快~ ~\n");
//    printf("================================================================================\n");
//
//}
//
//
//int main()
//{
//    int i;
//    system("color 4e");
//    screen();
//    Sleep(3000);
//    print();
//    while (1)
//    {
//        printf("请输入你的选择(1~9):");
//    loop:scanf_s("%19d", &i);
//        if (i < 1 || i>9)
//        {
//            printf("输入有误,请在1~9中进行选择:");
//            goto loop;
//        }
//        switch (i)
//        {
//        case 1:
//            inputdata();
//            break;
//        case 2:
//            lookdata(head);
//            break;
//        case 3:
//            insert();
//            break;
//        case 4:
//            deleted();
//            break;
//        case 5:
//            find(head);
//            break;
//        case 6:
//            update(head);
//            break;
//        case 7:
//            save(head);
//            break;
//        case 8:
//            print();
//            break;
//        case 9:
//            exit(1);
//            break;
//        }
//    }
//}////////////////////////////#include<iostream>
//////////////////////////////using namespace std;
////////////////////////////
////////////////////////////#include <iostream>
////////////////////////////#include <string>
////////////////////////////
////////////////////////////class Person {
////////////////////////////private:
////////////////////////////    std::string name;
////////////////////////////    int age;
////////////////////////////
////////////////////////////public:
////////////////////////////    // 默认构造函数
////////////////////////////    Person() : name("Unknown"), age(0) {}
////////////////////////////
////////////////////////////    // 带参数的构造函数
////////////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
////////////////////////////
////////////////////////////    // 成员函数，用于输出个人信息
////////////////////////////    void displayInfo() const {
////////////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////////////////////////    }
////////////////////////////};
////////////////////////////
////////////////////////////int main() {
////////////////////////////    // 使用默认构造函数创建对象
////////////////////////////    Person person1;
////////////////////////////    person1.displayInfo();
////////////////////////////
////////////////////////////    // 使用带参数的构造函数创建对象
////////////////////////////    Person person2("Alice", 30);
////////////////////////////    person2.displayInfo();
////////////////////////////
////////////////////////////    return 0;
////////////////////////////}
//////////////////////////
//////////////////////////
//////////////////////////#include <iostream>
//////////////////////////
//////////////////////////class Counter {
//////////////////////////private:
//////////////////////////    static int count; // 静态成员变量，用于跟踪实例数量
//////////////////////////
//////////////////////////public:
//////////////////////////    // 构造函数，每次创建对象时增加count
//////////////////////////    Counter() {
//////////////////////////        count++;
//////////////////////////    }
//////////////////////////
//////////////////////////    // 析构函数，用于清理资源（如果有的话）
//////////////////////////    ~Counter() {
//////////////////////////        // 这里不做特别处理，只是示例
//////////////////////////    }
//////////////////////////
//////////////////////////    // 静态成员函数，返回当前创建的对象总数
//////////////////////////    static int getTotalCount() {
//////////////////////////        return count;
//////////////////////////    }
//////////////////////////};
//////////////////////////
//////////////////////////// 静态成员变量的定义在类外进行
//////////////////////////int Counter::count = 0;
//////////////////////////
//////////////////////////int main() {
//////////////////////////    // 创建Counter对象
//////////////////////////    Counter c1;
//////////////////////////    Counter c2;
//////////////////////////    Counter c3;
//////////////////////////
//////////////////////////    // 打印当前创建的对象总数
//////////////////////////    std::cout << "Total number of Counter objects created: " << Counter::getTotalCount() << std::endl;
//////////////////////////
//////////////////////////    return 0;
//////////////////////////}
////////////////////////
////////////////////////
////////////////////////#include <iostream>
////////////////////////#include <string>
////////////////////////
////////////////////////class Person {
////////////////////////private:
////////////////////////    std::string name;
////////////////////////    const int age; // 常量成员变量，只能在构造函数中初始化
////////////////////////
////////////////////////public:
////////////////////////    // 构造函数，初始化常量成员变量
////////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
////////////////////////
////////////////////////    // 常量成员函数，保证不会修改成员变量
////////////////////////    void printInfo() const {
////////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////////////////////    }
////////////////////////
////////////////////////    // 成员函数，通过常量引用传递参数
////////////////////////    void setName(const std::string& newName) const {
////////////////////////        // 这里我们不修改name，只是为了演示常量引用的使用
////////////////////////        std::cout << "Attempt to set name to: " << newName << ", but it's not allowed." << std::endl;
////////////////////////    }
////////////////////////};
////////////////////////
////////////////////////int main() {
////////////////////////    const int MAX_AGE = 100; // 定义一个常量
////////////////////////    Person person("Alice", 30); // 创建Person对象
////////////////////////
////////////////////////    person.printInfo(); // 调用常量成员函数
////////////////////////
////////////////////////    // 尝试修改常量成员变量，编译器将报错
////////////////////////    // person.age = MAX_AGE;
////////////////////////
////////////////////////    const std::string newName = "Bob";
////////////////////////    person.setName(newName); // 通过常量引用传递参数
////////////////////////
////////////////////////    // 尝试修改常量对象的成员，编译器将报错
////////////////////////    // person.name = "Charlie";
////////////////////////
////////////////////////    const Person personConst("Dave", 25);
////////////////////////    personConst.printInfo(); // 常量对象调用常量成员函数
////////////////////////
////////////////////////    //const int* const ptrToAge = &person.age; // 常量指针指向常量数据
////////////////////////    // *ptrToAge = 40; // 错误：尝试通过常量指针修改常量数据
////////////////////////    // ptrToAge = nullptr; // 错误：尝试修改常量指针
////////////////////////
////////////////////////    std::cout << "Age from pointer: " << *ptrToAge << std::endl;
////////////////////////
////////////////////////    return 0;
////////////////////////}
//////////////////////
//////////////////////#include <iostream>
//////////////////////#include <string>
//////////////////////
//////////////////////class Person {
//////////////////////private:
//////////////////////    std::string name;
//////////////////////    const int age; // 常量成员变量，只能在构造函数中初始化
//////////////////////
//////////////////////public:
//////////////////////    // 构造函数，初始化常量成员变量
//////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
//////////////////////
//////////////////////    // 常量成员函数，保证不会修改成员变量
//////////////////////    void printInfo() const {
//////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
//////////////////////    }
//////////////////////};
//////////////////////
//////////////////////int main() {
//////////////////////    const int MAX_AGE = 100; // 定义一个常量
//////////////////////    Person person("Alice", 30); // 创建Person对象
//////////////////////
//////////////////////    person.printInfo(); // 调用常量成员函数
//////////////////////
//////////////////////    // 下面两行代码是非法的，因为它们试图修改常量数据
//////////////////////    // person.age = MAX_AGE;
//////////////////////    // person.name = "Charlie";
//////////////////////
//////////////////////    // 创建一个常量Person对象
//////////////////////    const Person personConst("Dave", 25);
//////////////////////    personConst.printInfo(); // 常量对象调用常量成员函数
//////////////////////
//////////////////////    // 常量指针指向常量数据成员，这里我们不修改它
//////////////////////    const int* ptrToAge = &person.age;
//////////////////////    std::cout << "Age from pointer: " << *ptrToAge << std::endl;
//////////////////////
//////////////////////    // 下面两行代码是非法的，因为它们试图修改常量指针或通过它修改常量数据
//////////////////////    // *ptrToAge = 40;
//////////////////////    // ptrToAge = nullptr;
//////////////////////
//////////////////////    return 0;
//////////////////////}
////////////////////#include <iostream>
////////////////////#include <string>
////////////////////
////////////////////class Person {
////////////////////private:
////////////////////    std::string name;
////////////////////    const int age; // age是一个const类型，只能在构造函数中初始化
////////////////////
////////////////////public:
////////////////////    // 构造函数，初始化const成员变量
////////////////////    Person(const std::string& name, int age) : name(name), age(age) {}
////////////////////
////////////////////    // 获取age的常量指针
////////////////////    const int* getAgePtr() const {
////////////////////        return &age;
////////////////////    }
////////////////////
////////////////////    // 常量成员函数，保证不会修改成员变量
////////////////////    void printInfo() const {
////////////////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////////////////    }
////////////////////};
////////////////////
////////////////////int main() {
////////////////////    Person person("Alice", 30); // 创建Person对象
////////////////////
////////////////////    person.printInfo(); // 调用常量成员函数
////////////////////
////////////////////    // 获取指向age的常量指针
////////////////////    const int* ptrToAge = person.getAgePtr();
////////////////////    std::cout << "Age from pointer: " << *ptrToAge << std::endl;
////////////////////
////////////////////    // 下面的操作是非法的，因为ptrToAge是指向const的指针
////////////////////    // *ptrToAge = 25; // 错误：尝试修改通过const指针指向的数据
////////////////////
////////////////////    // ptrToAge本身是一个const指针，不能被重新赋值
////////////////////    // ptrToAge = nullptr; // 错误：尝试修改const指针
////////////////////
////////////////////    return 0;
////////////////////}
//////////////////
//////////////////#include <iostream>
//////////////////#include <string>
//////////////////
//////////////////// 引擎类
//////////////////class Engine {
//////////////////private:
//////////////////    std::string type;
//////////////////
//////////////////public:
//////////////////    Engine(const std::string& type) : type(type) {}
//////////////////
//////////////////    void start() const {
//////////////////        std::cout << "Engine type: " << type << ", Engine started." << std::endl;
//////////////////    }
//////////////////};
//////////////////
//////////////////// 车轮类
//////////////////class Wheel {
//////////////////private:
//////////////////    int size;
//////////////////
//////////////////public:
//////////////////    Wheel(int size) : size(size) {}
//////////////////
//////////////////    void rotate() const {
//////////////////        std::cout << "Wheel with size " << size << " inches is rotating." << std::endl;
//////////////////    }
//////////////////};
//////////////////
//////////////////// 汽车类，组合了引擎和车轮
//////////////////class Car {
//////////////////private:
//////////////////    std::string model;
//////////////////    Engine engine; // 组合引擎类
//////////////////    Wheel wheel;   // 组合车轮类
//////////////////
//////////////////public:
//////////////////    Car(const std::string& model, const Engine& engine, const Wheel& wheel)
//////////////////        : model(model), engine(engine), wheel(wheel) {}
//////////////////
//////////////////    void startEngine() {
//////////////////        engine.start();
//////////////////    }
//////////////////
//////////////////    void rotateWheel() {
//////////////////        wheel.rotate();
//////////////////    }
//////////////////
//////////////////    void displayInfo() const {
//////////////////        std::cout << "Car model: " << model << std::endl;
//////////////////        engine.start(); // 演示引擎启动
//////////////////        wheel.rotate(); // 演示车轮旋转
//////////////////    }
//////////////////};
//////////////////
//////////////////int main() {
//////////////////    // 创建引擎和车轮实例
//////////////////    Engine myEngine("V8");
//////////////////    Wheel myWheel(18);
//////////////////
//////////////////    // 使用引擎和车轮创建汽车实例
//////////////////    Car myCar("2024 Sedan", myEngine, myWheel);
//////////////////
//////////////////    // 显示汽车信息
//////////////////    myCar.displayInfo();
//////////////////
//////////////////    return 0;
//////////////////}
////////////////
////////////////#include <iostream>
////////////////
////////////////class Point {
////////////////public:
////////////////    int x, y;
////////////////
////////////////    // 构造函数
////////////////    Point(int x = 0, int y = 0) : x(x), y(y) {}
////////////////
////////////////    // 重载 + 运算符作为成员函数
////////////////    Point operator+(const Point& rhs) const {
////////////////        return Point(x + rhs.x, y + rhs.y);
////////////////    }
////////////////
////////////////    // 重载 << 运算符作为友元函数
////////////////    friend std::ostream& operator<<(std::ostream& os, const Point& point);
////////////////};
////////////////
////////////////// 友元函数的定义
////////////////std::ostream& operator<<(std::ostream& os, const Point& point) {
////////////////    os << "(" << point.x << ", " << point.y << ")";
////////////////    return os;
////////////////}
////////////////
////////////////int main() {
////////////////    Point p1(1, 2);
////////////////    Point p2(3, 4);
////////////////    Point p3 = p1 + p2; // 使用重载的 + 运算符
////////////////
////////////////    // 使用重载的 << 运算符
////////////////    std::cout << "p1: " << p1 << ", p2: " << p2 << ", p3: " << p3 << std::endl;
////////////////
////////////////    return 0;
////////////////}
//////////////
//////////////
//////////////#include <iostream>
//////////////
//////////////// 函数原型声明
//////////////void print(const std::string& message);
//////////////void print(int number);
//////////////void print(double value, int precision);
//////////////
//////////////// 函数定义
//////////////void print(const std::string& message) {
//////////////    std::cout << "String: " << message << std::endl;
//////////////}
//////////////
//////////////void print(int number) {
//////////////    std::cout << "Integer: " << number << std::endl;
//////////////}
//////////////
//////////////void print(double value, int precision) {
//////////////    std::cout << "Double with precision " << precision
//////////////        << ": " << std::fixed << std::setprecision(precision) << value << std::endl;
//////////////}
//////////////
//////////////int main() {
//////////////    // 调用重载的print函数
//////////////    print("Hello, World!");      // 调用第一个print函数
//////////////    print(123);                  // 调用第二个print函数
//////////////    print(3.1415926, 3);        // 调用第三个print函数
//////////////
//////////////    return 0;
//////////////}
////////////
////////////
////////////#include <iostream>
////////////#include <string>
////////////#include <iomanip> // 包含setprecision和ios_base
////////////
////////////// 函数原型声明
////////////void print(const std::string& message);
////////////void print(int number);
////////////void print(double value, int precision);
////////////
////////////// 函数定义
////////////void print(const std::string& message) {
////////////    std::cout << "String: " << message << std::endl;
////////////}
////////////
////////////void print(int number) {
////////////    std::cout << "Integer: " << number << std::endl;
////////////}
////////////
////////////void print(double value, int precision) {
////////////    std::cout << "Double with precision " << precision << ": ";
////////////    std::cout << std::fixed << std::setprecision(precision) << value << std::endl;
////////////}
////////////
////////////int main() {
////////////    // 调用重载的print函数
////////////    print("Hello, World!");      // 调用第一个print函数
////////////    print(123);                  // 调用第二个print函数
////////////    print(3.1415926, 3);       a // 调用第三个print函数
////////////
////////////    return 0;
////////////}
//////////
//////////#include <iostream>
//////////#include <string>
//////////
//////////// 定义一个简单的Person类
//////////class Person {
//////////private:
//////////    std::string name;
//////////    int age;
//////////
//////////public:
//////////    // 构造函数，用于初始化Person对象
//////////    Person(const std::string& name, int age) : name(name), age(age) {
//////////        std::cout << "Person created: " << name << ", Age: " << age << std::endl;
//////////    }
//////////
//////////    // 成员函数，用于显示个人信息
//////////    void displayInfo() const {
//////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
//////////    }
//////////};
//////////
//////////int main() {
//////////    // 使用构造函数创建Person对象
//////////    Person person1("Alice", 30);
//////////    person1.displayInfo(); // 输出: Name: Alice, Age: 30
//////////
//////////    // 创建另一个Person对象
//////////    Person person2("Bob", 24);
//////////    person2.displayInfo(); // 输出: Name: Bob, Age: 24
//////////
//////////    return 0;
//////////}
////////
////////
////////#include <iostream>
////////#include <string>
////////
////////class Person {
////////private:
////////    std::string name;
////////    int age;
////////    static int instanceCount; // 跟踪类的实例数量
////////
////////public:
////////    // 默认构造函数
////////    Person(const std::string& name, int age) : name(name), age(age) {
////////        instanceCount++; // 每次创建对象时，实例计数增加
////////        std::cout << "Person created: " << name << ", Age: " << age << std::endl;
////////    }
////////
////////    // 析构函数
////////    ~Person() {
////////        instanceCount--; // 对象销毁时，实例计数减少
////////        std::cout << "Person destroyed: " << name << ". Remaining instances: " << instanceCount << std::endl;
////////    }
////////
////////    // 成员函数，用于显示个人信息
////////    void displayInfo() const {
////////        std::cout << "Name: " << name << ", Age: " << age << std::endl;
////////    }
////////
////////    // 获取实例数量的静态成员函数
////////    static int getInstanceCount() {
////////        return instanceCount;
////////    }
////////};
////////
////////// 初始化静态成员变量
////////int Person::instanceCount = 0;
////////
////////int main() {
////////    {
////////        Person person1("Alice", 30);
////////        person1.displayInfo();
////////
////////        // 可以在这里访问析构函数输出，当person1超出作用域时
////////    } // person1的析构函数在这里被调用
////////
////////    std::cout << "Current instance count: " << Person::getInstanceCount() << std::endl;
////////
////////    {
////////        Person person2("Bob", 24);
////////        person2.displayInfo();
////////    } // person2的析构函数在这里被调用
////////
////////    std::cout << "Current instance count: " << Person::getInstanceCount() << std::endl;
////////
////////    return 0;
////////}
//////
//////
//////#include <iostream>
//////#include <string>
//////
//////// 基类：Animal
//////class Animal {
//////protected:
//////    std::string name;
//////
//////public:
//////    // 构造函数
//////    Animal(std::string name) : name(name) {}
//////
//////    // 虚析构函数
//////    virtual ~Animal() {
//////        std::cout << name << " is being destroyed." << std::endl;
//////    }
//////
//////    // 虚函数，可以在派生类中重写
//////    virtual void speak() const {
//////        std::cout << name << " makes a sound." << std::endl;
//////    }
//////};
//////
//////// 派生类：Dog
//////class Dog : public Animal {
//////public:
//////    // 构造函数
//////    Dog(std::string name) : Animal(name) {}
//////
//////    // 重写基类的speak函数
//////    void speak() const override {
//////        std::cout << name << " barks." << std::endl;
//////    }
//////};
//////
//////// 另一个派生类：Cat
//////class Cat : public Animal {
//////public:
//////    // 构造函数
//////    Cat(std::string name) : Animal(name) {}
//////
//////    // 重写基类的speak函数
//////    void speak() const override {
//////        std::cout << name << " meows." << std::endl;
//////    }
//////};
//////
//////int main() {
//////    Animal* animals[2]; // 基类指针数组
//////
//////    // 创建派生类对象
//////    animals[0] = new Dog("Buddy");
//////    animals[1] = new Cat("Whiskers");
//////
//////    // 使用基类指针调用派生类函数
//////    for (int i = 0; i < 2; ++i) {
//////        animals[i]->speak(); // 多态性
//////    }
//////
//////    // 释放内存
//////    for (int i = 0; i < 2; ++i) {
//////        delete animals[i];
//////    }
//////
//////    return 0;
//////}
////
////
////
////#include <iostream>
////#include <vector>
////#include <memory>
////
////// 基类 Shape
////class Shape {
////public:
////    // 虚析构函数
////    virtual ~Shape() {}
////
////    // 纯虚函数，用于计算面积
////    virtual double area() const = 0;
////};
////
////// 派生类 Circle
////class Circle : public Shape {
////private:
////    double radius;
////
////public:
////    Circle(double r) : radius(r) {}
////
////    // 重写计算面积的函数
////    double area() const override {
////        return 3.14159 * radius * radius;
////    }
////};
////
////// 派生类 Rectangle
////class Rectangle : public Shape {
////private:
////    double width;
////    double height;
////
////public:
////    Rectangle(double w, double h) : width(w), height(h) {}
////
////    // 重写计算面积的函数
////    double area() const override {
////        return width * height;
////    }
////};
////
////// 函数，接受 Shape 指针的向量，并计算所有形状的总面积
////void calculateTotalArea(const std::vector<std::shared_ptr<Shape>>& shapes) {
////    double totalArea = 0.0;
////    for (const auto& shape : shapes) {
////        totalArea += shape->area(); // 多态调用
////    }
////    std::cout << "Total area of all shapes: " << totalArea << std::endl;
////}
////
////int main() {
////    // 创建形状的智能指针列表
////    std::vector<std::shared_ptr<Shape>> shapes;
////    shapes.push_back(std::make_shared<Circle>(5.0));
////    shapes.push_back(std::make_shared<Rectangle>(4.0, 5.0));
////
////    // 计算总面积
////    calculateTotalArea(shapes);
////
////    return 0;
////}
//
//#define _CRT_SECURE_NO_WARNINGS
//#define  CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//typedef struct student  //定义结构体
//{
//    char name[20]; //姓名
//    char num[15];  //学号
//    char sex[10];  //性别
//    char from[20]; //籍贯
//    char political[10]; //政治面貌
//    char phone[15];  //手机号
//    char QQ[15];   //QQ号
//    char dorm[10];  //宿舍
//    struct student* next; //结构体指针
//}stu;
//stu* head;
//
//void print() //主菜单
//{
//    system("cls");
//    printf("\n\n\n");
//    printf("  ☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
//    printf("  ***********************************************************\n");
//    printf("  \t\t\t班级通讯录管理系统\n");
//    printf("\n");
//    printf("  \t\t1. 输入数据");
//    printf("\t\t2. 显示数据\n");
//    printf("  \t\t3. 插入数据");
//    printf("\t\t4. 删除数据\n");
//    printf("  \t\t5. 查看数据");
//    printf("\t\t6. 修改数据\n");
//    printf("  \t\t7. 保存数据");
//    printf("\t\t8. 返回主菜单\n");
//    printf("  ***********************************************************\n");
//    printf("  ~~~~~退~~~~~~~~~~出~~~~~~~~~~请~~~~~~~~~~按~~~~~~~~~~9~~~~~\n");
//    printf("  -----------------------------------------------------------\n\n");
//}
//
//
//void input(stu* p1) //输入相关数据
//{
//    printf("姓名:");
//    scanf_s("%s", &p1->name);
//    printf("学号:");
//    scanf_s("%s", &p1->num);
//    printf("性别:");
//    scanf_s("%s", &p1->sex);
//    printf("籍贯:");
//    scanf_s("%s", &p1->from);
//    printf("政治面貌:");
//    scanf_s("%s", &p1->political);
//    printf("手机号:");
//    scanf_s("%s", &p1->phone);
//    printf("QQ号:");
//    scanf_s("%s", &p1->QQ);
//    printf("宿舍:");
//    scanf_s("%s", &p1->dorm);
//}
//
//
//stu* inputdata()  //数据输入的函数
//{
//    stu* p1, * p2 = nullptr;
//    //stu* p2 = NULL; // 初始化为 NULL，表示没有指向任何对象
//    int i = 1;
//    p1 = (stu*)malloc(sizeof(stu));
//    if (p1 != NULL)
//    {
//        head = p1;
//        printf("\n\t\t\t☆☆☆输入数据☆☆☆\n");
//        printf("------------------------------------------------------------------\n");
//        printf("在姓名处输入“ok”代表输入数据结束\n");
//        while (i)
//        {
//            printf("姓名:");
//            scanf_s("%19s", &p1->name);
//            if (strcmp(p1->name, "ok") == 0)
//            {
//                printf("\n输入完毕!\n");
//                printf("========================================================================\n");
//                i = 0;
//
//                p2->next = NULL;
//                free(p1);
//                p1 = p2;
//            }
//            else
//            {
//                printf("学号:");
//                scanf_s("%19s", &p1->num);
//                printf("性别:");
//                scanf_s("%19s", &p1->sex);
//                printf("籍贯:");
//                scanf_s("%19s", &p1->from);
//                printf("政治面貌:");
//                scanf_s("%19s", &p1->political);
//                printf("手机号:");
//                scanf_s("%19s", &p1->phone);
//                printf("QQ号:");
//                scanf_s("%19s", &p1->QQ);
//                printf("宿舍:");
//                scanf_s("%19s", &p1->dorm);
//                printf("=====================================\n");
//                p2 = p1;
//                p1 = (stu*)malloc(sizeof(stu));
//                if (p1 != NULL)
//                {
//                    p2->next = p1;
//                }
//            }
//        }
//        return(p1->next);
//    }
//}
//
//
//stu* lookdata(stu* p1)  //查看数据的函数
//{
//    printf("\n\t\t\t☆☆☆显示数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    while (p1 != NULL)
//    {
//        printf("姓名:%s\n", p1->name);
//        printf("学号:%s\t", p1->num);
//        printf("性别:%s\t", p1->sex);
//        printf("籍贯:%s\t", p1->from);
//        printf("政治面貌:%s\t", p1->political);
//        printf("手机号:%s\t", p1->phone);
//        printf("QQ号:%s\t", p1->QQ);
//        printf("宿舍:%s\n", p1->dorm);
//        printf("======================================================================\n");
//        p1 = p1->next;
//    }
//    return p1;
//}
//
//
//void insert()  //插入数据
//{
//    int i = 0;
//    char named[20];
//    stu* p1, * p2 = nullptr, * p3;
//    p1 = head;
//    p3 = (stu*)malloc(sizeof(stu));
//    p3->next = NULL;
//    printf("\n\t\t\t☆☆☆插入数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入插入者的资料:\n");
//    input(p3);
//    printf("\n插入选项\n");
//    printf("1.首位置插入\t2.尾位置插入\t3.前插\n");
//    printf("请输入你的选择:");
//    scanf_s("%19s", &p1->num);
//    ("%d", &i);
//    switch (i)
//    {
//    case 1:p3->next = p1;
//        head = p3;
//        break;
//    case 2:while (p1->next != NULL)
//    {
//        p2 = p1;
//        p1 = p1->next;
//    }
//          p1->next = p3;
//          break;
//    case 3:printf("请输入姓名（前插）:");
//        scanf_s("%19s", named);
//        while (strcmp(named, p1->name) != 0)
//        {
//            p2 = p1;
//            p1 = p1->next;
//        }
//        p2->next = p3;
//        p3->next = p1;
//        break;
//    }
//    printf("插入成功!\n");
//    printf("======================================================================\n");
//    return;
//}
//
//void deleted()   //删除数据
//{
//    stu* p1, * p2 = nullptr;
//    char Name[20]; //想要删除的人的姓名
//    printf("\n\t\t\t☆☆☆删除数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入要删除的姓名:");
//    scanf_s("%19s", Name);
//    p1 = head;
//    if (head == NULL)
//    {
//        printf("内存空空神马都没有!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    if (strcmp(Name, p1->name) == 0)
//    {
//        head = p1->next;
//        printf("删除成功!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    while (p1 != NULL && (strcmp(Name, p1->name) != 0))
//    {
//        p2 = p1;
//        p1 = p1->next;
//    }
//    if (p1 == NULL)
//    {
//        printf("此人不存在!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    if (p1->next != NULL)
//    {
//        p1 = p1->next;
//        p2->next = p1;
//        printf("删除成功!\n");
//        printf("======================================================================\n");
//        return;
//    }
//    else
//    {
//        p2->next = NULL;
//        printf("删除成功!\n");
//        printf("======================================================================\n");
//        return;
//    }
//}
//
//
//int find(stu* p2)  //通过姓名查找查看数据的函数
//{
//    char name[20];
//    int b = 0;
//    int nume;
//    printf("\n\t\t\t☆☆☆查看数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入您想查找人的姓名:");
//    scanf_s("%19s", name, (unsigned)_countof(name)); // 正确：指定缓冲区大小为 name 数组的大小
//    while (p2 != NULL)
//    {
//        if (strcmp(name, p2->name) == 0)
//        {
//            printf("你要找到的数据\n");
//            printf("姓名:%s\n", p2->name);
//            printf("学号:%s\t", p2->num);
//            printf("性别:%s\t", p2->sex);
//            printf("籍贯:%s\t", p2->from);
//            printf("政治面貌:%s\t", p2->political);
//            printf("手机号:%s\t", p2->phone);
//            printf("QQ号:%s\t", p2->QQ);
//            printf("宿舍:%s\n", p2->dorm);
//            printf("======================================================================\n");
//            b = 1;
//        }
//        p2 = p2->next;
//    }
//    if (b == 0)
//    {
//        printf("\n您要查找的人不存在!\n");
//        return 0;
//    }
//}
//
//
//int update(stu* p2) //通过姓名查找修改数据
//{
//    char name[20];
//    int b = 0, i;
//    printf("\n\t\t\t☆☆☆修改数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("请输入将要修改人的姓名:");
//    scanf_s("%19s", name);
//    while (p2 != NULL)
//    {
//        if (strcmp(name, p2->name) == 0)
//        {
//            printf("该同学的基本信息\n");
//            printf("姓名:%s\n", p2->name);
//            printf("学号:%s\t", p2->num);
//            printf("性别:%s\t", p2->sex);
//            printf("籍贯:%s\t", p2->from);
//            printf("政治面貌:%s\t", p2->political);
//            printf("手机号:%s\t", p2->phone);
//            printf("QQ号:%s\t", p2->QQ);
//            printf("宿舍:%s\n", p2->dorm);
//            printf("\n请选择要修改的信息\n");
//            printf("\t1.姓名\t2.学号\t3.性别\t4.籍贯\n\t5.政治面貌\t6.手机号\t7.QQ\t8.宿舍\n");
//            printf("\n您的选择是(1~8):");
//            scanf_s("%19d", &i);
//            printf("请输入修改之后的内容\n");
//            switch (i)
//            {
//            case 1:printf("姓名:");
//                scanf_s("%19s", &p2->name);
//                break;
//            case 2:printf("学号:");
//                scanf_s("%19s", &p2->num);
//                break;
//            case 3:printf("性别:");
//                scanf_s("%19s", &p2->sex);
//                break;
//            case 4:printf("籍贯:");
//                scanf_s("%19s", &p2->from);
//                break;
//            case 5:printf("政治面貌:");
//                scanf_s("%19s", &p2->political);
//                break;
//            case 6:printf("手机号:");
//                scanf_s("%19s", &p2->phone);
//                break;
//            case 7:printf("QQ:");
//                scanf_s("%19s", &p2->QQ);
//                break;
//            case 8:printf("宿舍:");
//                scanf_s("%19d", &p2->dorm);
//                break;
//            }
//            printf("\n修改成功!\n");
//            printf("=========================================================================\n");
//            b = 1;
//        }
//        p2 = p2->next;
//    }
//    if (b == 0)
//    {
//        printf("没有找到该人的资料!\n");
//        return 0;
//    }
//}
//
//
//int save(stu* p2) //保存数据
//{
//    FILE* fp;
//    char file[15];
//    printf("\n\t\t\t☆☆☆保存数据☆☆☆\n");
//    printf("----------------------------------------------------------------------\n");
//    printf("输入文件名:");
//    scanf_s("%19s", file, (unsigned)_countof(file)); // 正确：指定缓冲区大小为 name 数组的大小
//    if ((fp = fopen(file, "w")) == NULL)
//    {
//        printf("cannot open this file\n");
//        exit(0);
//    }
//    fprintf(fp, "姓名\t学号\t性别\t籍贯\t政治面貌\t手机号\tQQ号\t宿舍\n");
//    while (p2 != NULL)
//    {
//        fprintf(fp, "%s\t", p2->name);
//        fprintf(fp, "%s\t", p2->num);
//        fprintf(fp, "%s\t", p2->sex);
//        fprintf(fp, "%s\t", p2->from);
//        fprintf(fp, "%s\t", p2->political);
//        fprintf(fp, "%s\t", p2->phone);
//        fprintf(fp, "%s\t", p2->QQ);
//        fprintf(fp, "%s\n", p2->dorm);
//        p2 = p2->next;
//    }
//    printf("\n保存成功!\n");
//    printf("======================================================================\n");
//    fclose(fp);
//}
//
//
//void screen()
//{
//    int i;
//    char s[251] = { "欢迎使用由可以换成自己名字制作班级通讯录管理系统，\n\n\t\t\t本系统用于通讯录管理----排序，打印\n\n\n\t\tWelcome to use produced by ZM class address book\n\n\t\t management system,sorting,printing" };
//
//    printf("\n================================================================================\n");
//    printf("\n\n\n\t\t\t");
//    for (i = 0; s[i] != NULL; i++)
//    {
//        Sleep(30);
//        printf("%c", s[i]);
//    }
//    printf("\n\n\n\n\n\n\n\n\t\t ~ Hi~ o(*￣▽￣*)ブ~ ~ ~祝您旅途愉快~ ~\n");
//    printf("================================================================================\n");
//
//}
//
//
//int main()
//{
//    int i;
//    system("color 4e");
//    screen();
//    Sleep(3000);
//    print();
//    while (1)
//    {
//        printf("请输入你的选择(1~9):");
//    loop:scanf_s("%19d", &i);
//        if (i < 1 || i>9)
//        {
//            printf("输入有误,请在1~9中进行选择:");
//            goto loop;
//        }
//        switch (i)
//        {
//        case 1:
//            inputdata();
//            break;
//        case 2:
//            lookdata(head);
//            break;
//        case 3:
//            insert();
//            break;
//        case 4:
//            deleted();
//            break;
//        case 5:
//            find(head);
//            break;
//        case 6:
//            update(head);
//            break;
//        case 7:
//            save(head);
//            break;
//        case 8:
//            print();
//            break;
//        case 9:
//            exit(1);
//            break;
//        }
//    }
//}
//}


//#include<iostream>
// using namespace std;
//
// class Stack
//{
// public:
//	 // 成员函数
//		 void Init(int n = 4);
//private:
//	// 成员变量
//	int* array;
//	size_t capacity;
//	size_t top;
// };
// // 声明和定义分离，需要指定类域
// void Stack::Init(int n)
// {
//	 array = (int*)malloc(sizeof(int) * n);
//	 if (nullptr == array)
//	 {
//		 perror("malloc申请空间失败");
//		 return;
//	 }
//	 capacity = n;
//	 top = 0;
// }

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	// 这⾥只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};

//int main()
//{
//	// Date类实例化出对象d1和d2
//	Date d1;
//	Date d2;
//	d1.Init(2024, 3, 31);
//	d1.Print();
//	d2.Init(2024, 7, 5);
//	d2.Print();
//	return 0;
//}

//void Init(int year, int month, int day)
//{
//	_year = year;
//	this->_month = month;
//	this->_day = day;
//}