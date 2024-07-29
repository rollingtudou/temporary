#pragma once
#include<assert.h>

namespace bit
{
	template<class T>
	struct list_node
	{
		T _data;
		list_node<T>* _next;
		list_node<T>* _prev;

		list_node(const T& data = T())
			:_data(data)
			, _next(nullptr)
			, _prev(nullptr)
		{}
	};

	template<class T, class Ref, class Ptr>
	struct list_iterator
	{
		typedef list_node<T> Node;
		typedef list_iterator<T, Ref, Ptr> Self;
		Node* _node;

		list_iterator(Node* node)
			:_node(node)
		{}

		Ref operator*()
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &_node->_data;
		}

		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		Self operator++(int)
		{
			Self tmp(*this);
			_node = _node->_next;

			return tmp;
		}

		Self& operator--(int)
		{
			Self tmp(*this);
			_node = _node->_prev;

			return tmp;
		}

		bool operator!=(const Self& s) const
		{
			return _node != s._node;
		}

		bool operator==(const Self& s) const
		{
			return _node == s._node;
		}
	};


	/*template<class T>
	struct list_const_iterator
	{
		typedef list_node<T> Node;
		typedef list_const_iterator<T> Self;
		Node* _node;

		list_const_iterator(Node* node)
			:_node(node)
		{}

		const T& operator*()
		{
			return _node->_data;
		}

		const T* operator->()
		{
			return &_node->_data;
		}

		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		Self operator++(int)
		{
			Self tmp(*this);
			_node = _node->_next;

			return tmp;
		}

		Self& operator--(int)
		{
			Self tmp(*this);
			_node = _node->_prev;

			return tmp;
		}

		bool operator!=(const Self& s) const
		{
			return _node != s._node;
		}

		bool operator==(const Self& s) const
		{
			return _node == s._node;
		}
	};*/

	template<class T>
	class list
	{
		typedef list_node<T> Node;
	public:
		/*typedef list_iterator<T> iterator;
		typedef list_const_iterator<T> const_iterator;*/

		typedef list_iterator<T, T&, T*> iterator;
		typedef list_iterator<T, const T&, const T*> const_iterator;

		iterator begin()
		{
			/*	iterator it(_head->_next);
				return it;*/
				//return iterator(_head->_next);
			return _head->_next;
		}

		iterator end()
		{
			return _head;
		}

		const_iterator begin() const
		{
			return _head->_next;
		}

		const_iterator end() const
		{
			return _head;
		}

		void empty_init()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			_size = 0;
		}

		list()
		{
			empty_init();
		}

		list(initializer_list<T> il)
		{
			empty_init();
			for (auto& e : il)
			{
				push_back(e);
			}
		}

		// lt2(lt1)
		list(const list<T>& lt)
		{
			empty_init();

			for (auto& e : lt)
			{
				push_back(e);
			}
		}

		// lt1 = lt3
		list<T>& operator=(list<T> lt)
		{
			swap(lt);
			return *this;
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		void clear()
		{
			auto it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		void swap(list<T>& lt)
		{
			std::swap(_head, lt._head);
			std::swap(_size, lt._size);
		}

		void push_back(const T& x)
		{
			/*Node* newnode = new Node(x);
			Node* tail = _head->_prev;

			tail->_next = newnode;
			newnode->_prev = tail;
			newnode->_next = _head;
			_head->_prev = newnode;

			++_size;*/

			insert(end(), x);
		}

		void push_front(const T& x)
		{
			insert(begin(), x);
		}

		iterator insert(iterator pos, const T& x)
		{
			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* newnode = new Node(x);

			// prev newnode cur
			newnode->_next = cur;
			cur->_prev = newnode;
			newnode->_prev = prev;
			prev->_next = newnode;

			++_size;

			return newnode;
		}

		void pop_back()
		{
			erase(--end());
		}

		void pop_front()
		{
			erase(begin());
		}

		iterator erase(iterator pos)
		{
			assert(pos != end());

			Node* prev = pos._node->_prev;
			Node* next = pos._node->_next;

			prev->_next = next;
			next->_prev = prev;
			delete pos._node;

			--_size;

			return next;
		}

		size_t size() const
		{
			return _size;
		}

		bool empty() const
		{
			return _size == 0;
		}
	private:
		Node* _head;
		size_t _size;
	};

	struct AA
	{
		int _a1 = 1;
		int _a2 = 1;
	};

	// ����ʵ����
	// T* const ptr1
	// const T* ptr2
	template<class Container>
	void print_container(const Container& con)
	{
		// const iterator -> �������������޸�
		// const_iterator -> ָ�����ݲ����޸�
		typename Container::const_iterator it = con.begin();
		//auto it = con.begin();
		while (it != con.end())
		{
			//*it += 10;

			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : con)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_list1()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			*it += 10;

			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : lt)
		{
			cout << e << " ";
		}
		cout << endl;
		print_container(lt);

		list<AA> lta;
		lta.push_back(AA());
		lta.push_back(AA());
		lta.push_back(AA());
		lta.push_back(AA());
		list<AA>::iterator ita = lta.begin();
		while (ita != lta.end())
		{
			//cout << (*ita)._a1 << ":" << (*ita)._a2 << endl;
			// ���⴦������Ӧ��������->�ź���Ϊ�˿ɶ��ԣ�ʡ����һ��->
			cout << ita->_a1 << ":" << ita->_a2 << endl;
			cout << ita.operator->()->_a1 << ":" << ita.operator->()->_a2 << endl;

			++ita;
		}
		cout << endl;
	}

	void test_list2()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		// insert�Ժ��������ʧЧ
		list<int>::iterator it = lt.begin();
		lt.insert(it, 10);
		*it += 100;

		print_container(lt);

		// erase�Ժ������ʧЧ
		// ɾ�����е�ż��
		it = lt.begin();
		while (it != lt.end())
		{
			if (*it % 2 == 0)
			{
				it = lt.erase(it);
			}
			else
			{
				++it;
			}
		}

		print_container(lt);
	}

	void test_list3()
	{
		list<int> lt1;
		lt1.push_back(1);
		lt1.push_back(2);
		lt1.push_back(3);
		lt1.push_back(4);

		list<int> lt2(lt1);

		print_container(lt1);
		print_container(lt2);

		list<int> lt3;
		lt3.push_back(10);
		lt3.push_back(20);
		lt3.push_back(30);
		lt3.push_back(40);

		lt1 = lt3;
		print_container(lt1);
		print_container(lt3);
	}

	void func(const list<int>& lt)
	{
		print_container(lt);
	}

	void test_list4()
	{
		// ֱ�ӹ���
		list<int> lt0({ 1,2,3,4,5,6 });
		// ��ʽ����ת��
		list<int> lt1 = { 1,2,3,4,5,6,7,8 };
		const list<int>& lt3 = { 1,2,3,4,5,6,7,8 };

		func(lt0);
		func({ 1,2,3,4,5,6 });

		print_container(lt1);

		//auto il = { 10, 20, 30 };
	/*	initializer_list<int> il = { 10, 20, 30 };
		cout << typeid(il).name() << endl;
		cout << sizeof(il) << endl;*/
	}
}