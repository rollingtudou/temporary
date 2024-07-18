//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//} 
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//} 
//
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}

//template<typename T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}


//T Add(const T& left, const T& right)
//{
//	return left + right;
//}



//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//} 
//
//// 通用加法函数
//template<class T1, class T2>
//T1 Add(T1 left, T2 right)
//{
//	return left + right;
//}
/////////////////////////////////////////////////////////////

//template<class T1, class T2, ..., class Tn>
//class 类模版名
//{
//	// 类成员定义
//};


// 类模版
template<typename T>
class Stack
{
	public :
	Stack(size_t capacity = 4)
	{
		_array = new T[capacity];
		_capacity = capacity;
		_size = 0;
	} 
	void Push(const T& data);
private:
	T* _array;
	size_t _capacity;
	size_t _size;
};



template<typename T>
class Stack
{
public:
	Stack(int n = 4)
		:_array(new T[n])
		,_size(0)
		,_capacity(n)
	{}

	~Stack()
	{
		delete[] _array;
		_array = nullptr;
		_size = _capacity = 0;
	}

	void Push(const T& x);

private:
	T* _array;
	size_t _capacity;
	size_t _size;
};

template<class T>
void Stack<T>::Push(const T& x)
{
	if (_size == _capacity)
	{
		T* tmp = new T[_capacity * 2];
		memcpy(tmp, _array, sizeof(T) * _size);
		delete[] _array;

		_array = tmp;
		_capacity *= 2;
	}

	_array[_size++] = x;
}

// 17:20
int main()
{
	// 类模板都是显示实例化
	Stack<int> st1; // int
	st1.Push(1);
	st1.Push(2);
	st1.Push(3);

	Stack<double> st2; // double
	st2.Push(1.1);
	st2.Push(1.1);
	st2.Push(1.1);

	Stack<double>* pst = new Stack<double>;
	//...
	delete pst;

	return 0;
}

class string
{
public:
	char& operator[](size_t i)
	{
      assert(i < _size);
		return _str[i];
	}
private:
	char* _str;
	size_t _size;
	size_t _capacity;
};

int main()
{
	string s1;
	string s2("hello world");
	string s3(s2);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	//cin >> s1;
	//cout << s1 << endl;

	string s4(s2, 6, 15);
	cout << s4 << endl;

	string s5(s2, 6);
	cout << s5 << endl;

	string s6("hello world", 5);
	cout << s6 << endl;

	string s7(10, 'X');
	cout << s7 << endl;

	s6[10];
	s6[0] = 'x';
	cout << s6 << endl;

	return 0;
}