#include"student.h"
student::student(string id, string studentname, string major)
{
	this->id = id;
	this->studentname = studentname;
	this->major = major;
}
ostream& operator<<(ostream& os, const student& m)
{
	os << m.id << '\t' << m.studentname << '\t' << m.major << endl;
	return os;
}
istream& operator>>(istream& is, student& m)
{
	if (&cin == &is)
	{
		cout << "请依次输入学生的学号，姓名，专业" << endl;
		is >> m.id >> m.studentname>>m.major;
	}
	else
		is >> m.id >> m.studentname >> m.major;
	return is;
}