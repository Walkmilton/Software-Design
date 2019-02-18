#pragma once
#include "Lorry.h"


class ArticulatedLorry: public Lorry
{
private:
	float cabLength;
	float trailerLength;
	
public:
	//constructors and destructor
	ArticulatedLorry(float, float, int, string, float);
	~ArticulatedLorry();
	
	//getters and setters
	float getCabLength();
	void setcabLength(float c);
	
	float getTrailerLength();
	void setTrailerLength(float t);
	
};
