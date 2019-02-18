#pragma once
#include <string>

using namespace std;

class Vehicle {
	

private:
	string registration;
	float length;
public:
	//Constructor and Destructor
	Vehicle(string, float);
	~Vehicle();
	
	//Getters and Setters
	void setReg(string r);
	string getReg();
	
	void setLength(float l);
	float getLength();
};
