

#include "Vehicle.h"

//constructor and destructor
Vehicle::Vehicle(string reg, float l)
{
	reg = registration;
	l = length;
	
}

Vehicle::~Vehicle()
{
	
}

//getters and setters
void Vehicle::setReg(string r)
{
	registration = r;
}

string Vehicle::getReg()
{
	return registration;
}

void Vehicle::setLength(float l)
{
	length = l;
}

float Vehicle::getLength()
{
	return length;
}
