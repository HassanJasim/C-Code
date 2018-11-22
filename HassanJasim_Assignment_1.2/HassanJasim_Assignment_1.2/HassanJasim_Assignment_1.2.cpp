// HassanJasim_Assignment_1.2.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926
#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//declaring all the variables and constants
	int num_crew_members, weight1 = 100, weight2 = 100;
	double centerOfGravity, cargo_moment, crew_moment, total_weight;
	const int EMPTY_AIRCRAFT_MOMENT = 2751405; 
	const int EMPTY_AIRCRAFT_WIEGHT = 9021;
	const double FUEL_MOMENT = 1169167.3;
	const int FUEL_WIEGHT = 3618;
	const int D_FROM_NOSE_TO_CREWSEATS = 120;
	const int D_FROM_NOSE_TO_CARGOBAY = 345;
	//beginning of the do while loop
	do
	{
		//prompts the user to enter the number of crew members
		cout<<"Please enter the number of crew members (MAX 2 members): ";
		cin>>num_crew_members;
		//checks to make sure that the number they entered is within the range
		if(num_crew_members == 1)
		{
			//only need to get "weight1" because they entered 1 for number of crew members
			cout<<"Please enter the weight of the crew members (between 85lb-400lb): ";
			cin>>weight1;		
		}
		else if(num_crew_members == 2)
		{
			//must get BOTH weights because they entered 2 for number of crew members
			cout<<"Please enter the weight of the first crew members (between 85lb-400lb): ";
			cin>>weight1;
			cout<<"Please enter the weight of the second crew members (between 85lb-400lb): ";
			cin>>weight2;
		}
		else
			cout<<"You can only have upto 2 crew members max."<<endl;
		//checks to make sure that the weights are within the range
		//"weight2" is initialized as 100kg to satisfy the conditions even if the number of crew members is 1 
		if(weight1 < 85 || weight1 > 400 || weight2 < 85 || weight2 > 400 )
		{
			cout<<"The weight of one of the passengers is out of range."<<endl;
		}
	//loops back if at least ONE of the conditions is true
	}while((weight1 < 85 || weight1 > 400) || (weight2 < 85 || weight2 > 400) || (num_crew_members != 1 && num_crew_members != 2));
	//spacing
	cout<<endl<<endl;
	//different outputs depending on the number of crew members
	if(num_crew_members == 1)
		cout<<"1 crew member with a weight of "<<weight1<<"lb"<<endl;
	else
	{
		cout<<"First crew member : "<<weight1<<"lb"<<endl;
		cout<<"Second crew member : "<<weight2<<"lb"<<endl;
	}
	//header of the output list
	cout<<"_____________________________________________________________"<<endl;
	cout<<"Cargo Weights (lb)\t Center of Gravity(inches)"<<endl;
	cout<<"_____________________________________________________________"<<endl;
	for(int i = 0 ; i <= 5000 ; i += 500)
	{
		//calculates the moment for the cargo
		cargo_moment = i * D_FROM_NOSE_TO_CARGOBAY;
		//different calculations depending on the number of crew members
		if(num_crew_members == 1)
		{
			total_weight = weight1 + EMPTY_AIRCRAFT_WIEGHT + FUEL_WIEGHT + i;
			crew_moment = weight1 * D_FROM_NOSE_TO_CREWSEATS;
			centerOfGravity = (FUEL_MOMENT + EMPTY_AIRCRAFT_MOMENT + cargo_moment + crew_moment) / total_weight;
		}
		else
		{
			total_weight = weight1 + weight2 + EMPTY_AIRCRAFT_WIEGHT + FUEL_WIEGHT + i;
			crew_moment = weight1 * D_FROM_NOSE_TO_CREWSEATS + weight2 * D_FROM_NOSE_TO_CREWSEATS;
			centerOfGravity = (FUEL_MOMENT + EMPTY_AIRCRAFT_MOMENT + cargo_moment + crew_moment) / total_weight;
		}
		if(centerOfGravity >= 315)
			//outputs the cargo weight and corresponding ceter of gravity
			cout<<setprecision(1)<<fixed<<i<<"*"<<"\t \t \t \t"<<setprecision(3)<<fixed<<centerOfGravity<<"*"<<endl;	
		else
			//outputs the cargo weight and corresponding ceter of gravity
			cout<<setprecision(1)<<fixed<<i<<"\t \t \t \t"<<setprecision(3)<<fixed<<centerOfGravity<<endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}