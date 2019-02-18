
#include "VendorMechanism.h"
#include <iostream>

using namespace std;

//constructor and destructor
VendorMechanism::VendorMechanism()
{
	
}

VendorMechanism::~VendorMechanism()
{
	
}

//dispencing a snack
void VendorMechanism::dispenceSnack(Snack& snack, MoneyHandler& moneyhandler)
{
	if (snack.getAmmount() > 0)
	{
		snack.setAmmount((snack.getAmmount() - 1));
		cout << "Dispencing " << snack.getName() << endl << endl;
		moneyhandler.setMoney((moneyhandler.getMoney() - snack.getCost()));
		
		if (moneyhandler.getMoney() > 0)
		{
			moneyhandler.change();
		}
	}
	else
	{
		cout << "There is not enough of this item. Please speak to an administratior of this machine" << endl;
	}

}
