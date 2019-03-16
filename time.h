#pragma once
#include<iostream>
class time {
public:
	time();
	time(int M, int D, int H);
	~time();
	void setMonth(int M);
	void setDay(int D);
	void setHour(int H);

	bool operator<=(time* T);
	bool operator>=(time* T);
	bool operator==(time* T);
	bool operator!=(time* T);
private:
	int day;
	int month;
	int hour;


};
