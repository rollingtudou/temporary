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
		cout << "����������ѧ����ѧ�ţ�������רҵ" << endl;
		is >> m.id >> m.studentname>>m.major;
	}
	else
		is >> m.id >> m.studentname >> m.major;
	return is;
}