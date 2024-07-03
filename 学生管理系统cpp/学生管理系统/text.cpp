#include"select.h"
void menu1()
{
	cout << "*------------>欢迎使用学生选课系统<-----------*" << endl;
	cout << "*             (1)管理员入口                   *" << endl;
	cout << "*               (2)学生入口                   *" << endl;
}
void menu2()
{
	cout << "*------------------->欢迎进入管理员选课系统<--------------------*" << endl;
	cout << "*                      (1)课程管理							     *" << endl;
	cout << "*                      (2)学生管理							     *" << endl;
	cout << "*                      (3)选课信息						         *" << endl;
	cout << "*                      (4)统计模块						         *" << endl;
	cout << "*                      (5)生成课程表							 *" << endl;
	cout << "*                      (6)返回上一级							 *" << endl;
}
void menu3()
{
	cout << "*------------------->欢迎进入管理员选课系统<-------------------*" << endl;
	cout << "*                   (1)查询课程信息							 *" << endl;
	cout << "*                   (2)增加课程信息							 *" << endl;
	cout << "*                   (3)删除课程信息							 *" << endl;
	cout << "*                   (4)更新课程信息							 *" << endl;
	cout << "*				     (5)排序							         *" << endl;
	cout << "*                   (6)课程信息读取与保存						 *" << endl;
	cout << "*                   (7)返回上一级							     *" << endl;
}
void menu4()
{
	cout << "*------------------->请选择查询方式<--------------------*" << endl;
	cout << "*                    (1)按照课程名称				 *" << endl;
	cout << "*                    (2)按照课程编号						     *" << endl;
	cout << "*                    (3)按照教师姓名						         *" << endl;
	cout << "*                    (4)按照上课时间					         *" << endl;
	cout << "*                    (5)按照开课学期						 *" << endl;
	cout << "*                    (6)按照面向专业/所属专业						 *" << endl;
	cout << "*                    (7)返回上一级							     *" << endl;
}
void menu5()
{
	cout << "*------------->请选择要增加课程的类型<-----------*" << endl;
	cout << "*                  (1)专业课                     *" << endl;
	cout << "*                  (2)公共课                     *" << endl;
	cout << "*                  (3)返回上一级			      *" << endl;
}
void menu6()
{
	cout << "*------------------------>请选择排序方式<------------------------*" << endl;
	cout << "*                         (1)按课程名排序						  *" << endl;
	cout << "*                         (2)按课程代码排序					  *" << endl;
	cout << "*                         (3)按上课时间排序					  *" << endl;
	cout << "*                         (4)按照面向专业排序/所属专业排序	  *" << endl;
	cout << "*                         (5)返回上一级							     *" << endl;
}
void menu7()
{
	cout << "*------------------->欢迎进入管理学生信息系统<-------------------*" << endl;
	cout << "*                     (1)查询学生信息							 *" << endl;
	cout << "*                     (2)增加学生信息							 *" << endl;
	cout << "*                     (3)删除学生信息							 *" << endl;
	cout << "*                     (4)更新学生信息							 *" << endl;
	cout << "*                     (5)学生信息保存							 *" << endl;
	cout << "*                     (6)返回上一级							     *" << endl;
}
select m;
int main()
{
	menu1();
	int c;
	for (;;)
	{
		cout << "请选择序号1-2" << endl;
		cin >> c;
		switch (c)
		{
		case 1: menu2();
		{
			int t;
			for (;;)
			{
				cout << "请输入序号1-6" << endl;
				cin >> t;
				switch (t)
				{
				case 1: s1:menu3();
				{
					int t2;
					for (;;)
					{
						cout << "请输入序号1-7" << endl;
						cin >> t2;
						switch (t2)
						{
						case 1: menu4();
						{
							int t3;
							for (;;)
							{
								cout << "请选择序号1-7" << endl;
								cin >> t3;
								switch (t3)
								{
								case 1:
								case 2: ;
								}
								break;
							}
						}
						case 2:s2: menu5();
						{
							int s1;
							for (;;)
							{
								cout << "请输入序号1-3" << endl;
								cin >> s1;
								switch (s1)
								{
								case 1:m.input(); goto s2;
								case 2:m.inputs(); goto s2;
								case 3:goto s1;
								}
								break;
							}
						}
						case 6:m.saveTofile(); goto s1;
						}
						break;
					}

				}
				}
				break;
			}
		}
		}
		break;
	}
	return 0;
}