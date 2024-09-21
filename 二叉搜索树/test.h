#pragma once

#include <iostream>
using namespace std;

namespace test
{
	template<class K>
	struct BSTNode
	{
		K _key;
		BSTNode<K>* _left;
		BSTNode<K>* _right;

		BSTNode(const K& key)
			: _key(key)
			, _left(nullptr)
			, _right(nullptr)
		{}
	};

	template<class K>
	class BSTree
	{
		using Node = BSTNode<K>;

	public:
		bool insert(const K& key)
		{
			if (_root == nullptr)
			{
				_root = new Node(key);
				return true;
			}

			Node* cur = _root;
			Node* parent = nullptr;

			while (cur)
			{
				if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else // 该key已存在
				{
					return false;
				}
			}

			if(parent->_key > key)
				parent->_left = new Node(key);
			else
				parent->_right = new Node(key);

			return true;
		}

		bool Find(const K& key)
		{
			Node* cur = _root;

			while (cur)
			{
				if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else
				{
					return true;
				}
			}

			return false;
		}

		bool Earse(const K& key)
		{
			Node* cur = _root;
			Node* parent = nullptr;

			while (cur)
			{
				if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else if (cur->_key < key)
				{
					cur = cur->_right
				}
				else // 已找到
				{
					if (cur->_left == nullptr)
					{
						if (cur->_key == root->_key)
						{
							_root = cur->right;
						}
						else 
						{
							if (poarent->_left == cur)
							{
								poarent->_left = cur->_right;
							}
							else
							{
								parent->_right = cur->_right;
							}
						}
						dlete cur;
					}
					else if (cur->_right == nullptr)
					{
						if (cur == root)
						{
							root = cur->_left;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_left;
							}
						}
					}
					else // 左右子树都有
					{
						Node* replace = cur->_right;
						Node* replaceparent = cur;
						while (replace->left)
						{
							replaceParent = replace;
							replace = replace->left;
						}

						cur->_key = replace->_key;

						if (replaceParent->_left == replace)
						{
							replaceParent->_left = replace->_right;
						}
						else
						{
							replaceParent->_right = replace->_right;
						}

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
		}


	private:
		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}

			_InOrder(root->_left);
			cout << root->_key << " ";
			_InOrder(root->_right);
		}

	private:
		Node* _root = nullptr;
	};
}