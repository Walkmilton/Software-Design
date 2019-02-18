
#include "Bus.h"

//constructor and destructor
Bus::Bus(int p, int c, string r, float l) : Vehicle(r, l)
{
	PSV = p;
	capacity = c;
}

Bus::~Bus()
{
	
}

//getters and setters
int Bus::getPSV()
{
	return PSV;
}

void Bus::setPSV(int p)
{
	PSV = p;
}

int Bus::getCapacity()
{
	return capacity;
}

void Bus::setCapacity(int c)
{
	capacity = c;
}

