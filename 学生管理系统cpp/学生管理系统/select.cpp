#include"select.h"
#include"teacher.h"
#include"classone.h"
#include"Community.h"
#include"txt.h"
#include<fstream>
#include<iomanip>
/*int select::find_by_id()
{
	string num;
	cout << "请输入要查找的编号" << endl;
	int i;
	for (i = 0; i < category; i++)
	{
		if (num == s[i].getnum())
			return i;
	}
	return -1;
	if (i == -1)
	{
		cout << "没有找到" << endl;
		return 0;
	}
	else
	{
		cout << "已找到" << endl;
		cout << s[i];
	}
}*/
void select::input()
{
	char ch;
	string inputLine; // 用于接受用户输入的整行数据

	do
	{
		cout << "请输入教师信息（课程名称，课程编号，教师名称），各项信息之间用空格隔开:" << endl;
		getline(cin, inputLine); // 获取整行输入
		istringstream iss(inputLine); // 创建字符串流

		// 从字符串流读取教师信息
		s[category].teacher::input(iss);

		// 需要调用classone和txt的input方法，这要求它们能够处理字符串流输入
		// 如果目前的input函数不接受istringstream参数，则需要进行相应修改
		// 假设classone::input()和txt::input()已经被修改为接受istringstream参数
		cout << "请输入上课信息（上课时间，课时数），各项信息之间用空格隔开:" << endl;
		getline(cin, inputLine); // 获取整行输入
		iss.str(inputLine); // 重新设置字符串流
		iss.clear(); // 清除流状态
		c[category].classone::input(iss);

		cout << "请输入课程其他信息（课程性质，学分数）各项信息之间用空格隔开:" << endl;
		getline(cin, inputLine); // 获取整行输入
		iss.str(inputLine); // 重新设置字符串流
		iss.clear(); // 清除流状态
		t[category].txt::input(iss);

		category++;

		cout << "已经录入了" << category << "门专业课,是否需要继续录入 Y/N" << endl;
		cin >> ch;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 忽略剩余输入
	} while (toupper(ch) == 'Y'); // toupper函数将小写字母转化为大写字母
}
void select::inputs()
{
	char ch;
	string line; // 用于存储用户输入的字符串

	do
	{
		cout << "请输入课程信息：" << endl;
		getline(cin, line); // 读取整行输入作为字符串

		// 创建一个istringstream对象，其中包含了用户输入的数据
		istringstream iss(line);

		s[category].teacher::input(iss);
		c[category].classone::input(iss);
		ty[category].Community::input(iss);

		category++;

		cout << "已经录入了" << category << "门专业课,是否需要继续录入 Y/N" << endl;
		cin >> ch;
		cin.ignore(); // 忽略之前读取的换行符

	} while (toupper(ch) == 'Y'); // toupper可以将小写字母转化为大写字母

	// 在每次循环末尾清除输入流的状态并忽略剩余字符
}
void select::saveTofile()
{
	ofstream ofile;
	ofile.open("E://专业课课程信息.txt");
	if (category == 0)
		cout << "无专业课可以存入" << endl;
	else
	{
		ofile << "课程名称" << '\t' << "课程编号" << '\t' << "教师名称" << '\t' << "上课时间" << '\t' << "课时" << '\t' << "开课学期" << '\t' << "学分" << '\t' << "课程性质" << '\t' << "所属专业" << endl;
		for (int i = 0; i < category; i++)
		{
			s[i].teacher::output(ofile);
			c[i].classone::output(ofile);
			t[i].txt::output(ofile);
		}
	}
	cout << "添加成功！" << endl;
}
void select::FileToGoods()
{
	ifstream ifile;
	ifile.open("E://专业课课程信息.txt");
	string line;
	int index = 0;
	while (getline(ifile, line) && index < 100)
	{
		istringstream iss_s(line.substr(0, 100)); // 需要计算课程数据的长度  
		teacher tempTeacher;
		tempTeacher.input(iss_s); // 假设input函数接受istringstream参数  
		s[index] = tempTeacher;
		index++;
	}
	ifile.close();
}