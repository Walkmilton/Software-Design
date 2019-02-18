
#include "Lorry.h"

//constructor and destructor
Lorry::Lorry(int m, string r, float l) : Vehicle(r, l)
{
	maxLoad = m;
}



Lorry::~Lorry()
{
	
}

//getters and setters
int Lorry::getMaxLoad()
{
	return maxLoad;
}

void Lorry::setMaxLoad(int m)
{
	maxLoad = m;
}
