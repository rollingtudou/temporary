#ifndef TXT_H
#define TXT_H
#include "classone.h"
#include"teacher.h"
class  txt:public classone,public teacher
{
	string course;
	string classfeature;
public:
	void setclassfeature(string classfeature) { this->classfeature = classfeature; }
	string getclassfeature() { return classfeature; }
	void setcourse(string course) { this->course = course; }
	string getcourse() { return course; }
	txt(string classname = "00", string num = "00", string teachername = "нч", string Date = "00", int classtime = 0, string opensemester = "00", float score = 0,string classfeature="00", string course = "00");
	void input(istringstream& iss);
	void output(std::ofstream& ofile);
};
#endif
