#ifndef SELECT_H
#define SELECT_H
#include"teacher.h"
#include"community.h"
#include"txt.h"
class select
{
	teacher s[100];
	classone c[100];
	txt t[100];
	Community ty[100];
	int category;
public:
	select(int c = 0) { category = c; }
	/*int find_by_id();//���տγ̱�ű�Ų���
	int find_by_name();//���տγ�������
	int find_by_tn();//���ս�ʦ������
	int find_by_ct();//�����Ͽ�ʱ�����
	int find_by_os();//���տ���ʱ�����
	int find_by_cou();//��������רҵ/����רҵ����*/
	void input();//רҵ������
	void inputs();//����������
	void saveTofile();//�����ļ�
	void FileToGoods();//��ȡ�ļ�
};
#endif
