
#include <iostream>

using namespace std;

int main()
{
	//declaring variables
    int ammount = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int two = 0;
    int one = 0;
	
	//recieving data
    cout << "Please enter the ammount you wish to recieve change for: ";
    cin >> ammount;
	
	//validation of the ammount of change entered
    while (ammount < 0 || ammount > 99)
    {
        cout << "The value entered is invalid. Please enter a value between 0 and 100" << endl;
        cout << "Please enter the ammount you wish to recieve change for: ";
        cin >> ammount;
    }
	
	//Produce the most efficient ammount of change
    while (ammount > 0)
    {
        if (ammount >= 50)
        {
            fifty++;
            ammount = ammount - 50;
        }
        else if (ammount >= 20)
        {
            twenty++;
            ammount = ammount - 20;
        }
        else if (ammount >= 10)
        {
            ten++;
            ammount = ammount - 10;
        }
        else if (ammount >= 5)
        {
            five++;
            ammount = ammount - 5;
        }
        else if (ammount >= 2)
        {
            two++;
            ammount = ammount - 2;
        }
        else if (ammount >= 1)
        {
            one++;
            ammount = ammount - 1;
        }
    }
    
    //display the coins needed
    cout << "The coins you need are: " << endl;
    cout << fifty << " x 50p" << endl;
    cout << twenty << " x 20p" << endl;
    cout << ten << " x 10p" << endl;
    cout << five <<" x 5p" << endl;
    cout << two << " x 2p" << endl;
    cout << one << " x 1p" << endl;
    
}
