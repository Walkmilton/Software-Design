
#pragma once
#include <string>

using namespace std;

class Account
{
	//private variavles
private:
	string username;
	int passwordHash;
	bool admin;
	
	
public:
	//constructor and destructor
	Account();
	~Account();
	
	//getters and setters
	string getUsername();
	void setUsername(string u);
	
	int getHash();
	void setHash(int p);
	
	bool getAdmin();
	void setAdmin(bool a);
	
};
