
#include <iostream>

using namespace std;

//Function prototypes
int count(int array[], int scope, int num);

int main()
{
	//declaring arrays
    int array[15];
	int frequency[15];
	int temp;
	
	//inputting data
    for (int i = 0; i < 15; i++)
    {
        cout << "Please enter number " << i + 1 << " : ";
		cin >> array[i];
    }
	
	//calculating the frequency of each number
	for (int i = 0; i < 15; i++)
	{
		frequency[i] = count(array, 15, array[i]);
	}
	
	for (int i = 0; i < 15; i++)
	{
		cout << "The number " << array[i] << " occurs " << frequency[i] << " time(s)" << endl;
	}
	
	for (int x = 15; x > 0; x--) {
		for (int i = 1; i < x; i++) {
			if (frequency[i - 1] > frequency[i]) {
				temp = frequency[i - 1];
				frequency[i - 1] = frequency[i];
				frequency[i] = temp;
				
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				
			}
		}
	}
	
	cout << "The mode of the list is " << array[14] << endl;
}

//calculating the frequency of a number
int count(int array[], int scope, int num)
{
	int count = 0;
	
	for(int i = 0; i < scope; i++)
	{
		if (array[i] == num)
		{
			count++;
		}
			
	}
	
	return count;
}
