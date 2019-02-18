#pragma once
#include <string>
#include "Snack.h"
#include "MoneyHandler.h"

using namespace std;

class VendorMechanism {
	
	
public:
	
	//constructor and destructor
	VendorMechanism();
	~VendorMechanism();
	
	//dispence a snack
	void dispenceSnack(Snack&, MoneyHandler&);
};
