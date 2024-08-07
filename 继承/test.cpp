#include<iostream>
using namespace std;

class person
{
public:
	person(const string name = "peter")
		:_name(name)
	{
		cout << _name << endl;
	}

	person(const person& s)
		:_name(s._name)
	{
		cout << "copy" << endl;
	}

	person& operator=(const person& s)
	{
		cout << "operator=" << endl;
		if (this != &s)
		{
			_name = s._name;
		}
		return *this;
	}

	~person()
	{
		cout << "~person" << endl;
	}
protected:
	string _name;
};


class student : public person
{
public:
	student(const string name, const int num)
		:person(_name)
		,_num(num)
	{
		cout << "student" << endl;
	}

	student(const student& s)
		:person(s)
		,_num(s._num)
	{
		cout << "student copy" << endl;
	}

	student& operator=(const student& s)
	{
		if (this != &s)
		{
			person::operator=(s);
		}
	}

	~student()
	{
		cout << "~student" << endl;
	}
protected:
	int _num;
};

int main()
{
	student s1("peter", 1);
	student s2(s1);
	student s3 ("rose", 17);

	return 0;
}