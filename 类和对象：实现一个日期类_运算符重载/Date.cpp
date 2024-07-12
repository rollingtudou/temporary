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

}


bool operator<=(const Date& d);
bool operator>(const Date& d);
bool operator>=(const Date& d);
bool operator==(const Date& d);
bool operator!=(const Date& d);

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


Date& operator+(int day);

Date operator-(int day);