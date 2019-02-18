#include "Snack.h"
#include "VendorMechanism.h"
#include "MoneyHandler.h"
#include <iostream>

using namespace std;

//creating vending machine
Snack chocBar("milk chocolate bar", 5);
Snack mBar("muesli bar", 5);
Snack puffs("cheese puffs", 5);
Snack apple("apple", 5);
Snack popcorn("popcorn", 5);


VendorMechanism machine;
MoneyHandler moneyhandler;

//functions
void menuChoice(int);
void summary(Snack);

int main()
{
	int menu = 0;
	
	//inserting money
	moneyhandler.getCoins();
	
	//menu
	while (menu != -1)
	{
		cout << "Please press a button, 0 to 6" << endl;
		cout << "1 for a milk chocolate bar" << endl;
		cout << "2 for a muesli bar" << endl;
		cout << "3 for a pack of cheese puffs" << endl;
		cout << "4 for an appe" << endl;
		cout << "5 for a bag of popcorn" << endl;
		cout << "6 for a summary" << endl;
		cout << "0 to insert more money" << endl;
		cin >> menu;
		menuChoice(menu);
	}
	
}


void menuChoice(int choice)
{
	//dispense snack according to choice
	if (choice == 1)
	{
		if (moneyhandler.verify(chocBar))
		{
			machine.dispenceSnack(chocBar, moneyhandler);
		}
		else
		{
			cout << "insufficient funds" << endl;
			moneyhandler.change();
		}
	}
	if (choice == 2)
	{
		if (moneyhandler.verify(mBar))
		{
			machine.dispenceSnack(mBar, moneyhandler);
		}
		else
		{
			cout << "insufficient funds" << endl;
			moneyhandler.change();
		}

	}
	if (choice == 3)
	{
		if (moneyhandler.verify(puffs))
		{
			machine.dispenceSnack(puffs, moneyhandler);
		}
		else
		{
			cout << "insufficient funds" << endl;
			moneyhandler.change();
		}

	}
	if (choice == 4)
	{
		if (moneyhandler.verify(apple))
		{
			machine.dispenceSnack(apple, moneyhandler);
		}
		else
		{
			cout << "insufficient funds" << endl;
			moneyhandler.change();
		}

	}
	if (choice == 5)
	{
		if (moneyhandler.verify(popcorn))
		{
			machine.dispenceSnack(popcorn, moneyhandler);
		}
		else
		{
			cout << "insufficient funds" << endl;
			moneyhandler.change();
		}

	}
	//sales summary
	if (choice == 6)
	{
		summary(chocBar);
		summary(mBar);
		summary(puffs);
		summary(apple);
		summary(popcorn);
	}
	if (choice == 0)
	{
		moneyhandler.getCoins();
	}
}
//sales summary
void summary(Snack snack)
{
	cout << "The number of " << snack.getName() << " sold is " << (5 - snack.getAmmount()) << endl;
}
