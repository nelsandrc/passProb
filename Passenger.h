#pragma once
#include "time.h"
class Passenger
{
public:
	Passenger();

	bool operator<=(Passenger& P) const;
	bool operator>=(Passenger& P) const;
	bool operator==(Passenger& P) const;

	std::string getName();
	double getFare();
	bool isFrequentFlyer();
	time* getPurchaseTime();

	void setName(std::string newName);
	void setFare(double newFare);
	void setFlyerStatus(bool newStatus);
	void setTime(time* newTime);

	~Passenger();
private:
	std::string fullName;
	double fare;
	bool frequentFlyerStatus;
	time* purchaseTime;
};

