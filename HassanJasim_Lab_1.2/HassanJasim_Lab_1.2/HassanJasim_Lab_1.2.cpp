// HassanJasim_Lab_1.2.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	//declaring variables
	double angle, rad, arclength, sine, cosine, tangent;
	const double PI = 4.0*atan(1.0);
	const int RADIUS = 5;
	
	//input
	cout<<"Please enter the angle :";
	cin>>angle;
	cin.ignore();


	//prossesing
	rad = angle*(PI/180);
	arclength = RADIUS*rad;
	sine = sin(rad);
	cosine = cos(rad);
	tangent = tan(rad);
	
	
	//output
	cout<<"The angle in rad is :"<<rad<<endl;
	cout<<"the arc length of a circle with a raduis of 5m is :"<<arclength<<"m"<<endl;
	cout<<"the sine of the angle is :"<<sine<<endl;
	cout<<"the cosine of the angle is :"<<cosine<<endl;
	cout<<"the tangent of the angle is :"<<tangent<<endl;
	cin.get();
	return 0;
}

