
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

//Maxmimum number of accounts
const int maxAccount = 10;

//Current number of accounts
int currentAccount = 0;

int attempts = 0;

Account account[maxAccount];

void menuChoice(int);
void createAcc();
void login();
bool notLowercase(string);
int hashString(string password);

int main() {

	int menu = 0;
	
	//menu system
	while (menu != -1)
	{
		cout << endl << endl << "This is a simple account system" << endl;
		cout << "Enter -1 to exit" << endl;
		cout << "Enter 1 to register" << endl;
		cout << "Enter 2 to login" << endl;
		cin >> menu;
		menuChoice(menu);
	}
	
	cout << "Exiting..." << endl;

}


void menuChoice(int menu)
{

	//create account
	if (menu == 1)
	{
		if (currentAccount < maxAccount)
		{
			createAcc();
		}
		else
		{
			cout << "The maximum number of accounts have been reached" << endl;
		}
	}
	//login
	else if (menu == 2)
	{
		login();
	}
	else if (menu > 2)
	{
		cout << "Invalid Choice" << endl << endl;
	}
	
}

//create account
void createAcc()
{
	string username;
	string password;
	string admin;
	int hashed;
	bool notValid = false;
	
	cout << "Creating account" << endl;
	cout << "Please enter a username: " << endl;
	cin >> username;
	//validate username
	do
	{
		cout << endl << "Please enter a password containing only lowercase letters: " << endl;
		cin >> password;
		notValid = notLowercase(password);
		
	} while (notValid);
	
	cout << endl << "Enter 'admin' if this account will be an admin account: " << endl;
	cin >> admin;
	
	//hash the password
	hashed = hashString(password);
	
	//set the credentials
	account[currentAccount].setUsername(username);
	account[currentAccount].setHash(hashed);
	
	if (admin == "admin")
	{
		account[currentAccount].setAdmin(true);
	}
	else
	{
		account[currentAccount].setAdmin(false);
	}
}

//check for lowercase
bool notLowercase(string password)
{
	for (int i = 0; i < password.length(); i++)
	{
		if (!islower(password[i]))
		{
			return true;
		}
	}
	return false;
}

//hash the password
int hashString(string password)
{
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int sum = 0;
	
	
	for (int i = 0; i < password.length(); i++)
	{
		for (int x = 0; x < 26; x++)
		{
			if (password[i] == alphabet[x])
			{
				sum = sum + x;
			}
		}
	}

	return sum;
	
}

void login()
{
	//login
	string username;
	string password;
	int hashed;
	bool admin;
	bool none = true;
	
	if (attempts != 3)
	{
		cout << "Please enter your username: " << endl;
		cin >> username;
		cout << endl << "Please enter your password: " << endl;
		cin >> password;
		
		hashed = hashString(password);
		
		//find correct account, if none add a failed attempt to the counter and display error
		for (int i = 0; i < maxAccount; i++)
		{
			if (account[i].getUsername() == username)
			{
				if (account[i].getHash() == hashed)
				{
					cout << "Welcome" << endl;
					admin = account[i].getAdmin();
					if (admin)
					{
						cout << "You have an admin account" << endl;
					}
					else
					{
						cout << "You have a normal account" << endl;
					}
					none = false;
				}
				else
				{
					attempts++;
					cout << "Incorrect password" << endl;
				}
			}
		}
		if (none)
		{
			cout << "There are no accounts with this username" << endl;
		}
	}
	else
	{
		cout << "You have exceeded the number of attempts" << endl;
	}
}
