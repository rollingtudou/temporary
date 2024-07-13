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
	return false; // ��ȷ����false
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

// this���ı�  
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
			_day += GetMonthDay(_year, _month); // ������Ҫһ����������ȡÿ���µ�����
		}
	}
	return *this; // ���ض����������
}


Date Date::operator+(int day)
{
	Date tmp = *this;

	tmp += day;

	return tmp;
}

// ǰ��++
Date& Date::operator++()
{
	*this += 1;

	return *this;                     
}

// ����++
Date Date::operator++(int)
{
	Date temp = *this;
	*this += 1;

	return temp;
}

bool Date::CheckDate()
{
	if (_month < 1 || _month > 12
		|| _day < 1 || _day > GetMonthDay(_year, _month))
	{
		return false;
	}
	else
	{
		return true;
	}
}

ostream& operator<<(ostream& out, const Date& d)
{

	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;

	return out;
}

istream& operator>>(istream& in, Date& d)
{
	cout << "���Դ����������� > ";
	in >> d._year >> d._month >> d._day;

	if (!d.CheckDate())
	{
		cout << "Date is error!" << endl;
	}

	return in;
}