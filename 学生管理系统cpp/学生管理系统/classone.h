#ifndef CLASSONE_H
#define CLASSONE_H
#include"teacher.h"
class classone:public teacher
{
	string Date;
	int classtime;
	string opensemester;
	float score;
	string classfeature;
public:
	void setDate(string Date) { this->Date = Date; }
	void setclasstime(int classtime) { this->classtime = classtime; }
	void setopensemester(string opensemester) { this->opensemester = opensemester; }
	void setscore(float score) { this->score = score; }
	string getDate() { return Date; }
	int getclasstime() { return classtime; }
	string getopensemester() { return opensemester; }
	float getscore() { return score; }
	classone(string classname = "00", string num = "00", string teachername = "нч", string Date = "00", int classtime = 0, string opensemester = "00", float score = 0);
	void input(istringstream& iss);
	void output(std::ofstream& ofile);
};
#endif