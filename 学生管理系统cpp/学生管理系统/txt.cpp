#include"txt.h"
#include <fstream>
txt::txt(string classname , string num , string teachername , string Date , int classtime , string opensemester , float score , string classfeature , string course ):teacher(classname,num,teachername),classone(classname, num, teachername,Date,classtime,opensemester, score)
{
	this->classfeature = classfeature;
	this->course = course;
}
void txt::input(istringstream& iss)
{
	string cf, cs;
	cout << "课程性质，所属专业" << endl;
	cin >> cf >> cs;
	setclassfeature(cf);
	setcourse(cs);
}
void txt::output(std::ofstream& ofile) 
{
	ofile << getclassfeature() << '\t' << getcourse() << endl;
}