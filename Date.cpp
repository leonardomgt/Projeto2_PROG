#include <iostream>
#include "Date.h"

using namespace std;



Date::Date()
{
	year = 0;
	month = 0;
	day = 0;
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Date::Date(unsigned int day_p, unsigned int month_p, unsigned int year_p, unsigned int hour_p, unsigned int min_p, unsigned int sec_p)
{
	year = year_p;
	month = month_p;
	day = day_p;
	hours = hour_p;
	minutes = min_p;
	seconds = sec_p;
}

unsigned int Date::getYear()
{
	return year;
}

unsigned int Date::getMonth()
{
	return month;
}

unsigned int Date::getDay()
{
	return day;
}

unsigned int Date::getHours()
{
	return hours;
}

unsigned int Date::getMinutes()
{
	return minutes;
}

unsigned int Date::getSeconds()
{
	return seconds;
}

Date::~Date()
{
}
