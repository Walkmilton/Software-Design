#pragma once

#include <string>

using namespace std;

class Snack {
private:
	string name;
	float cost;
	int ammount;
	
public:
	//constructor and destructor
	Snack(string, int);
	~Snack();
	
	//getters and setters
	string getName();
	void setName(string);
	
	float getCost();
	void setCost(float);
	
	int getAmmount();
	void setAmmount(int);
};
