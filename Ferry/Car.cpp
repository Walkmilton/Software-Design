

#include "Car.h"

//constructor and destructor
Car::Car(int s, string r, float l) : Vehicle(r, l)
{
	seats = s;
}

Car::~Car()
{
	
}

//getter and setter
int Car::getSeats()
{
	return seats;
}

void Car::setSeats(int s)
{
	seats = s;
}
