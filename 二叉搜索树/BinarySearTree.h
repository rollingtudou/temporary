#pragma once
#include<iostream>
using namespace std;

namespace key_value
{
	template<class K, class V>
	struct BSTNode
	{
		K _key;
		V _value;

		BSTNode<K, V>* _left;
		BSTNode<K, V>* _right;

		BSTNode(const K& key, const V& value)
			:_key(key)
			, _value(value)
			, _left(nullptr)
			, _right(nullptr)
		{}
	};

	// Binary Search Tree
	// Key/value
	template<class K, class V>
	class BSTree
	{
		//typedef BSTNode<K> Node;
		using Node = BSTNode<K, V>;
	public:
		// ǿ�����ɹ���
		BSTree() = default;

		BSTree(const BSTree& t)
		{
			_root = Copy(t._root);
		}

		BSTree& operator=(BSTree tmp)
		{
			swap(_root, tmp._root);
			return *this;
		}

		~BSTree()
		{
			Destroy(_root);
			_root = nullptr;
		}

		bool Insert(const K& key, const V& value)
		{
			if (_root == nullptr)
			{
				_root = new Node(key, value);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = _root;

			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					return false;
				}
			}

			cur = new Node(key, value);
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}

			return true;
		}

		Node* Find(const K& key)
		{
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return cur;
				}
			}

			return nullptr;
		}

		bool Erase(const K& key)
		{
			Node* parent = nullptr;
			Node* cur = _root;

			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					// ɾ��
					// ��Ϊ��
					if (cur->_left == nullptr)
					{
						if (cur == _root)
						{
							_root = cur->_right;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_right;
							}
							else
							{
								parent->_right = cur->_right;
							}
						}
						delete cur;

					}
					else if (cur->_right == nullptr)
					{
						if (cur == _root)
						{
							_root = cur->_left;
						}
						else
						{
							// ��Ϊ��
							if (parent->_left == cur)
							{
								parent->_left = cur->_left;
							}
							else
							{
								parent->_right = cur->_left;
							}
						}

						delete cur;

					}
					else
					{
						// ���Ҷ���Ϊ��
						// ����������ڵ�
						Node* replaceParent = cur;
						Node* replace = cur->_right;
						while (replace->_left)
						{
							replaceParent = replace;
							replace = replace->_left;
						}

						cur->_key = replace->_key;

						if (replaceParent->_left == replace)
							replaceParent->_left = replace->_right;
						else
							replaceParent->_right = replace->_right;

						delete replace;
					}

					return true;
				}
			}

			return false;
		}

		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}
	private:
		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}

			_InOrder(root->_left);
			cout << root->_key << ":" << root->_value << endl;
			_InOrder(root->_right);
		}

		void Destroy(Node* root)
		{
			if (root == nullptr)
				return;

			Destroy(root->_left);
			Destroy(root->_right);
			delete root;
		}

		Node* Copy(Node* root)
		{
			if (root == nullptr)
				return nullptr;

			Node* newRoot = new Node(root->_key, root->_value);
			newRoot->_left = Copy(root->_left);
			newRoot->_right = Copy(root->_right);
			return newRoot;
		}
	private:
		Node* _root = nullptr;
	};
}





namespace key
{
	// ����һ��ģ�����ʾ�����������Ľڵ�
	template<class K>
	struct BSTNode
	{
		K _key;  // �ڵ�ļ�ֵ
		BSTNode<K>* _left;  // ָ�����ӽڵ��ָ��
		BSTNode<K>* _right; // ָ�����ӽڵ��ָ��

		// ���캯������ʼ���ڵ�ļ�ֵ�������ӽڵ�Ϊ��
		BSTNode(const K& key)
			:_key(key), _left(nullptr), _right(nullptr)
		{}
	};

	// ������������
	// K: ��������
	template<class K>
	class BSTree
	{
		// ʹ�ñ����򻯽ڵ����͵Ķ���
		using Node = BSTNode<K>;
	public:

