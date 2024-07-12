#include<iostream>
using namespace std;
typedef int STDataType;
class Stack
{
	public :
	Stack(int n = 4)
	{
		_a = (STDataType*)malloc(sizeof(STDataType) * n);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败");
			return;
		} 
		_capacity = n;
		_top = 0;
	} 
		Stack(const Stack& st)
	{
		
			// 需要对_a指向资源创建同样⼤的资源再拷⻉值
			_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败!!!");
			return;
		} 
			memcpy(_a, st._a, sizeof(STDataType) * st._top);
			_top = st._top;
			_capacity = st._capacity;
	}
	void Push(STDataType x)
	{
		if (_top == _capacity)
		{
			int newcapacity = _capacity * 2;
			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
				sizeof(STDataType));
			if (tmp == NULL)
			{
				perror("realloc fail");
				return;
			} 
				_a = tmp;
			_capacity = newcapacity;
		} 
			_a[_top++] = x;
	} 
		~Stack()
	{
		cout << "~Stack()" << endl;
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}
private:
	STDataType* _a;
	size_t _capacity;
	size_t _top;
};
// 两个Stack实现队列
class MyQueue
{
	
		public :
private:
	Stack pushst;
	Stack popst;
};
int main()
{
	Stack st1;
	st1.Push(1);
	st1.Push(2);
	// Stack不显⽰实现拷⻉构造，⽤⾃动⽣成的拷⻉构造完成浅拷⻉
	// 会导致st1和st2⾥⾯的_a指针指向同⼀块资源，析构时会析构两次，程序崩溃
	Stack st2 = st1;
	MyQueue mq1;
	// MyQueue⾃动⽣成的拷⻉构造，会⾃动调⽤Stack拷⻉构造完成pushst/popst
	// 的拷⻉，只要Stack拷⻉构造⾃⼰实现了深拷⻉，他就没问题
	MyQueue mq2 = mq1;
	return 0;
}