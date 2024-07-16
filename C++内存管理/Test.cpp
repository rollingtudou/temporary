﻿#include<iostream>
using namespace std;

class A
{
public:
	A(int a1 = 0, int a2 = 0)
		:_a1(a1)
		, _a2(a2)
	{
		cout << "A(int a1 = 0, int a2 = 0)" << endl;
	}

	A(const A& aa)
		:_a1(aa._a1)
	{
		cout << "A(const A& aa)" << endl;
	}

	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a1 = aa._a1;
		}
		return *this;
	}

	~A()
	{
		//delete _ptr;
		cout << "~A()" << endl;
	}

	void Print()
	{
		cout << "A::Print->" << _a1 << endl;
	}

	A& operator++()
	{
		_a1 += 100;

		return *this;
	}
private:
	int _a1 = 1;
	int _a2 = 1;
};

//int main()
//{
//	A aa1 = 1;
//	const A& aa2 = 1;
//
//	return 0;
//}

//void f1(A aa)
//{}
//
//int main()
//{
//	A aa1(1);
//	f1(aa1);
//	cout << endl;
//
//	// Ż
//	f1(A(1));
//	cout << endl;
//
//	// Ż
//	f1(1);
//	cout << endl;
// 
//	return 0;
//}

//A f2()
//{
//	A aa(1);
//	++aa;
//
//	return aa;
//}
//
//int main()
//{
//	f2().Print();
//	cout <<"*********"<< endl << endl;
//
//	return 0;
//}

//A f2()
//{
//	A aa(1);
//	++aa;
//
//	return aa;
//}
//
//int main()
//{
//	A ret = f2();
//	ret.Print();
//	cout << "*********" << endl << endl;
//
//	return 0;
//}

//A f2()
//{
//	A aa(1);
//	++aa;
//	cout << "##########" << endl;
//	return aa;
//}
//
//int main()
//{
//	A ret;
//	ret = f2();
//	ret.Print();
//	cout << "*********" << endl << endl;
//
//	return 0;
//}

//int main()
//{
//	int* p1 = new int;
//	int* p2 = new int[10];
//
//	delete p1;
//	delete[] p2;
//
//	// +ʼ
	//int* p3 = new int(0);
	//int* p4 = new int[10]{ 0 };
	//int* p5 = new int[10]{1,2,3,4,5};
//
//	delete p3;
//	delete[] p4;
//	delete[] p5;
//
//	return 0;
//}

struct ListNode
{
	int val;
	ListNode* next;

	ListNode(int x)
		:val(x)
		, next(nullptr)
	{}
};

//int main()
//{
//	A* p1 = new A;
//	A* p2 = new A(1);
//
//	delete p1;
//	delete p2;
//
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(1);
//	ListNode* n3 = new ListNode(1);
//	ListNode* n4 = new ListNode(1);
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//
//	return 0;
//}
//
//int main()
//{
//	A* p1 = new A(1);
//	A* p2 = new A(2,2);
//
//	A aa1(1, 1);
//	A aa2(2, 2);
//	A aa3(3, 3);
//	A* p3 = new A[3]{aa1, aa2, aa3};
//
//	A* p4 = new A[3]{ A(1,1), A(2,2), A(3,3)};
//
//	//A aa1 = { 1, 1 };
//	A* p5 = new A[3]{ {1,1}, {2,2}, {3,3} };
//
//	return 0;
//}

///*
//operator new：该函数实际通过malloc来申请空间，当malloc申请空间成功时直接返回；申请空间
//失败，尝试执行空 间不足应对措施，如果改应对措施用户设置了，则继续申请，否
//则抛异常。
//*/
//void* __CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
//{
//	// try to allocate size bytes
//	void* p;
//	while ((p = malloc(size)) == 0)
//		if (_callnewh(size) == 0)
//		{
//			// report no memory
//			// 如果申请内存失败了，这里会抛出bad_alloc 类型异常
//			static const std::bad_alloc nomem;
//			_RAISE(nomem);
//		}
//
//	return (p);
//} 
///*
//operator delete: 该函数最终是通过free来释放空间的
//*/
//void operator delete(void* pUserData)
//{
//	_CrtMemBlockHeader* pHead;
//	RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//	if (pUserData == NULL)
//		return;
//	_mlock(_HEAP_LOCK); /* block other threads */
//	__TRY
//		/* get a pointer to memory block header */
//		pHead = pHdr(pUserData);
//	/* verify block type */
//	_ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
//	_free_dbg(pUserData, pHead->nBlockUse);
//	__FINALLY
//		_munlock(_HEAP_LOCK); /* release other threads */
//	__END_TRY_FINALLY
//		return;
//} 
///*
//free的实现
//*/
//#define free(p) _free_dbg(p, _NORMAL_BLOCK)







// 1M Լ 100wByte
// 1G Լ 10Byte
//int main()
//{
//	try
//	{
//		// throw try/catch 
//		void* p1 = new char[1024 * 1024 * 1024];
//		cout << p1 << endl;
//
//		void* p2 = new char[1024 * 1024 * 1024];
//		cout << p2 << endl;
//
//		void* p3 = new char[1024 * 1024 * 1024];
//		cout << p3 << endl;
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

// 1G = 1024MB = 1024*1024KB = 1024*1024*1024Byte

//void func()
//{
//	// throw try/catch 
//	int n = 1;
//	while (1)
//	{
//		void* p1 = new char[1024 * 1024];
//		cout << p1 << "->"<< n<<endl;
//		++n;
//	}
//}
//
//int main()
//{
//	try
//	{
//		func();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	A* p1 = new A(1);
//	delete p1;
//
//	A* p2 = new A[5];
//	delete[] p2;
//
//	return 0;
//}

//int main()
//{
//	int* p1 = new int;
//	free(p1);
//	//delete p1;
//
//	A* p2 = new A;
//	//free(p2);
//	delete p2;
//
//	return 0;
//}

class B
{
public:
	~B()
	{
		cout << "~B()" << endl;
	}
private:
	int _b1 = 2;
	int _b2 = 2;
};

int main()
{
	//int* p1 = new int[10]; // -> malloc
	//delete p1;             // -> free
	//free(p1);

	B* p2 = new B[10];
	delete p2;

	//A* p3 = new A[10];
	//delete[] p3;

	return 0;
}