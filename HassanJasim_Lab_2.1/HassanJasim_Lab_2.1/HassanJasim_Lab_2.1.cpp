// HassanJasim_Lab_2.1.cpp : Defines the entry point for the console application.
//Hassan Jasim ID : 400057926

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//declares all the variables
	int radius, incriment, endingvalue;
	double volume;
	const double PI = 4.0*atan(1.0);

	//gets the user input and assigns it to the variables
	cout<<"Please enter the raduis of the cirlce : ";
	cin>>radius;
	cout<<"Please enter the incriment of the radius : ";
	cin>>incriment;
	cout<<"Please enter the ending value of the radius : ";
	cin>>endingvalue;
	cin.ignore();
	//checks to make sure the starting radius is lower than the ending radius
	if(radius <= endingvalue)
	{
		cout<<"Radius(cm) \t Volume(cm^3)"<<endl;
	}

	else
	{
		cout<<"your ending value is lower than your starting value"<<endl;
	}

	//calculates the radius and volume and prints them
	while(radius <= endingvalue)
	{

		volume = 4*PI*pow (radius, 3)/3;

		cout<<radius<<"\t \t  "<<setprecision(1)<<fixed<<volume<<endl;

		radius = radius + incriment;
	}



																				



	cin.get();
	return 0;
}

