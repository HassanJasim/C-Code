// HassanJasim_Lab_4.2.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
//prototype function
bool calculateBox (double, double, double, double *, double *); 

int _tmain(int argc, _TCHAR* argv[])
{
	//declarinng variables
	double lENGTH, wIDTH, hEIGHT, sA, vOLUME;	
	//getting user input
	cout<<"Please enter the height, width and length in cm: ";
	cin>>hEIGHT>>wIDTH>>lENGTH;
	//beginning of if statment and calling function
	if(calculateBox(lENGTH, wIDTH, hEIGHT, &sA, &vOLUME))
	{
		cout<<"The length is: "<<lENGTH<<"cm"<<endl;
		cout<<"The width is: "<<wIDTH<<"cm"<<endl;
		cout<<"The height is: "<<hEIGHT<<"cm"<<endl;
		cout<<"The surface area is: "<<sA<<"cm^2"<<endl;
		cout<<"The volume is: "<<vOLUME<<"cm^3"<<endl;
	}
	else
		cout<<"At least one of the values was less than Zero";

	cin.ignore();
	cin.get();
	return 0;
}//end of main
//=====================================================

bool calculateBox (double length, double width, double height, double *surfaceArea, double *volume)
{
	if(length > 0 && width > 0 && height > 0)
	{
		*surfaceArea = 2*length*width + 2*length*height + 2*width*height;
		*volume = length*width*height;
		return true;
	}
	else
		return false;

}
