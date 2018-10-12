// HassanJasim_Lab_5.1.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//initializing alll the variables
	double randomNumbers[100];
	double total = 0, avg, maxValue;
	int index;
	//initializing all the constants
	const int MIN = 100;
	const int MAX = 200;
	//sets the maximum value to the first number in the array
	maxValue = randomNumbers[0];
	index = 0;
	srand(time(0));
	for(int i = 0 ; i < 100 ; i++)
	{
		//generates double random numbers between 100 - 200
		randomNumbers[i] = (double)rand()/(RAND_MAX)*(MAX - MIN) + MIN;
		//prints out all the random numbers
		cout<<setprecision(3)<<fixed<<randomNumbers[i]<<endl;
		//calculates the running total of all the numbers generated
		total = total + randomNumbers[i];
		//checks to see if the current value is larger than tha maximum value
		if(maxValue < randomNumbers[i])
		{
			//if true, sets the new max value to the current number and index
			maxValue = randomNumbers[i];
			index = i;
		}
	}
	//divides the total by the number of values
	avg = total / 100;
	//prints out all calculated values
	cout<<"The average is: "<<avg<<endl;
	cout<<"The max value is: "<<maxValue<<endl;
	cout<<"The index of that number is: "<<index<<endl;
	cin.ignore();
	cin.get();
	return 0;
}