#include"classone.h"
#include <fstream>
classone::classone(string classname, string num, string teachername, string Date, int classtime, string opensemester, float score):teacher(classname,num,teachername)
{
	this->Date = Date;
	this->classtime = classtime;
	this->opensemester = opensemester;
	this->score = score;
}
void classone::input(istringstream& iss)
{
	cout << "上课时间，课时，开课学期，学分" << endl;
	string D, op;
	float sc;
	int cl;
	iss >> D >> cl >> op >> sc;
	setDate(D);
	setclasstime(cl);
	setopensemester(op);
	setscore(sc);
}
void classone::output(std::ofstream& ofile) 
{
	ofile << getDate() << '\t' << getclasstime() << '\t' << getopensemester() << '\t' << getscore() << '\t';
}