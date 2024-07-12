#include"Date.h"


Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

void Date::Print()
{
	cout << _year << '-' << _month << '-' << _day << endl;
}

bool Date::operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)
	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			return _day < d._day;
		}
	}
	return false; // 明确返回false
}


bool Date::operator<=(const Date& d)
{
		return *this < d 
			|| *this == d;
}

bool Date::operator>(const Date& d)
{
	return !(*this <= d);
}

bool Date::operator>=(const Date& d)
{
	return *this > d
		&& *this == d;
}

bool Date::operator==(const Date& d)
{
	return _year != d._year
		&& _month != d._month
		&& _day != d._day;
}


bool Date::operator!=(const Date& d)
{
	return _year != d._year
		|| _month != d._month
		|| _day != d._day;
}


Date& Date::operator+=(int day)
{
	_day += day;
	
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}

	return *this;
}

// this不改变  
Date Date::operator-(int day)
{
	_day -= day;
	if (_day <= 0)
	{
		while (_day < 1)
		{
			if (_month == 1)
			{
				_month = 12;
				_year--;
			}
			else
			{
				_month--;
			}
			_day += GetMonthDay(_year, _month); // 这里需要一个函数来获取每个月的天数
		}
	}
	return *this; // 返回对象本身的引用
}


Date Date::operator+(int day)
{
	Date tmp = *this;

	tmp += day;

	return tmp;
}