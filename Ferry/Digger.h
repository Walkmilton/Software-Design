#pragma once
#include "Vehicle.h"

class Digger: public Vehicle
{
private:
	int tracks;
	float shovelSize;
	
public:
	//constructors and destructor
	Digger(int, string, float);
	Digger(int, float, string, float);
	~Digger();
	
	//getters and setters
	int getTracks();
	void setTracks(int t);
	
	float getShovelSize();
	void setShovelSize(float s);
};
