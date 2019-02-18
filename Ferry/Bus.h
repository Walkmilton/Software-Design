
#pragma once
#include "Vehicle.h"

class Bus: public Vehicle {
	
private:
	int PSV;
	int capacity;
	
public:
	//constructors and destructors
	Bus(int, int, string, float);
	~Bus();
	
	//getters and setters
	int getPSV();
	void setPSV(int p);
	
	int getCapacity();
	void setCapacity(int c);
	
};
