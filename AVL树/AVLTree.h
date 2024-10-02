#pragma once
#include <assert.h>
#include <iostream>

using namespace std;


template<class K, class V>
struct AVLTreeNode
{
	pair<K, V> _kv;
	AVLTreeNode<K, V>* _left;
	AVLTreeNode<K��V>* _right;
	AVLTreeNode<K, V> _parent
	int _bf;

	AVLTreeNode(const pair<K, V>& kv)
		: _kv(kv)
		, _left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _bf(0)
	{}
};

template<class K, class V>
class AVLTree
{
	typedef AVLTreeNode<K, V> Node;
public:
	bool Insert(const pair<K, V>& kv)
	{
		if (_root == nullptr)
		{
			_root = new Node(kv);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;

		while (cur)
		{
			if (cur->_kv.first < kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(kv);
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}
		// ���Ӹ���
		cur->_parent = parent;

		// ����ƽ��
		// ����ƽ������
		while (parent)
		{
			if (cur == parent->_left)
				parent->_bf--;
			else
				parent->_bf++;

			if (parent->_bf == 0)
			{
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1)
			{
				cur = parent;
				parent = parent->_parent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				if (parent->_bf == -2 && cur->_bf == -1)
				{
					RotateR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == 1)
				{
					RotateL(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == 1)
				{
					RotateLR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == -1)
				{
					RotateRL(parent);
				}
				else
				{
					assert(false);
				}

				break;
			}
			else
			{
				assert(false);
			}
		}

		return true;
	}

	// AVL������֤
	bool IsAVLTree()
	{
		return _IsAVLTree(_pRoot);
	}

	Node* find(const K& key)
	{
		return Find(key);
	}


private:

	// ����AVL���ĸ�����֤pRoot�Ƿ�Ϊ��Ч��AVL��
	bool _IsAVLTree(Node* pRoot);
	size_t _Height(Node* pRoot);
	
	// �ҵ���
	void RotateR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;

		parent->_left = subLR;

		if (subLR)
			subLR->_parent = parent;

		Node* pParent = parent->_parent;

		subL->_right = parent;
		parent->_parent = subL��

		if(pParent == nullptr)
		{
			_root = subL;
			subL->_parent = nullptr;
		}
		else
		{
			if (pParent->_left == parent)
			{
				pParent->_left = subL;
			}
			else
			{
				pParent->_right = subL;
			}

			subL->_parent = pParent;
		}

		parent->_bf = subL->_bf = 0;
	}

	// ����
	void RotateL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;

		parent->_right = subRL;
		if (subRL)
			subRL->_parent = parent;

		Node* pParent = parent->_parent;

		subR->_left = parent;
		parent->_parent = subR;

		if (pParent == nullptr)
		{
			_root = subR;
			subR->_parent = nullptr;
		}
		else
		{
			if (parent == pParent->_left)
			{
				pParent->_left = subR;
			}
			else
			{
				pParent->_right = subR;
			}

			subR->_parent = pParent;
		}

		parent->_bf = subR->_bf = 0;
	}


	// ����˫��
	void RotateLR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		int bf = subLR->_bf; // ��תǰsubLR���ӵ��������� �ֱ����ӵ�����ת���������

		RotateL(parent->_left);
		RotateR(parent);

		// �ж�����������bf
		if (bf == 0) 
		{
			subL->_bf = 0;
			subLR->_bf = 0;
			parent->_bf = 0;
		}
		else if (bf == 1) // subL��parent���ӵ���������1
		{
			subL->_bf = -1;
			subLR->_bf = 0;
			parent->_bf = 0;
		}
		else if (bf == -1)
		{
			subL->_bf = 0;
			subLR->_bf = 0;
			parent->_bf = 1;
		}
		else
		{
			assert(false);
		}
	}

	// ����˫��
	void RotateRL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		int bf = subRL->_bf;

		RotateR(parent->_right);
		RotateL(parent);

		if (bf == 0)
		{
			subR->_bf = 0;
			subRL->_bf = 0;
			parent->_bf = 0;
		} 
		else if (bf == 1)
		{
			subR->_bf = 0;
			subRL->_bf = 0;
			parent->_bf = -1;
		} 
		else if (bf == -1)
		{
			subR->_bf = 1;
			subRL->_bf = 0;
			parent->_bf = 0;
		} 
		else
		{
			assert(false);
		}

	}

	Node* Find(const K& key)
	{
		Node* cur = _root;

		while (cur)
		{
			if (cur->_kv.first > k)
			{
				cur = cur->_left;
			}
			else if (cur->_kv.first < k)
			{
				cur = cur->_right;
			}
			else
			{
				return cur;
			}
		}

		return nullptr;
	}

	int _Height(Node* root)
	{
		if (root == nullptr)
		{
			return 0;
		}

		int leftHeight = _Height(root->left);
		int rightHeight = _Height(root->right);

		return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
	}

	bool _IsBalanceTree(Node* root)
	{

	}

	Node* _root = nullptr;
};







////////////////////////////////////////////////////////////////////////////////////////
////////   ɾ��

bool Erase(const K& key) {
	Node* parent = nullptr;
	Node* cur = _root;

	// 1. ����Ҫɾ���Ľڵ�
	while (cur) {
		if (cur->_kv.first < key) {
			parent = cur;
			cur = cur->_right;
		}
		else if (cur->_kv.first > key) {
			parent = cur;
			cur = cur->_left;
		}
		else {
			break;
		}
	}

	if (!cur) {
		return false; // �ڵ㲻����
	}

	// 2. ִ��ɾ������
	// ����������ӽڵ�
	if (cur->_left && cur->_right) {
		Node* replace = cur->_left;
		parent = cur;

		// �ҵ������������ҽڵ㣨��ǰ���ڵ㣩
		while (replace->_right) {
			parent = replace;
			replace = replace->_right;
		}

		// ��ǰ���ڵ��滻��ǰ�ڵ��ֵ
		cur->_kv = replace->_kv;
		cur = replace;
	}

	// ֻ��һ���ӽڵ��û���ӽڵ�
	Node* subTree = cur->_left ? cur->_left : cur->_right;

	if (!parent) {
		// ɾ�����Ǹ��ڵ�
		_root = subTree;
	}
	else {
		if (parent->_left == cur) {
			parent->_left = subTree;
		}
		else {
			parent->_right = subTree;
		}

		if (subTree) {
			subTree->_parent = parent;
		}
	}

	// ɾ���ڵ�
	delete cur;

	// 3. ����ƽ�����Ӳ���ת
	while (parent) {
		if (subTree == parent->_left) {
			parent->_bf++;
		}
		else {
			parent->_bf--;
		}

		if (parent->_bf == 1 || parent->_bf == -1) {
			break;  // �߶�û�з����仯��ֹͣ����
		}

		if (parent->_bf == 2 || parent->_bf == -2) {
			// ��ת
			Rebalance(parent);
		}

		subTree = parent;
		parent = parent->_parent;
	}

	return true;
}