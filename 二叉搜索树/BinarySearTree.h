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
		// 强制生成构造
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
					// 删除
					// 左为空
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
							// 右为空
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
						// 左右都不为空
						// 右子树最左节点
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
	// 定义一个模板类表示二叉搜索树的节点
	template<class K>
	struct BSTNode
	{
		K _key;  // 节点的键值
		BSTNode<K>* _left;  // 指向左子节点的指针
		BSTNode<K>* _right; // 指向右子节点的指针

		// 构造函数，初始化节点的键值和左右子节点为空
		BSTNode(const K& key)
			:_key(key), _left(nullptr), _right(nullptr)
		{}
	};

	// 二叉搜索树类
	// K: 键的类型
	template<class K>
	class BSTree
	{
		// 使用别名简化节点类型的定义
		using Node = BSTNode<K>;
	public:

		// 插入一个新的键到二叉搜索树中
		bool Insert(const K& key)
		{
			// 如果树是空的，将新键作为根节点插入
			if (_root == nullptr)
			{
				_root = new Node(key);
				return true;
			}

			// 从根节点开始，寻找插入位置
			Node* parent = nullptr;
			Node* cur = _root;

			// 遍历树，找到合适的插入位置
			while (cur)
			{
				if (cur->_key < key)  // 如果当前节点的值小于要插入的键，向右子树移动
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)  // 如果当前节点的值大于要插入的键，向左子树移动
				{
					parent = cur;
					cur = cur->_left;
				}
				else  // 如果键已存在，插入失败
				{
					return false;
				}
			}

			// 创建新的节点
			cur = new Node(key);

			// 将新节点插入父节点的左或右
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}

			return true;  // 插入成功
		}

		// 查找某个键是否在二叉搜索树中
		bool Find(const K& key)
		{
			Node* cur = _root;  // 从根节点开始
			while (cur)
			{
				if (cur->_key < key)  // 如果当前节点的值小于要查找的键，向右子树移动
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)  // 如果当前节点的值大于要查找的键，向左子树移动
				{
					cur = cur->_left;
				}
				else  // 找到目标节点
				{
					return true;
				}
			}

			return false;  // 没有找到
		}

		// 删除二叉搜索树中的指定键
		bool Erase(const K& key)
		{
			Node* parent = nullptr;
			Node* cur = _root;

			// 查找要删除的节点
			while (cur)
			{
				if (cur->_key < key)  // 如果当前节点的值小于要删除的键，向右子树移动
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)  // 如果当前节点的值大于要删除的键，向左子树移动
				{
					parent = cur;
					cur = cur->_left;
				}
				else  // 找到要删除的节点
				{
					// 如果左子树为空，右子树替代
					if (cur->_left == nullptr)
					{
						if (cur == _root)  // 如果删除的是根节点
						{
							_root = cur->_right;
						}
						else  // 根据父节点的位置连接右子树
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
						delete cur;  // 释放删除节点
					}
					// 如果右子树为空，左子树替代
					else if (cur->_right == nullptr)
					{
						if (cur == _root)  // 如果删除的是根节点
						{
							_root = cur->_left;
						}
						else  // 根据父节点的位置连接左子树
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
						delete cur;  // 释放删除节点
					}
					// 左右子树都不为空
					else
					{
						// 找到右子树的最左节点作为替代节点
						Node* replaceParent = cur;
						Node* replace = cur->_right; // 右子树的最左节点
						while (replace->_left)
						{
							replaceParent = replace;
							replace = replace->_left;
						}

						// 将替代节点的值复制到要删除的节点
						cur->_key = replace->_key;

						// 调整替代节点的父节点的指针
						// replace是cur右子树的最左节点，replace只可能有右子树，所以确定replace链接在parent的左或右后，用parent链接replace的右
						if (replaceParent->_left == replace)
							replaceParent->_left = replace->_right;
						else
							replaceParent->_right = replace->_right;

						delete replace;  // 删除替代节点
					}

					return true;  // 删除成功
				}
			}

			return false;  // 没有找到要删除的节点
		}

		// 中序遍历二叉搜索树
		void InOrder()
		{
			_InOrder(_root);  // 从根节点开始递归遍历
			cout << endl;
		}

	private:

		// 中序遍历的递归实现
		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;  // 遍历到空节点，停止递归
			}

			_InOrder(root->_left);  // 先遍历左子树
			cout << root->_key << " ";  // 输出当前节点的键值
			_InOrder(root->_right);  // 再遍历右子树
		}

	private:
		Node* _root = nullptr;  // 指向树的根节点
	};
}
