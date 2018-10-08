// HassanJasim_Lab_4.1.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
//prototype function
void read2Values(double *, double *);

int _tmain(int argc, _TCHAR* argv[])
{
	//declaring variables
	double firstNum, secNum;
	//calling the function
	read2Values(&firstNum, &secNum);
	cout<<firstNum<<"\t"<<secNum;

	cin.ignore();
	cin.get();
	return 0;
}//end of main
//=====================================================

void read2Values(double *v1, double *v2)
{
	//declaring variabless
	double first, second;
	//beginning of do-while
	do
	{
		cout<<"Please enter the two values: ";
		cin>>first>>second;

	}while(first <= 0 || second <= 0);
	
	//sett
	*v1 = first;
	*v2 = second;
}

