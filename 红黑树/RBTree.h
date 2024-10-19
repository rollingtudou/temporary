#pragma once

// ö�ٶ��������ڵ����ɫ
enum Colour
{
	RED,   // ��ɫ�ڵ�
	BLACK  // ��ɫ�ڵ�
};

// ģ��ṹ�嶨�������Ľڵ�
template<class K, class V>
struct RBTreeNode
{
	// �����ֵ��
	pair<K, V> _kv;

	// ���Һ��ӽڵ�ָ�룬���ڵ�ָ��
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;

	// �ڵ���ɫ����ɫ���ɫ��
	Colour _col;

	// ���캯������ʼ����ֵ�ԣ������ӽڵ�͸��ڵ�ָ������Ϊ��
	RBTreeNode(const pair<K, V>& kv)
		: _kv(kv)
		, _left(nullptr)
		, _right(nullptr)
		, _parent(nullptr) 
	{}
};

// ģ���ඨ������
template<class K, class V>
class RBTree
{
	typedef RBTreeNode<K, V> Node;

public:
	// �����ֵ�Ե��������
	bool Insert(const pair<K, V>& kv)
	{
		// �����Ϊ�գ������һ���ڵ㣬��������ɫ����Ϊ��ɫ
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_col = BLACK;  // ���ڵ����Ϊ��ɫ
			return true;
		}

		// �������ҵ�����λ��
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			// ��������ڵ�ǰ�ڵ㣬�����ߣ�����������
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
				// ���Ѵ��ڣ����� false
				return false;
			}
		}

		// �����½ڵ㣬��������ɫ����Ϊ��ɫ
		cur = new Node(kv);
		cur->_col = RED;

		// ���½ڵ����ӵ��丸�ڵ�
		if (parent->_kv.first < kv.first)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}
		cur->_parent = parent;

		// ������ڵ��Ǻ�ɫ�����޸����������
		while (parent && parent->_col == RED)
		{
			Node* grandfather = parent->_parent;
			if (parent == grandfather->_left) // parent ����  uncle����
			{
				Node* uncle = grandfather->_right;

				// ��� 1: ����ڵ��Ǻ�ɫ����Ҫ������ɫ
				if (uncle && uncle->_col == RED)
				{
					parent->_col = uncle->_col = BLACK;
					grandfather->_col = RED;
					cur = grandfather;  // ���������޸�
					parent = cur->_parent;
				}
				else
				{
					// ��� 2: ����ڵ��Ǻ�ɫ�򲻴��ڣ���Ҫ��ת
					if (cur == parent->_left)
					{
						RotateR(grandfather);  // ����ת
						parent->_col = BLACK;
						grandfather->_col = RED;
					}
					else // �����޷�������� 
					{
						RotateL(parent);  // ���������ڵ�
						RotateR(grandfather);  // �������游�ڵ�
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					// ����ڵ��Ǻ�ɫ�򲻴���ʱ������ת�����ǰ��������Ǻ�ɫ�ڵ㣬�����Ѿ���������Ҫ�󣬿���ֱ��break
					break;  
				}
			}
			else // parent ����  uncle����
			{
				Node* uncle = grandfather->_left;

				// ��� 1: ����ڵ��Ǻ�ɫ����Ҫ������ɫ
				if (uncle && uncle->_col == RED)
				{
					parent->_col = uncle->_col = BLACK;
					grandfather->_col = RED;
					cur = grandfather;  // ���������޸�
					parent = cur->_parent;
				}
				else
				{
					// ��� 2: ����ڵ��Ǻ�ɫ�򲻴��ڣ���Ҫ��ת
					if (cur == parent->_right)
					{
						RotateL(grandfather);  // ����ת
						parent->_col = BLACK;
						grandfather->_col = RED;
					}
					else
					{
						RotateR(parent);  // ���������ڵ�
						RotateL(grandfather);  // �������游�ڵ�
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					// ����ڵ��Ǻ�ɫ�򲻴���ʱ������ת�����ǰ��������Ǻ�ɫ�ڵ㣬�����Ѿ���������Ҫ�󣬿���ֱ��break
					break;
				}
			}
		}

		// ȷ�����ڵ�ʼ��Ϊ��ɫ
		_root->_col = BLACK;
		return true;
	}

	// ����ת���޸������ƽ��
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

		// ������ڵ�����
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

	// ����ת���޸������ƽ��
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

		// ������ڵ�����
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

	// �������������-��-�ң�
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

	// �������ĸ߶�
	int Height()
	{
		return _Height(_root);
	}

	// �������Ĵ�С���ڵ�����
	int Size()
	{
		return _Size(_root);
	}

	// ���Ҿ����ض����Ľڵ�
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

	// ��������Ƿ�ƽ��
	bool IsBalance()
	{
		if (_root == nullptr)
			return true;

		// ���ڵ����Ϊ��ɫ
		if (_root->_col == RED)
			return false;

		// �ȽϴӸ���Ҷ�ӵ�����·���еĺڽڵ�����  ��Ϊ�ڽڵ�Ļ�׼ֵ����Check�����жϺ�����Ƿ���ȷ
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

		// �ݹ�������·���Ƿ������ͬ�ĺڽڵ�����
		return Check(_root, 0, refNum);
	}

private:

	// �ݹ������Ƿ���������������
	bool Check(Node* root, int blackNum, const int refNum)
	{
		if (root == nullptr)
		{
			// �������Ҷ�ӽڵ㣬����ɫ�ڵ�����
			if (refNum != blackNum)
			{
				cout << "·���еĺ�ɫ�ڵ����������" << endl;
				return false;
			}
			return true;
		}

		// ȷ��û�������ĺ�ɫ�ڵ�
		if (root->_col == RED && root->_parent->_col == RED)
		{
			cout << root->_kv.first << "���������ĺ�ɫ�ڵ�" << endl;
			return false;
		}

		// �����ǰ�ڵ��Ǻ�ɫ�����Ӻ�ɫ�ڵ�����
		if (root->_col == BLACK)
		{
			blackNum++;
		}

		// ������������Ƿ�������������
		return Check(root->_left, blackNum, refNum)
			&& Check(root->_right, blackNum, refNum);
	}

	// ��������ĸ�������
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

	// �ݹ�������ĸ߶�
	int _Height(Node* root)
	{
		if (root == nullptr)
			return 0;
		int leftHeight = _Height(root->_left);
		int rightHeight = _Height(root->_right);
		// ���ؽϴ�������߶�+1
		return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
	}

	// �ݹ�������Ĵ�С
	int _Size(Node* root)
	{
		if (root == nullptr)
			return 0;

		// ��������С + ��������С + ��ǰ�ڵ�
		return _Size(root->_left) + _Size(root->_right) + 1;
	}

private:
	// ������ĸ��ڵ�
	Node* _root = nullptr;
};
