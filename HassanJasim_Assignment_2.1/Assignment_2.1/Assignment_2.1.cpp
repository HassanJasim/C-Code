// Assignment_2.1.cpp : Defines the entry point for the console application.
// Hassan Jasim ID 400057926

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double sinc (double);

int _tmain(int argc, _TCHAR* argv[])
{
	//declaring variables
	double maxValue, minValue, inc;
	cout<<"Please enter the max value, min value, and incriment: ";
	cin>>maxValue>>minValue>>inc;
	cout<<endl<<endl;
	cout<<"X\t\t sinc(x)"<<endl;
	cout<<"_______________________________"<<endl;
	//calculates all the values
	for(double i = minValue ; i <= maxValue ; i = i + inc)
	{
		cout<<setprecision(1)<<fixed<<i<<"\t\t";
		cout<<setprecision(4)<<fixed<<sinc(i)<<endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}//end of main
//==========================================
double sinc (double i)
{
	// fofx ==> f(x)
	double fofx;
	if(i != 0)
	{
		fofx = sin(i)/i;
		return fofx;
	}
	else
	{ 
		fofx = 1;
		return fofx;
	}
	
}