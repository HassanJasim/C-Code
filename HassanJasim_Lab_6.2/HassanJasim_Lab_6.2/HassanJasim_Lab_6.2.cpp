// HassanJasim_Lab_6.2.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

struct COReadings
{
	int morning, afternoon, evening, night;
};

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream DataFile;
	DataFile.open("Data.txt");
	COReadings readings[31];
	int morning = 0, afternoon = 0, evening = 0, night = 0;
	int countM = 0, countA = 0, countE = 0, countN = 0;
	
	if(DataFile)
	{
		cout<<"Days  Morning  Afternoon  Evening  Night"<<endl;
		cout<<"========================================================="<<endl;
		for(int i = 0 ; i < 31 ; i++)
		{
			DataFile>>readings[i].morning>>readings[i].afternoon>>readings[i].evening>>readings[i].night;
			cout<<i + 1<<"\t"<<readings[i].morning<<"\t  "<<readings[i].afternoon<<"\t   "<<readings[i].evening<<"\t    "<<readings[i].night<<"\t    ";
			
			if(readings[i].morning >= 200 || readings[i].afternoon >= 200 || readings[i].evening >= 200 || readings[i].night >= 200) 
			{
				cout<<"DANGER";
				morning = morning + readings[i].morning;
				countM++;
				afternoon = afternoon + readings[i].afternoon;
				countA++;
				evening = evening + readings[i].evening;
				countE++;
				night = night + readings[i].night;
				countN++;
			}
			cout<<endl;
		}
	
		morning = morning / countM;
		afternoon = afternoon / countA; 
		evening = evening / countE;
		night = night / countN;

		cout<<endl<<endl;
		cout<<"AVG"<<"\t"<<morning<<"\t  "<<afternoon<<"\t   "<<evening<<"\t    "<<night;
	}

	else
		cout<<"File does not exist";

	DataFile.close();
	cin.ignore();
	cin.get();
	return 0;
}

