#include "MoneyHandler.h"
#include <iostream>

using namespace std;

MoneyHandler::MoneyHandler()
{
	
}

MoneyHandler::~MoneyHandler()
{
	
}

void MoneyHandler::change()
{
	//declaring variables
	int fifty = 0;
	int twenty = 0;
	int ten = 0;
	int five = 0;
	int two = 0;
	int one = 0;
	
	
	//Produce change
	while (money > 0)
	{
		if (money >= 50)
		{
			fifty++;
			money = money - 50;
		}
		else if (money >= 20)
		{
			twenty++;
			money = money - 20;
		}
		else if (money >= 10)
		{
			ten++;
			money = money - 10;
		}
		else if (money >= 5)
		{
			five++;
			money = money - 5;
		}
		else if (money >= 2)
		{
			two++;
			money = money - 2;
		}
		else if (money >= 1)
		{
			one++;
			money = money - 1;
		}
	}
	
	//display the coins needed
	cout << "Producing Change " << endl;
	cout << fifty << " x 50p" << endl;
	cout << twenty << " x 20p" << endl;
	cout << ten << " x 10p" << endl;
	cout << five <<" x 5p" << endl;
	cout << two << " x 2p" << endl;
	cout << one << " x 1p" << endl << endl;

}

//getting coins
void MoneyHandler::getCoins()
{
	cout << "Please insert money" << endl;
	cin >> money;
	cout << endl << endl;
}

bool MoneyHandler::verify(Snack snack)
{
	if (money >= snack.getAmmount())
	{
		return true;
	}
	else
	{
		return false;
	}
}

//getter and setter
float MoneyHandler::getMoney()
{
	return money;
}

void MoneyHandler::setMoney(float m)
{
	money = m;
}
