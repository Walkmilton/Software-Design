

#include <iostream>

using namespace std;

int main()
{
    int chicken = 0;
    int sheep = 0;
    int legs = 0;
    int animals = 0;
    
    cout << "Please enter the number of animals on the farm: ";
    cin >> animals;
    
    cout << "Please enter the number of legs on the farm: ";
    cin >> legs;
    
    sheep = (legs - (2 * animals)) / 2;
    chicken = animals - sheep;
    
    
    if (chicken == 1)
    {
        cout << "There is " << chicken << " chicken and " << sheep << " sheep on the farm" << endl;
        
    } else
    {
        cout << "There are " << chicken << " chickens and " << sheep << " sheep on the farm" << endl;
        
    }
    

}
