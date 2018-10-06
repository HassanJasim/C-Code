// HassanJasim_lab_3.3.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926

#include "stdafx.h"
#include <cmath>
#include <iostream>

using namespace std;
//proto-function
int numbers(int, int, int);
//beginning of main function
int _tmain(int argc, _TCHAR* argv[])
{
	//initializing variables
	int num1, num2, num3;
	//beginning of do-while loop
	do
	{
	cout<<"Please enter the three numbers: ";
	cin>>num1>>num2>>num3;
	
	if(num1 != 0 && num2 != 0 && num3 != 0)
		cout<<"The smallest value is "<<numbers(num1, num2, num3)<<endl;
	
	else
		cout<<"end of program"<<endl;
	//checks to make sure input is not all 0's
	}while(num1 != 0 && num2 != 0 && num3 != 0);

	cin.ignore();
	cin.get();
	return 0;
}//end of main
//================================================================
int numbers(int num1, int num2, int num3)
{
	//initializing variables
	int abs1 = abs(num1);
	int abs2 = abs(num2);
	int abs3 = abs(num3);
	//checks for the lowest number
	if(abs1 <= abs2 && abs1 <= abs3)
		return num1;
	else if(abs2 <= abs1 && abs2 <= abs3)
		return num2;
	else 
		return num3;
}//end of "numbers"