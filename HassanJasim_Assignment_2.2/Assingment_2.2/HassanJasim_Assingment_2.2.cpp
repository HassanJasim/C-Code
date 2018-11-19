// HassanJasim_Assingment_2.2.cpp : Defines the entry point for the console application.
// Hassan Jasim ID 400057926

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

void analyzeData (int, int* , double*);
double halfLife (double);
void longestHalfLife(int*, double*, int*, double*);

int _tmain(int argc, _TCHAR* argv[])
{
	//opening file and declaring variables
	ifstream Datafile;
	Datafile.open("Data.txt");
	int inputChoice;
	double avgHalfLife, halfp1, halfp2;
	int p1, p2, numOfPatientExperiment, inputPatient;
	//outputs the list of choices 
	do{
		cout<<"1. Average of a single patient"<<endl;
		cout<<"2. Top two averages"<<endl;
		cout<<"3. Exit"<<endl;
		cin>>inputChoice;
		//makes sure file is present
		if(Datafile)
		{
			switch (inputChoice)
			{
			case 1:
				cout<<"Please enter the patient number: ";
				cin>>inputPatient;
				analyzeData(inputPatient, &numOfPatientExperiment, &avgHalfLife);
				cout<<"The average half life for patient "<<inputPatient<<" is "<<setprecision(2)<<fixed<<avgHalfLife<<"hrs"<<endl;
				cout<<"The Patient had "<<numOfPatientExperiment<<" experiments"<<endl;
				break;

			case 2:
				longestHalfLife(&p1, &halfp1, &p2, &halfp2);
				cout<<"The longest half life belongs to patient "<<p1<<" with a half life of "<<setprecision(2)<<fixed<<halfp1<<"hrs"<<endl;
				cout<<"The second longest half life belongs to patient "<<p2<<" with a half life of "<<setprecision(2)<<fixed<<halfp2<<"hrs"<<endl;
				break;

			default:
				break;
			}
			cout<<endl;
			cout<<endl;
			cout<<endl;
		}

		else
			cout<<"The Data file does not exist";

	}while(inputChoice != 3);
	Datafile.close();
	cin.ignore();
	cin.get();
	return 0;
}//end of main
//===============================================================================
void analyzeData (int inPat, int *patEXP, double *avghalfLife)
{
	ifstream Datafile;
	Datafile.open("Data.txt");
	double patNum, c0, cT, time, count = 0;

	while(!Datafile.eof())
	{
		Datafile>>patNum>>c0>>cT>>time;
		if (patNum == inPat)
		{
			count++;
		}
	}
	*avghalfLife = halfLife(inPat);	
	*patEXP = count;
}//end of analyeData
//===============================================================================
double halfLife(double inPat)
{
	double patNum, c0, cT, time, k = 0, hLife = 0, countnum = 0;
	ifstream Datafile;
	Datafile.open("Data.txt");
	while(!Datafile.eof())
	{
		Datafile>>patNum>>c0>>cT>>time;
		if (patNum == inPat)
		{
			k = (-1/time)*(log(cT/c0));
			hLife = hLife + (log(2))/k;
			countnum++;
		}
	}
	hLife = hLife/countnum;
	return hLife;
}//end of halfLife
//===============================================================================================
void longestHalfLife(int *patient1, double *HalfLife1, int *patient2, double *HalfLife2)
{
	ifstream Datafile;
	Datafile.open("Data.txt");
	
	double maxvalue1 = halfLife(1), maxvalue2 = halfLife(1);
	double index1 = 1, index2 = 1;

	for(int i = 0 ; i < 5 ; i++)
	{
		if(halfLife(i) > maxvalue1)
		{
			maxvalue1 = halfLife(i);
			index1 = i;
		}
	}

	for(int i = 0 ; i < 5 ; i++)
	{
		if(i != index1)
		{
			if(halfLife(i) > maxvalue2)
			{
				maxvalue2 = halfLife(i);
				index2 = i;
			}
		}
	}

	*patient1 = index1;
	*HalfLife1 = maxvalue1;
	*patient2 = index2;
	*HalfLife2 = maxvalue2;
}//end of longestHalfLife
//===================================================================================================