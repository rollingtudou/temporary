#define _CRT_SECURE_NO_WARNINGS 1
//#include"BinarySearTree.h"
#include"test.h"

int main()
{
	test::BSTree<int> t;
	int a[] = { 8, 3, 1, 10, 1, 6, 4, 7, 14, 13};
	for (auto e : a)
	{
		t.insert(e);
	}

	//t.InOrder();

	//t.Insert(16);
	//t.Insert(3);
	//t.InOrder();

	//t.Erase(3);
	//t.InOrder();

	//t.Erase(8);
	//t.InOrder();

	//for (auto e : a)
	//{
	//	t.Erase(e);
	//	t.InOrder();
	//}

	return 0;
}

//int main()
//{
//	key_value::BSTree<string, string> dict;
//	//BSTree<string, string> copy = dict;
//	dict.Insert("left", "���");
//	dict.Insert("right", "�ұ�");
//	dict.Insert("insert", "����");
//	dict.Insert("string", "�ַ���");
//
//	string str;
//	while (cin >> str)
//	{
//		auto ret = dict.Find(str);
//		if (ret)
//		{
//			cout << "->" << ret->_value << endl;
//		}
//		else
//		{
//			cout << "�޴˵��ʣ�����������" << endl;
//		}
//	}
//
//	return 0;
//}

// set key
// map key/value
//int main()
//{
//	string arr[] = { "ƻ��", "����", "ƻ��", "����", "ƻ��", "ƻ��", "����",
//	"ƻ��", "�㽶", "ƻ��", "�㽶" };
//	key_value::BSTree<string, int> countTree;
//
//	for (const auto& str : arr)
//	{
//		// �Ȳ���ˮ���ڲ�����������
//		// 1�����ڣ�˵��ˮ����һ�γ��֣������<ˮ��, 1>
//		// 2���ڣ�����ҵ��Ľ����ˮ����Ӧ�Ĵ���++
//		//BSTreeNode<string, int>* ret = countTree.Find(str);
//		auto ret = countTree.Find(str);
//		if (ret == nullptr)
//		{
//			countTree.Insert(str, 1);
//		}
//		else
//		{
//			// �޸�value
//			ret->_value++;
//		}
//	}
//	countTree.InOrder();
//
//
//	key_value::BSTree<string, int> copy = countTree;
//	copy.InOrder();
//
//	return 0;
//}