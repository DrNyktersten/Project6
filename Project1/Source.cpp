#include <iostream>
using namespace std; 
void getScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
	const int SIZE = 4; 
	double testScores[SIZE],
		   total,
		   lowest,
		   average;
	//Get all the test scores of an exams from the user
	getScores(testScores, SIZE);
	
	//Get the total of the test scores
	total = getTotal(testScores, SIZE);

	//Get the lowest test score
	lowest = getLowest(testScores, SIZE);
	
	//Subtract lowest from the total test scores
	total -= lowest; 

	//Calculate the average of the test scores
	average = total / 3; 

	//display
	cout << average; 

	return 0; 
}

void getScores(double testScores[], int SIZE)
{
	for (int index = 0; index < SIZE; index++)
	{
		cout << "enter for test#" << index + 1 << " ";
		cin >> testScores[index];
	}
}

double getTotal(const double testScore[], int SIZE)
{
	double total = 0; //accumulator 
	for (int index = 0; index < SIZE; index++)
	{
		total += testScore[index];
	}
	return total; 
}

double getLowest(const double testScore[], int SIZE)
{
	double lowest; 

	//assign lowest as the first element of an array
	lowest = testScore[0]; 

	for (int index = 1; index < SIZE; index++)
	{
		if (testScore[index] < lowest)
			lowest = testScore[index];
	}

	//return the lowest value
	return lowest; 
}





/*
double highest; 

highest = testScore[0];
for (int i = 1; i < SIZE; i++)
{
if (highest < testScore[i])
highest = testScore[i];
}
return highest;

*/