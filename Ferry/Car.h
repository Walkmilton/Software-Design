#pragma once
#include "Vehicle.h"

class Car: public Vehicle {


private:
	int seats;
	
public:
	//constructor and destructor
	Car(int, string, float);
	~Car();
	
	//setter and getter
	int getSeats();
	void setSeats(int s);
	
};
