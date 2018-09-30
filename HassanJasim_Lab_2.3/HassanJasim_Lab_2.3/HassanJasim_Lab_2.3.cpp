// HassanJasim_Lab_2.3.cpp : Defines the entry point for the console application.
//Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//declaring the variables
	int numbers, total = 0, avg = 0, count = 0;
	ifstream inFile;//calling function

	inFile.open("Random.txt");//checking if it exists

	if (!inFile)
	{
		cout<<"File does not exist"<<endl;
	}

	else
	{
		while(!inFile.eof())
		{
			inFile>>numbers;
			total += numbers;//calculating the running total
			count++;//calculating the number of numbers
		}
	}

	avg = (double)total / count;//calculating average

	cout<<"The sum is :"<<total<<endl;
	cout<<"The number of numbers is :"<<count<<endl;
	cout<<"The average is :"<<avg<<endl;
	cin.ignore();
	inFile.close();//closes the file
	cin.get();
	return 0;
}

