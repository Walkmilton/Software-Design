#pragma once
#include "Vehicle.h"

class Lorry: public Vehicle
{
private:
	int maxLoad;
	
public:
	//constructors and destructor
	Lorry(int, string, float);
	~Lorry();
	
	//getters and setters
	int getMaxLoad();
	void setMaxLoad(int m);
	
	
};
