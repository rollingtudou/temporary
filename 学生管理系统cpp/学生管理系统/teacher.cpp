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
	cout << "������γ����ƣ��γ̱�ţ���ʦ����" << endl;
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

