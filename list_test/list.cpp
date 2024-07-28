#pragma once

namespace bee
{
	template<class T>
	struct list_node
	{ 
		T _date;
		list_node<T>* _next;
		list_node<T>* _prev;

		list_node(const T& date = T())
			:_date(date)
			,_next(nullptr)
			,_prev(nullptr)
		{}
	};

	template<class T>
	struct list_iterator
	{
		typedef list_node<T> Node;
		typedef list_iterator<T> Self;

		Node* _node;

		list_iterator(Node* node)
			:_node(node)
		{}

		T& operator*()
		{
			return _node->_date;
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


		bool operator!=(const Self& s) const
		{
			return _node != s._node;
		}

		bool operator==(const Self& s) const
		{
			return _node == s._node;
		}

	};

	template<class T>
	class list
	{
		typedef list_node<T> Node;
	public:
		typedef list_iterator<T> iterator;

		list()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			_size = 0;
		}

		// begin是第一个节点
		iterator begin()
		{
			return _head->_next;
		}

		iterator end()
		{
			return _head;
		}

		void push_back(const T& x)
		{
			Node newnode = new Node(x);
			Node* tail = _head->_prev;
			tail->_next = newnode;
			newnode->_prev = tail;
			_head->_prev = newnode;
			tail->_next = _head;

			++_size;
		}

		void push_font()
		{

		}

		void insert(iterator pos, const T& x)
		{
			Node newnode = new Node(x);

			iterator prev = --pos;
			iterator next = ++pos;

			prev._node->_next = newnode;
			newnode->_prev = prev._node;
			newnode->_next = next._node;
			next._node->_prev = newnode;

			++_size;
		}

		void erase(iterator pos)
		{
			assert(pos != end());

			Node prev = pos._node->_prev;
			Node next = pos._node->_next;

			prev->_next = next;
			next->_prev = prev;

			--_size;

			delete pos._node;
		}

	private:
		Node* _head;
		size_t size;
	};
}