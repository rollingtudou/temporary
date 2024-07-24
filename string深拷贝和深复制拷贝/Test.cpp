#include<assert.h>
#include<iostream>
#include<string.h>

class string
{
public:

	string(const char* str = "")
	{
		if (str == nullptr)
		{
			_str = nullptr;
			assert(false);
			return;
		}

		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	string(const string& s)
		:_str(nullptr)
	{
		string tmp(s._str);
		swap(_str, tmp._str);
	}

	string& operator=(string s)
	{
		swap(_str, s._str);
		return *this;
	}

	~string()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}
private:

	char* _str;

};