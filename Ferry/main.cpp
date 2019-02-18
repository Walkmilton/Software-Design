
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Lorry.h"
#include "ArticulatedLorry.h"
#include "Digger.h"

using namespace std;

//function prototype
void newVehicle(Vehicle vehicle);
void report(Vehicle vehicle);

const int totalLength = 20;
int currentLength = totalLength;

int main()
{
	
}

/*
	==========
	The following to functions would be implimented if the program was to run, but as this is not required they are dummy functions
	==========
 */

//Function that checks that there is enough room for the vehicle, and updates the current length available
void newVehicle(Vehicle vehicle)
{
	if (totalLength - vehicle.getLength() > 0)
	{
		currentLength = currentLength - vehicle.getLength();
	}
	else
	{
		cout << "There is no room left in this lorry" << endl;
	}
}

//Function that produces a list of vehicles on board, including their length and registration
void report(Vehicle vehicle)
{
	cout << "Vehicle Registration: " << vehicle.getReg() << endl;
	cout << "This vehicle has a length of " << vehicle.getLength() << endl << endl;
	
}
