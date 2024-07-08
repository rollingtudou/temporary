//#include <iostream>
//using namespace std;
//
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Func();
//	Func(4);
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//namespace Kevin
//{
//	namespace star
//	{
//		string star = "Messi";
//	}
//
//	namespace sport
//	{
//		string sport = "Football";
//	}
//}
//
//// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//} 
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//} 
//// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//} 
//
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//} 
//
//// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//} 
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
//int main()
//{
//
//
//	cout << Kevin::sport::sport << Kevin::star::star << endl;
//
//	return 0;
//}
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//
//void Func2(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}


//void ListPushBack(LTNode** phead, int x)
//void ListPushBack(LTNode*& phead, int x)
//void ListPushBack(PNode& phead, int x)
//{
//	PNode newnode = (PNode)malloc(sizeof(LTNode));
//	newnode->val = x;
//	newnode->next = NULL;
//	if (phead == NULL)
//	{
//		phead = newnode;
//	} 
//	else
//	{
//		//...
//	}
//}