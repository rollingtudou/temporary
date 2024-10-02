#pragma once
#include <assert.h>
#include <iostream>

using namespace std;


template<class K, class V>
struct AVLTreeNode
{
	pair<K, V> _kv;
	AVLTreeNode<K, V>* _left;
	AVLTreeNode<K，V>* _right;
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
		// 链接父亲
		cur->_parent = parent;

		// 控制平衡
		// 更新平衡因子
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

	// AVL树的验证
	bool IsAVLTree()
	{
		return _IsAVLTree(_pRoot);
	}

	Node* find(const K& key)
	{
		return Find(key);
	}


private:

	// 根据AVL树的概念验证pRoot是否为有效的AVL树
	bool _IsAVLTree(Node* pRoot);
	size_t _Height(Node* pRoot);
	
	// 右单旋
	void RotateR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;

		parent->_left = subLR;

		if (subLR)
			subLR->_parent = parent;

		Node* pParent = parent->_parent;

		subL->_right = parent;
		parent->_parent = subL；

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

	// 左单旋
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


	// 右左双旋
	void RotateLR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		int bf = subLR->_bf; // 旋转前subLR链接的两个子树 分别链接到了旋转后的子树上

		RotateL(parent->_left);
		RotateR(parent);

		// 判断两个子树的bf
		if (bf == 0) 
		{
			subL->_bf = 0;
			subLR->_bf = 0;
			parent->_bf = 0;
		}
		else if (bf == 1) // subL比parent链接到的子树低1
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

	// 右左双旋
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
////////   删除

bool Erase(const K& key) {
	Node* parent = nullptr;
	Node* cur = _root;

	// 1. 查找要删除的节点
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
		return false; // 节点不存在
	}

	// 2. 执行删除操作
	// 如果有两个子节点
	if (cur->_left && cur->_right) {
		Node* replace = cur->_left;
		parent = cur;

		// 找到左子树的最右节点（即前驱节点）
		while (replace->_right) {
			parent = replace;
			replace = replace->_right;
		}

		// 用前驱节点替换当前节点的值
		cur->_kv = replace->_kv;
		cur = replace;
	}

	// 只有一个子节点或没有子节点
	Node* subTree = cur->_left ? cur->_left : cur->_right;

	if (!parent) {
		// 删除的是根节点
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

	// 删除节点
	delete cur;

	// 3. 更新平衡因子并旋转
	while (parent) {
		if (subTree == parent->_left) {
			parent->_bf++;
		}
		else {
			parent->_bf--;
		}

		if (parent->_bf == 1 || parent->_bf == -1) {
			break;  // 高度没有发生变化，停止调整
		}

		if (parent->_bf == 2 || parent->_bf == -2) {
			// 旋转
			Rebalance(parent);
		}

		subTree = parent;
		parent = parent->_parent;
	}

	return true;
}