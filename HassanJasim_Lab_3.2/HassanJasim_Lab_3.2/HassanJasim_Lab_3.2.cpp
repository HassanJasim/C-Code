// HassanJasim_Lab_3.2.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
//proto-function
double calculateCR (double, double);
//beginning of main function
int _tmain(int argc, _TCHAR* argv[])
{
	//initializing variables
	double bounceHeight, dropHeight;
	//getting user input
	cout<<"Please enter the drop height: ";
	cin>>dropHeight;
	cout<<"Please enter the bounce height: ";
	cin>>bounceHeight;
	//printing out the function
	cout<<"The coefficient of restitution: "<<calculateCR(bounceHeight,dropHeight)<<endl;
	cin.ignore();
	cin.get();
	return 0;
}//end of main
//============================================================

double calculateCR (double bounceHeight, double dropHeight)
{
	//initializing variables
	double cr;
	int ERROR = -1.0;
	//check to make sure input is valid
	if (bounceHeight <= 0 || dropHeight <= 0 || bounceHeight > dropHeight)
	{
		return ERROR;
	}
	else 
	{
		cr = sqrt(bounceHeight/dropHeight);
		return cr;
	}
}//end of "calculateCR"