		// ����һ���µļ���������������
		bool Insert(const K& key)
		{
			// ������ǿյģ����¼���Ϊ���ڵ����
			if (_root == nullptr)
			{
				_root = new Node(key);
				return true;
			}

			// �Ӹ��ڵ㿪ʼ��Ѱ�Ҳ���λ��
			Node* parent = nullptr;
			Node* cur = _root;

			// ���������ҵ����ʵĲ���λ��
			while (cur)
			{
				if (cur->_key < key)  // �����ǰ�ڵ��ֵС��Ҫ����ļ������������ƶ�
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)  // �����ǰ�ڵ��ֵ����Ҫ����ļ������������ƶ�
				{
					parent = cur;
					cur = cur->_left;
				}
				else  // ������Ѵ��ڣ�����ʧ��
				{
					return false;
				}
			}

			// �����µĽڵ�
			cur = new Node(key);

			// ���½ڵ���븸�ڵ�������
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}

			return true;  // ����ɹ�
		}

		// ����ĳ�����Ƿ��ڶ�����������
		bool Find(const K& key)
		{
			Node* cur = _root;  // �Ӹ��ڵ㿪ʼ
			while (cur)
			{
				if (cur->_key < key)  // �����ǰ�ڵ��ֵС��Ҫ���ҵļ������������ƶ�
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)  // �����ǰ�ڵ��ֵ����Ҫ���ҵļ������������ƶ�
				{
					cur = cur->_left;
				}
				else  // �ҵ�Ŀ��ڵ�
				{
					return true;
				}
			}

			return false;  // û���ҵ�
		}

		// ɾ�������������е�ָ����
		bool Erase(const K& key)
		{
			Node* parent = nullptr;
			Node* cur = _root;

			// ����Ҫɾ���Ľڵ�
			while (cur)
			{
				if (cur->_key < key)  // �����ǰ�ڵ��ֵС��Ҫɾ���ļ������������ƶ�
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)  // �����ǰ�ڵ��ֵ����Ҫɾ���ļ������������ƶ�
				{
					parent = cur;
					cur = cur->_left;
				}
				else  // �ҵ�Ҫɾ���Ľڵ�
				{
					// ���������Ϊ�գ����������
					if (cur->_left == nullptr)
					{
						if (cur == _root)  // ���ɾ�����Ǹ��ڵ�
						{
							_root = cur->_right;
						}
						else  // ���ݸ��ڵ��λ������������
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_right;
							}
							else
							{
								parent->_right = cur->_right;
							}
						}
						delete cur;  // �ͷ�ɾ���ڵ�
					}
					// ���������Ϊ�գ����������
					else if (cur->_right == nullptr)
					{
						if (cur == _root)  // ���ɾ�����Ǹ��ڵ�
						{
							_root = cur->_left;
						}
						else  // ���ݸ��ڵ��λ������������
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_left;
							}
							else
							{
								parent->_right = cur->_left;
							}
						}
						delete cur;  // �ͷ�ɾ���ڵ�
					}
					// ������������Ϊ��
					else
					{
						// �ҵ�������������ڵ���Ϊ����ڵ�
						Node* replaceParent = cur;
						Node* replace = cur->_right; // ������������ڵ�
						while (replace->_left)
						{
							replaceParent = replace;
							replace = replace->_left;
						}

						// ������ڵ��ֵ���Ƶ�Ҫɾ���Ľڵ�
						cur->_key = replace->_key;

						// ��������ڵ�ĸ��ڵ��ָ��
						// replace��cur������������ڵ㣬replaceֻ������������������ȷ��replace������parent������Һ���parent����replace����
						if (replaceParent->_left == replace)
							replaceParent->_left = replace->_right;
						else
							replaceParent->_right = replace->_right;

						delete replace;  // ɾ������ڵ�
					}

					return true;  // ɾ���ɹ�
				}
			}

			return false;  // û���ҵ�Ҫɾ���Ľڵ�
		}

		// �����������������
		void InOrder()
		{
			_InOrder(_root);  // �Ӹ��ڵ㿪ʼ�ݹ����
			cout << endl;
		}

	private:

		// ��������ĵݹ�ʵ��
		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;  // �������սڵ㣬ֹͣ�ݹ�
			}

			_InOrder(root->_left);  // �ȱ���������
			cout << root->_key << " ";  // �����ǰ�ڵ�ļ�ֵ
			_InOrder(root->_right);  // �ٱ���������
		}

	private:
		Node* _root = nullptr;  // ָ�����ĸ��ڵ�
	};
}
