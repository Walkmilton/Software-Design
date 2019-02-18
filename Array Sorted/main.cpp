
#include <iostream>

using namespace std;

//Function prototypes
void input(int number[], int scope);
bool sort(int number[], int scope);
void output(int number[], int scope);

int main()
{
    
    //Variables and Constants
    const int scope = 10;	//Change this constant to change scope of the program
    int number[scope];
    bool sorted = false;
    
    
    //Calling functions
    input(number, scope);
    sorted = sort(number, scope);
    
    
    //Outputting data
    if (sorted == true)
    {
        cout << "The list is sorted" << endl;
    }
    else
    {
        cout << "The list is unsorted" << endl;
    }
    
}


//Function declaration
void input(int number[], int scope)
{
    //User Input
    for (int i = 0; i < scope; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number[i];
    }
    
}

bool sort(int number[], int scope)
{

    bool sorted = false;

    for (int i = 1; i < scope; i++) {
        if (number[i] > number[i + 1]) {
            sorted = true;
        }
    }
    return sorted;
}
