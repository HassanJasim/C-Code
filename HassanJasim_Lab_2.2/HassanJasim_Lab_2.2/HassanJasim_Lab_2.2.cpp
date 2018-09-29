// HassanJasim_Lab_2.2.cpp : Defines the entry point for the console application.
//Hassan Jasim ID : 400057926

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	double input;//declaring the variable


	do
	{
		cout<<"Please enter a number between 0 and 200 : ";
		cin>>input;
		cin.ignore();
		if(input < 0 || input > 200)
		{
			cout<<"The number you entered is invalid"<<endl;
		}

	}while(input < 0 || input > 200);//checks to see if they entered the correct number

	cout<<"the number you entered is valid"<<endl;//prints out the correct statement
	cin.get();
	return 0;
}

