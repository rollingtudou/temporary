#ifndef COMUNITY_H
#define COMUNITY_H
#include <fstream>
#include"teacher.h"
#include"classone.h"
class Community:public teacher,classone
{
	string classfeature1;
	string facecourse;
	string opencollege;
public:
	void setclassfeature1(string classfeature1) { this->classfeature1 = classfeature1; }
	string getclassfeature1() { return classfeature1; }
	void setfacecourse(string facecourse) { this->facecourse = facecourse; }
	void setopencollege(string opencollege) { this->opencollege = opencollege; }
	string getfacecourse() { return facecourse; }
	string getopencollege() { return opencollege; }
	Community(string classname = "00", string num = "00", string teachername = "нч", string Date = "00", int classtime = 0, string opensemester = "00", float score = 0,string classfeature1="00", string facecourse = "00", string opencollege = "00");
	void input(istringstream& iss);
	void output(std::ofstream&ofile);
};
#endif