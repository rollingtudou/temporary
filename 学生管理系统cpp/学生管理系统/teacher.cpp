#include"teacher.h"
#include <fstream>
teacher::teacher(string classname, string num, string teachername)
{
	this->classname = classname;
	this->num = num;
	this->teachername = teachername;
}
void teacher::input(istringstream& iss)
{
	cout << "请输入课程名称，课程编号，教师名称" << endl;
	string c,n,t;
	iss >> c>>n>>t;
	setclassname(c);
	setnum(n);
	setteachername(t);
}
void teacher::output(std::ofstream& ofile) 
{
	ofile << getclassname() << '\t' << getnum() << '\t' << getteachername() << '\t';
}

