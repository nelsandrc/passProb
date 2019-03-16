#include "pch.h"
#include "Passenger.h"


Passenger::Passenger()
{
	fullName = "DEFAULT_NAME";
	fare = -1.0;
	frequentFlyerStatus = false;
	purchaseTime = new time(12, 31, 23);
}

bool Passenger::operator<=(Passenger & P) const
{
	if (this->fare != P.fare) {
		return (this->fare <= P.fare);
	} //Frequent flyer status is a boolean value.
	else if(this->frequentFlyerStatus != P.frequentFlyerStatus){
		return (this->frequentFlyerStatus <= P.frequentFlyerStatus);
	}//Time is object of the time class.
	else if (this->purchaseTime != P.purchaseTime) {
		return (this->purchaseTime <= P.purchaseTime); ///TODO: Verify this logic is correct.
	}
	else
		return true;
}

bool Passenger::operator>=(Passenger & P) const
{
	if (this->fare != P.fare) {
		return (this->fare >= P.fare);
	} //Frequent flyer status is a boolean value.
	else if (this->frequentFlyerStatus != P.frequentFlyerStatus) {
		return (this->frequentFlyerStatus >= P.frequentFlyerStatus);
	}//Time is object of the time class.
	else if (this->purchaseTime != P.purchaseTime) {
		return (this->purchaseTime >= P.purchaseTime); ///TODO: Verify this logic is correct.
	}
	else
		return true;
}

bool Passenger::operator==(Passenger & P) const
{
	return (this->fullName == P.fullName) && (this->fare == P.fare) && (this->frequentFlyerStatus == P.frequentFlyerStatus) && (this->purchaseTime == P.purchaseTime);
}

std::string Passenger::getName()
{
	return fullName;
}

double Passenger::getFare()
{
	return fare;
}

bool Passenger::isFrequentFlyer()
{
	return frequentFlyerStatus;
}

time * Passenger::getPurchaseTime()
{
	return purchaseTime;
}

void Passenger::setName(std::string newName)
{
	fullName = newName;
}

void Passenger::setFare(double newFare)
{
	fare = newFare;
}

void Passenger::setFlyerStatus(bool newStatus)
{
	frequentFlyerStatus = newStatus;
}

void Passenger::setTime(time * newTime)
{
	purchaseTime = newTime;
}


Passenger::~Passenger()
{
	delete purchaseTime;
}
