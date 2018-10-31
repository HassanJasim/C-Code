// HassanJasim_Lab_7.1.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream InFile;
	InFile.open("Readings.txt");
	ofstream OutFile;
	OutFile.open("toxicCO.txt");
	
	double currentValue;
	int counter = 0, counterD = 0;
	
	if(InFile)
	{
		while(!InFile.eof())
		{
			InFile>>currentValue;
			if(currentValue > 35)
			{
				OutFile<<currentValue<<endl;
				counterD++;
			}
			counter++;
		}
	}
	
	else
		cout<<"The file does not exist";

	OutFile.close();
	InFile.close();
	
	InFile.open("toxicCO.txt");
	
	cout<<"There are "<<counter<<" total values"<<endl;
	cout<<"There are "<<counterD<<" dangerous values"<<endl;
	
	
	while (!InFile.eof())
	{
		InFile>>currentValue;
		cout<<currentValue<<endl;
	}
	
	
	cin.ignore();
	cin.get();
	return 0;
}
