

//Including libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Function Prototypes
void input(int& length, int& special, int& num);
string process(int length, int special, int num);
int random(int param1, int param2);
char normal();
char specialChar();
char number();
void output(string password);

int main() {
    
    //Seeding the time
    srand(time(0));
    
    //declaring variables
    int length = 0;
    int special = 0;
    int num = 0;
    string password;
    
    //calling functions
    input(length, special, num);
    password = process(length, special, num);
    output(password);
}

void input(int& length, int& special, int& num)
{
    //inputting data
    cout << "What's the password length? ";
    cin >> length;
    
    cout << endl << "How many special characters? ";
    cin >> special;
    
    cout << endl << "How many numbers? ";
    cin >> num;
    
    //validating data
    if ((special + num) > length)
    {
        cout << endl << "The data you have entered is invalid. Please try again" << endl;
        input(length, special, num);
    }
}

string process(int length, int special, int num)
{
	string password;
	char temp;
	int random = 0;
	int countSpecial = 0;
	int countNum = 0;
	
	//Looping until the length is reached
	while (password.length() < length)
	{
	
		//generate random number between 1 and 3 to decide what type of character to include
		random = rand() % 3 + 1;
	
		if ((random == 1) && (special + num > 0))
		{
			temp = normal();
			password.append(&temp);
		
		}
		else if ((random == 2) && (countSpecial < special))
		{
			temp = specialChar();
			password.append(&temp);
			countSpecial++;
		}
		else if ((random == 3) && (countNum < num))
		{
			temp = number();
			password.append(&temp);
			countNum++;
		}
	}
	return password;
}

char normal()
{
	int start = 25;
	int end = 97;
	char temp;
	
	int character = random(start, end);
	
	temp = character;
	return temp;
}

char specialChar()
{
	int start = 14;
	int end = 33;
	char temp;
	
	int character1 = random(start, end);
	
	start = 6;
	end = 58;
	
	int character2 = random(start, end);
	
	start = 5;
	end = 91;

	int character3 = random(start, end);
	
	start = 3;
	end = 123;
	
	int character4 = random(start, end);
	
	start = 3;
	end = 1;
	
	int finalChar = random(start, end);
	
	if (finalChar == 1)
	{
		temp = character1;
	}
	else if (finalChar == 2)
	{
		temp = character2;
	}
	else if (finalChar == 3)
	{
		temp = character3;
	}
	else if (finalChar == 4)
	{
		temp = character4;
	}
	
	return temp;
	
}

char number()
{
	int start = 9;
	int end = 48;
	char temp;
	
	int character = random(start, end);
	
	temp =  character;
	return temp;
}


int random(int param1, int param2)
{
	int randomNum = rand() % param1 + param2;
	
	return randomNum;
}

void output(string password)
{
	cout << "The password is : " << password << endl;
}
