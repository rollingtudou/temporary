#include"string.h"
//头文件包错了
namespace bee
{
	const size_t string::npos = -1;

	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
	}

	void string::push_back(char ch)
	{
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : _capacity * 2);
		}

		_str[_size] = ch;
		_size++;
		_str[_size] = '\0';
	}

	string& string::operator+=(char ch)
	{
		push_back(ch);

		return *this;
	}

	string& string::operator+=(const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}

		strcpy(_str + _size, str);
		_size += len;

		return *this;
	}

	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}

		strcpy(_str + _size, str);
		_size += len;
	}



	void string::insert(size_t pos, char ch)
	{
		assert(pos < _size);

		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : _capacity * 2);
		}

		// 挪动数据
		size_t end = _size;
		while (end > pos)
		{
			_str[end] = _str[end - 1];
			--end;
		}

		_str[pos] = ch;
		++_size;
	}

	void string::insert(size_t pos, const char* str)
	{
		assert(pos < _size);

		size_t len = strlen(str);
		if (len + _size > _capacity)
		{
			reserve(_size +len > 2 * _capacity ? _size + len : 2 * _capacity);
		}

		size_t end = _size + len;
		while (end > pos + len - 1)
		{
			_str[end] = _str[end - len];
			end--;
		}

		for (size_t i = 0; i < len; i++)
		{
			_str[pos + i] = str[i];
		}

		_size += len;
	}
	void string::erase(size_t pos, size_t len)
	{
		assert(pos < _size);

		if (pos + len >= _size)
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else
		{
			for (size_t i = pos + len; i <= _size; i++)
			{
				_str[i - len] = _str[i];
			}

			_size -= len;
		}
	}

	size_t string::find(char ch, size_t pos)
	{
		assert(pos < _size);

		for (size_t i = pos; i < _size; ++i)
		{
			if (_str[i] == ch)
			{
				return i;
			}
		}

		return npos;
	}
	size_t string::find(const char* str, size_t pos)
	{
		assert(pos < _size);

		const char* ptr = strstr(_str + pos, str);
		if (ptr == nullptr)
		{
			return npos;
		}
		else
		{
			return ptr - _str;
		}
	}


	string string::substr(size_t pos, size_t len)
	{
		assert(pos < _size);

		if (pos + len > _size)
		{
			len = _size - pos;
		}

		string sub;
		for (size_t i = 0; i < len; i++)
		{
			sub[i] += _str[pos + i];
		}
		
		return sub;
	}

	bool operator==(const string& s1, const string& s2)
	{
		return strcmp(s1.c_str(), s2.c_str()) == 0;
	}

	bool operator<(const string& s1, const string& s2)
	{
		return strcmp(s1.c_str(), s2.c_str()) < 0;
	}

	bool operator<=(const string& s1, const string& s2)
	{
		return (s1 < s2) || (s1 == s2);
	}

	bool operator>(const string& s1, const string& s2)
	{
		return !(s1 <= s2);
	}

	bool operator>=(const string& s1, const string& s2)
	{
		return !(s1 < s2);
	}
	
	bool operator!=(const string& s1, const string& s2)
	{
		return !(s1 == s2);
	}


	ostream& operator<<(ostream& out, const string& s)
	{
		for (auto ch: s)
		{
			out << ch;
		}

		return out;
	}

	istream& operator>>(istream& in, string& s)
	{
		s.clear();

		char buff[256];
		int i = 0;

		char ch;
		ch = in.get();
		while (ch != ' ' && ch != '\n' && ch != EOF)
		{
			buff[i++] = ch;

			// 255存的是最后一位'\0'
			if (i == 255)
			{
				buff[255] = '\0';
				s += buff;
				i = 0;
			}

			ch = in.get();
		}

		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}

		return in;
	}



}