//class A
//{
//public :
//	A()
//	{
//		++_scount;
//	} 
//
//	A(const A& t)
//	{
//		++_scount;
//	} 
//	
//	~A()
//	{
//		--_scount;
//	}
//
//	static int GetACount()
//	{
//		return _scount;
//	}
//
//private:
//	// 类⾥⾯声明
//	static int _scount;
//};
//// 类外⾯初始化
//i
// 
// 
// nt A::_scount = 0;




//class A
//{ 
//private:
//	static int _k;
//	int _h = 1;
//
//public:
//	class B // B默认就是A的友元
//	{ 
//		public:
//			void foo(const A& a)
//			{
//				cout << _k << endl; //OK
//				cout << a._h << endl; //OK
//			}
//	};
//};
//int A::_k = 1;
//
//int main()
//{
//	cout << sizeof(A) << endl;
//
//	A::B b;
//
//	A aa;
//	b.foo(aa);
//
//	return 0;
//}

//<int>