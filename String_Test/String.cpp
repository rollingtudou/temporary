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

	void insert(size_t pos, const char* str);
	void erase(size_t pos, size_t len = npos);

	size_t find(char ch, size_t pos = 0);
	size_t find(const char* str, size_t pos = 0);
	string substr(size_t pos = 0, size_t len = npos);
}