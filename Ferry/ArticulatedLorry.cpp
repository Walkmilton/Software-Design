
#include "ArticulatedLorry.h"

ArticulatedLorry::ArticulatedLorry(float c, float tl, int m, string r, float l) : Lorry(m, r, l)
{
	cabLength = c;
	trailerLength = tl;
}

ArticulatedLorry::~ArticulatedLorry()
{
	
}

float ArticulatedLorry::getCabLength()
{
	return cabLength;
}

void ArticulatedLorry::setcabLength(float c)
{
	cabLength = c;
}

float ArticulatedLorry::getTrailerLength()
{
	return trailerLength;
}

void ArticulatedLorry::setTrailerLength(float t)
{
	trailerLength = t;
}
