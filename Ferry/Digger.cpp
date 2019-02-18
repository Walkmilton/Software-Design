

#include "Digger.h"

//Constructors and destructor
Digger::Digger(int t, string r, float l) : Vehicle(r, l)
{
	tracks = t;
	shovelSize = 10;
}

Digger::Digger(int t, float s, string r, float l) : Vehicle(r, l)
{
	tracks = t;
	shovelSize = s;
}

Digger::~Digger()
{
	
}

//getters and setters
int Digger::getTracks()
{
	return tracks;
}

void Digger::setTracks(int t)
{
	tracks = t;
}

float Digger::getShovelSize()
{
	return shovelSize;
}

void Digger::setShovelSize(float s)
{
	shovelSize = s;
}
