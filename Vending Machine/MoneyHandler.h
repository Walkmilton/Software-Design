#pragma once
#include "Snack.h"

class MoneyHandler {

private:
	//variables
	float money;
	
public:
	//constructor and destructor
	MoneyHandler();
	~MoneyHandler();
	
	//functions
	void change();
	void getCoins();
	bool verify(Snack);
	
	//getter and setter
	float getMoney();
	void setMoney(float);
	
};
