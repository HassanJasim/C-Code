// HassanJasim_Lab_1.3.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//declaring the variables
	int userInput, userChoice = 0;


	//sets a value to "userInput"
	cout<<"Please enter a number:";
	cin>>userInput;
	cout<<""<<endl;

	//prompts the user to pick one of the following choices
	cout<<"Please choose one of the following"<<endl;
	cout<<"1.Number divisible by 3?"<<endl;
	cout<<"2.Number between 10 and 100?"<<endl;
	cin>>userChoice;
	cin.ignore();
	if(userChoice != 1 && userChoice != 2)
	{
		cout<<"Please enter a valid number"<<endl;
	}

	//check the user's choice and goes through one of the following if statements
	if(userChoice == 1)
	{
		if(userInput % 3 == 0)
		{
			cout<<userInput<<" is perfectly divisible by 3."<<endl;
		}
		else 
		{
			cout<<userInput<<" is not perfectly divisible by 3."<<endl;
		}
	}
	//this if statement checks to see where their number is between 10 and 100
	if(userChoice ==2)
	{
		if(userInput >= 10 && userInput <= 100)
			cout<<userInput<<" is between 10 and 100."<<endl;

		else if(userInput < 10)
			cout<<userInput<<" is less than 10."<<endl;
		
		else
			cout<<userInput<<" is greater than 100."<<endl;

	}
	cin.get();
	return 0;
}

