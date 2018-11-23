// HassanJasim_Assignment_1.1.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//declaring variables
	double uMax, dMax;//dMax between 0.35 and 0.45
	int so, ks;//ks is between 2 & 7
	const int MAX_VALUE = 7;
	const int MIN_VALUE = 2;
	//creats a random value for "ks"
	srand(time(0));
	ks = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	//promts the user to enter the consentration
	cout<<"Please enter the intial concentration (between 25 & 75) and divisible by 5 (g/l): ";
	cin>>so;
	//checks to makes sure the concenteration is within the range
	if(so >= 25 && so <= 75 && so % 5 == 0)
	{
		//prompts the user to enter the growth rate
		cout<<"Please enter the maximum growth rate (between 0.2 & 0.7) (per hour): ";
		cin>>uMax;
		//checks to makes sure the growth rate is within the range
		if(uMax > 0.2 && uMax < 0.7)
		{
			//calculates the Dmax value
			dMax = uMax *(1 - sqrt(ks/(ks + (so * 1.0))));
			//checks to makes sure Dmax is within the range
			if(dMax > 0.35 && dMax < 0.45)
				cout<<"Kinetic parameters are acceptable, with a Dmax value of "<<setprecision(3)<<fixed<<dMax<<" per hour";
			//outputs that Dmax is not within the range
			else
				cout<<"Kinetic parameters are not acceptable, with a Dmax value of "<<setprecision(3)<<fixed<<dMax<<" per hour";
		}
		//outputs why the program terminated
		else
			cout<<"Your uMax value is not in the range"<<endl;
	}
	//outputs the correct message for why the program terminated
	else
	{
		if(so < 25 || so > 75)
				cout<<"Your value for \"so\" is not in the range"<<endl;
		if(so % 5 != 0)
				cout<<"Your \"so\" value is not divisible by 5"<<endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}