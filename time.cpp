#include "pch.h"
#include "time.h"


time::time()
{
	month = -1;
	day = -1;
	hour = -1;
}

time::time(int M, int D, int H)
{
	this->setMonth(M);
	this->setDay(D);
	this->setHour(H);
}


time::~time()
{
	//Nothing needed
}

void time::setMonth(int M)
{
	if (M > 0 && M <= 12) {
		month = M;
	}
	else {
		std::cout << "Invalid month" << std::endl;
	}
}

void time::setDay(int D)
{
	if (D > 0 && D <= 31) {
		day = D;
	}
	else {
		std::cout << "Invalid day" << std::endl;
	}
}

void time::setHour(int H)
{
	if (H >= 0 && H <= 23) {
		hour = H;
	}
	else {
		std::cout << "Invalid hour" << std::endl;
	}
}

bool time::operator<=(time* T)
{
	if (this == T)
		return true;
	else if (this->month != T->month)
		return this->month <= T->month;
	else if (this->day != T->day)
		return (this->day <= T->day);
	else if (this->hour != T->hour)
		return (this->hour <= T->hour);
}

bool time::operator>=(time* T)
{
	if (this == T)
		return true;
	else if (this->month != T->month)
		return this->month >= T->month;
	else if (this->day != T->day)
		return (this->day >= T->day);
	else if (this->hour != T->hour)
		return (this->hour >= T->hour);
}

bool time::operator==(time* T)
{
	return (day == T->day) && (month == T->month) && (hour == T->hour);
}

bool time::operator!=(time* T)
{
	return !((day == T->day) && (month == T->month) && (hour == T->hour));
}
