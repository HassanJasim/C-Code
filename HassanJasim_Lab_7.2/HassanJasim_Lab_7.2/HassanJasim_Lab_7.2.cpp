// HassanJasim_Lab_7.2.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int counter = 0;
	char plateNum[80];
	ofstream OutFile;
	OutFile.open("plates.txt", ios::app);

	do
	{
		cout<<"Please enter the plate number: ";
		cin>>plateNum;
		if(plateNum[0] != '0')
		{
			OutFile<<plateNum<<endl;
			counter++;
		}
	}while(plateNum[0] != '0');
	OutFile.close();
	cout<<"You have entered "<<counter<<" plates durinng this session"<<endl;
	ifstream InFile;
	InFile.open("plates.txt");
	if(InFile)
	{
		while(!InFile.eof())
		{
			InFile>>plateNum;
			cout<<plateNum<<endl;
		}
		InFile.close();
	}
	else
		cout<<"The file does not exist"<<endl;

	cin.ignore();
	cin.get();
	return 0;
}
