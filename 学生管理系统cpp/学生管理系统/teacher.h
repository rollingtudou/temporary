#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>
#include<string>
#include <sstream>
using namespace std;
class teacher
{
	string classname;
	string num;
	string teachername;

public:
	void setclassname(string classname) { this->classname = classname; }
	void setnum(string num) { this->num = num; }
	void setteachername(string teachername) { this->teachername = teachername; }
	string getclassname() { return classname; }
	string getnum() { return num; }
	string getteachername() { return teachername; }
	teacher(string classname = "00", string num = "00", string teachername = "нч");
	void input(istringstream& iss);
	void output(std::ofstream& ofile);
};
#endif
