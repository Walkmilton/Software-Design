

#include "Snack.h"

//constructor
Snack::Snack(string n, int a)
{
	name = n;
	ammount = a;
	cost = 50;
}

//destructor
Snack::~Snack()
{
	
}

//getters and setters
string Snack::getName()
{
	return name;
}

void Snack::setName(string n)
{
	name = n;
}

float Snack::getCost()
{
	return cost;
}

void Snack::setCost(float c)
{
	cost = c;
}

int Snack::getAmmount()
{
	return ammount;
}

void Snack::setAmmount(int a)
{
	ammount = a;
}
