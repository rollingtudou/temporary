#pragma once
#include<iostream>
using namespace std;

namespace bee
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		vector() = default;

		vector(const vector<T>& v)
		{
			reserve(v.size());

			for (auto e : v)
			{
				push_back(e);
			}
		}

		vector(int n, const T& val = T())
		{
			reserve(n);
			for (int i = 0; i < n; ++i)
			{
				push_back(val);
			}
		}

		void clear()
		{
			_finish = _start;
		}

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish.v._finish);
			std::swap(_end_of_storage, v._end_of_storage);
		}

		vector<T>& operator=(vector<T> v)
		{
			// 传参没有引用，拷贝构造了一份新v，所以交换后不会影响
			swap(_start, v._start);

			return *this;
		}

		~vector()
		{
			if (_start != nullptr)
			{
				delete[] _start;

				_start = _finish = _end_of_storage = nullptr;
			}
		}

		iterator begin()
		{
			return _start;
		}

		// end() 返回指向向量最后一个元素之后位置的迭代器，即不包含任何元素的“空”位置
		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		size_t capacity()
		{
			return (_end_of_storage - _start);
		}

		size_t size()
		{
			return _finish - _start;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t old_size = _finish - _start;

				iterator tmp = new T[n];
				for (size_t i = 0; i < old_size; ++i)
				{
					tmp[i] = _start[i];
				}
				delete[] _start;

				_start = tmp;
				_finish = tmp + old_size;
				_end_of_storage = tmp + n;
			}
		}

		void resize(size_t n, T val = T())
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			else
			{
				reserve(n);
				while (_finish < _start + n)
				{
					*_finish = val;
					++_finish;
				}
			}
		}

		void push_back(const T& x)
		{
			if (_finish == _end_of_storage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}

			*_finish = x;
			_finish++;
		}

		void pop_back()
		{
			assert(_start < _finish);

			--_finish;
		}

		iterator insert(iterator pos, const T& x)
		{
			assert(_start <= pos < _finish);

			if (_start == _end_of_storage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}

			iterator end = _finish;
			while (end != pos)
			{
				*end = *(end - 1);
				--end;
			}

			*pos = x;
			++_finish;
		}

		void erase(iterator pos)
		{
			assert(pos >= _start);
			assert(pos < _finish);

			iterator end = pos;
			while (end < _finish - 1)
			{
				*end = *(end + 1);
				end++;
			}

			--_finish;
		}


		T& operator[](size_t i)
		{
			assert(i < size());

			return _start[i];
		}

		const T& operator[](size_t i) const
		{
			assert(i < size());

			return _start[i];
		}

	private:
		iterator _start = nullptr;

		// 最后一个有效元素后的迭代器
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;
	};


	template<class T>
	void print_vector(const vector<T>& v)
	{
		// 规定，没有实例化的类模板里面取东西，编译器不能区分这里const_iterator
		// 是类型还是静态成员变量
		//typename vector<T>::const_iterator it = v.begin();
		auto it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector7()
	{
		vector<string> v;
		v.push_back("11111111111111111111");
		v.push_back("11111111111111111111");
		v.push_back("11111111111111111111");
		v.push_back("11111111111111111111");
		print_vector(v);

		v.push_back("11111111111111111111");
		print_vector(v);
	}
}