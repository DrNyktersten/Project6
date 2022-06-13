//This program demonstarates a linera search algorithm 
#include <iostream>
using namespace std; 

//Function prototype 
int linearSearch(const int[], int, int); 

int main()
{
	const int SIZE = 5; 
	int tests[SIZE] = { 87, 75, 98, 100, 82 }; 
	int results; 

	//Search the array for 100
	results = linearSearch(tests, SIZE, 100); 

	//If linerSearch returned -1, then 100 was not found. 
	if (results == -1)
		cout << "You did not earn 100 points on any test " << endl; 
	else
	{
		//Otherwise results contains the subscript of 
		//the first 100 in the array. 
		cout << "You earned 100 points on test "; 
		cout << (results + 1) << endl; 
	}
 	return 0; 
}

int linearSearch(const int tests[], int size, int value)
{
	int index = 0;          //Used as a subscript to search array
	int position = -1;      //To record position of search value
	bool found = false;     //Flag to indicate if the value was found 

	while (index < size && !found)
	{
		if (tests[index] == value)  //If the value was found in the array
		{
			found = true;           //Set the flag 
			position = index;	    //Record the value's subscript 
		}
		index++;					//Go to the next element 
	}
	return position;				//Return the position, or -1
}