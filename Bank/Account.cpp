#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

//constructor
Account::Account()
{
	
}

//destructor
Account::~Account()
{
	
}

//getters and setters
string Account::getUsername()
{
	return username;
}

void Account::setUsername(string u)
{
	username = u;
}

int Account::getHash()
{
	return passwordHash;
}

void Account::setHash(int p)
{
	passwordHash = p;
}

bool Account::getAdmin()
{
	return admin;
}

void Account::setAdmin(bool a)
{
	admin = a;
}
