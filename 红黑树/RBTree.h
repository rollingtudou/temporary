#pragma once

// 枚举定义红黑树节点的颜色
enum Colour
{
	RED,   // 红色节点
	BLACK  // 黑色节点
};

// 模板结构体定义红黑树的节点
template<class K, class V>
struct RBTreeNode
{
	// 保存键值对
	pair<K, V> _kv;

	// 左右孩子节点指针，父节点指针
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;

	// 节点颜色（红色或黑色）
	Colour _col;

	// 构造函数，初始化键值对，并将子节点和父节点指针设置为空
	RBTreeNode(const pair<K, V>& kv)
		: _kv(kv)
		, _left(nullptr)
		, _right(nullptr)
		, _parent(nullptr) 
	{}
};

// 模板类定义红黑树
template<class K, class V>
class RBTree
{
	typedef RBTreeNode<K, V> Node;

public:
	// 插入键值对到红黑树中
	bool Insert(const pair<K, V>& kv)
	{
		// 如果树为空，插入第一个节点，并将其颜色设置为黑色
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_col = BLACK;  // 根节点必须为黑色
			return true;
		}

		// 遍历树找到插入位置
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			// 如果键大于当前节点，向右走；否则向左走
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
				// 键已存在，返回 false
				return false;
			}
		}

		// 创建新节点，并将其颜色设置为红色
		cur = new Node(kv);
		cur->_col = RED;

		// 将新节点链接到其父节点
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}
		cur->_parent = parent;

		// 如果父节点是红色，则修复红黑树属性
		while (parent && parent->_col == RED)
		{
			Node* grandfather = parent->_parent;
			if (parent == grandfather->_left) // parent 在左  uncle在右
			{
				Node* uncle = grandfather->_right;

				// 情况 1: 叔叔节点是红色，需要重新着色
				if (uncle && uncle->_col == RED)
				{
					parent->_col = uncle->_col = BLACK;
					grandfather->_col = RED;
					cur = grandfather;  // 继续向上修复
					parent = cur->_parent;
				}
				else
				{
					// 情况 2: 叔叔节点是黑色或不存在，需要旋转
					if (cur == parent->_left)
					{
						RotateR(grandfather);  // 右旋转
						parent->_col = BLACK;
						grandfather->_col = RED;
					}
					else // 单旋无法解决问题 
					{
						RotateL(parent);  // 先左旋父节点
						RotateR(grandfather);  // 再右旋祖父节点
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					// 叔叔节点是黑色或不存在时，在旋转处理后当前最上面的是黑色节点，所以已经满足红黑树要求，可以直接break
					break;  
				}
			}
			else // parent 在右  uncle在左
			{
				Node* uncle = grandfather->_left;

				// 情况 1: 叔叔节点是红色，需要重新着色
				if (uncle && uncle->_col == RED)
				{
					parent->_col = uncle->_col = BLACK;
					grandfather->_col = RED;
					cur = grandfather;  // 继续向上修复
					parent = cur->_parent;
				}
				else
				{
					// 情况 2: 叔叔节点是黑色或不存在，需要旋转
					if (cur == parent->_right)
					{
						RotateL(grandfather);  // 左旋转
						parent->_col = BLACK;
						grandfather->_col = RED;
					}
					else
					{
						RotateR(parent);  // 先右旋父节点
						RotateL(grandfather);  // 再左旋祖父节点
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					// 叔叔节点是黑色或不存在时，在旋转处理后当前最上面的是黑色节点，所以已经满足红黑树要求，可以直接break
					break;
				}
			}
		}

		// 确保根节点始终为黑色
		_root->_col = BLACK;
		return true;
	}

	// 右旋转以修复红黑树平衡
	void RotateR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;

		parent->_left = subLR;
		if (subLR)
			subLR->_parent = parent;

		Node* pParent = parent->_parent;
		subL->_right = parent;
		parent->_parent = subL;

		// 处理根节点的情况
		if (parent == _root)
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
	}

	// 左旋转以修复红黑树平衡
	void RotateL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;

		parent->_right = subRL;
		if (subRL)
			subRL->_parent = parent;

		Node* parentParent = parent->_parent;
		subR->_left = parent;
		parent->_parent = subR;

		// 处理根节点的情况
		if (parentParent == nullptr)
		{
			_root = subR;
			subR->_parent = nullptr;
		}
		else
		{
			if (parent == parentParent->_left)
			{
				parentParent->_left = subR;
			}
			else
			{
				parentParent->_right = subR;
			}
			subR->_parent = parentParent;
		}
	}

	// 中序遍历树（左-根-右）
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

	// 计算树的高度
	int Height()
	{
		return _Height(_root);
	}

	// 计算树的大小（节点数）
	int Size()
	{
		return _Size(_root);
	}

	// 查找具有特定键的节点
	Node* Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first < key)
			{
				cur = cur->_right;
			}
			else if (cur->_kv.first > key)
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

	// 检查红黑树是否平衡
	bool IsBalance()
	{
		if (_root == nullptr)
			return true;

		// 根节点必须为黑色
		if (_root->_col == RED)
			return false;

		// 比较从根到叶子的所有路径中的黑节点数量  作为黑节点的基准值传入Check进行判断红黑树是否正确
		int refNum = 0;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_col == BLACK)
			{
				++refNum;
			}
			cur = cur->_left;
		}

		// 递归检查所有路径是否具有相同的黑节点数量
		return Check(_root, 0, refNum);
	}

private:

	// 递归检查树是否满足红黑树的属性
	bool Check(Node* root, int blackNum, const int refNum)
	{
		if (root == nullptr)
		{
			// 如果到达叶子节点，检查黑色节点数量
			if (refNum != blackNum)
			{
				cout << "路径中的黑色节点数量不相等" << endl;
				return false;
			}
			return true;
		}

		// 确保没有连续的红色节点
		if (root->_col == RED && root->_parent->_col == RED)
		{
			cout << root->_kv.first << "存在连续的红色节点" << endl;
			return false;
		}

		// 如果当前节点是黑色，增加黑色节点数量
		if (root->_col == BLACK)
		{
			blackNum++;
		}

		// 检查左右子树是否满足红黑树性质
		return Check(root->_left, blackNum, refNum)
			&& Check(root->_right, blackNum, refNum);
	}

	// 中序遍历的辅助函数
	void _InOrder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}

		_InOrder(root->_left);
		cout << root->_kv.first << ":" << root->_kv.second << endl;
		_InOrder(root->_right);
	}

	// 递归计算树的高度
	int _Height(Node* root)
	{
		if (root == nullptr)
			return 0;
		int leftHeight = _Height(root->_left);
		int rightHeight = _Height(root->_right);
		// 返回较大的子树高度+1
		return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
	}

	// 递归计算树的大小
	int _Size(Node* root)
	{
		if (root == nullptr)
			return 0;

		// 左子树大小 + 右子树大小 + 当前节点
		return _Size(root->_left) + _Size(root->_right) + 1;
	}

private:
	// 红黑树的根节点
	Node* _root = nullptr;
};
