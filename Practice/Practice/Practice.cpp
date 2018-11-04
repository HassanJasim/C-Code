// Practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

void getPoints(double [], double);
double closet(double [], double [] , double, double);
int _tmain(int argc, _TCHAR* argv[])
{
	const int SIZE = 10;
	double xArray [SIZE];
	double yArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	double enterednumx, enterednumy;

	cout<<"Please enter the x and y value: ";
	cin>>enterednumx>>enterednumy;

	getPoints(xArray, SIZE);

	for(int i = 0 ; i < SIZE ; i++)
	{
		cout<<xArray[i]<<endl;
	}

	closet (xArray, yArray, enterednumx, enterednumy);
	cin.ignore();
	cin.get();
	return 0;
}//end of main
///=========================================================

void getPoints(double num[] , double size)
{
	const int MIN = -10;
	const int MAX = 10;
	srand(time(0));
	for(int i = 0 ; i<size ; i++)
	{
		num [i] = (double)rand()/(RAND_MAX)*(MAX - MIN) + MIN ;
	}
}//end of getPoints
//============================================================

double closet(double xarray[], double yarray[], double xenter, double yenter)
{
	int d1;
	for(int i = 1 ; i <= 10 ; i++)
	{
		d1 = sqrt((xenter- xarray[i])+(yenter - yarray[i]));
	}
	return d1;
}