#include<iostream>
using namespace std;

template<class T>
bool LessFunc(const T& left, const T& right)
{
	return left < right;
}

template<>
bool LessFunc<Date*>(Date* const& T& left, Date* const& T& right)
{
	return *left < *right;
}