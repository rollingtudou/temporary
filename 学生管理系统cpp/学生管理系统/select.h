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
	/*int find_by_id();//按照课程编号编号查找
	int find_by_name();//按照课程名查找
	int find_by_tn();//按照教师名查找
	int find_by_ct();//按照上课时间查找
	int find_by_os();//按照开课时间查找
	int find_by_cou();//按照面向专业/所属专业查找*/
	void input();//专业课输入
	void inputs();//公共课输入
	void saveTofile();//保存文件
	void FileToGoods();//读取文件
};
#endif
