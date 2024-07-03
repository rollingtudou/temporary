#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
class student
{
	string id;
	string studentname;
	string major;
public:
	void setid(string id) { this->id = id; }
	void setstudentname(string studentname) { this->studentname = studentname; }
	void setmajor(string major) { this->major = major; }
	string getid() { return id; }
	string getstudentname() { return studentname; }
	string getmajor() { return major; }
	student(string id = "0", string studentname = "0", string major = "0");
	friend ostream& operator<<(ostream& os, const student& m);
	friend istream& operator>>(istream& is, student& m);
};
#endif
