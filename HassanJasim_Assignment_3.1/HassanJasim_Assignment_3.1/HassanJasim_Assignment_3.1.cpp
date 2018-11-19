// HassanJasim_Assignment_3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct waveData
{
	int year, month, day, hour, min;
	double height, length, ratio;
};

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream InFile;
	InFile.open("wavedata.txt");
	ofstream OutFile;
	OutFile.open("Warnings.txt");
	double runningTotal2010 = 0, runningTotal2011 = 0, runningTotal2012 = 0;
	int counter2010 = 0, counter2011 = 0, counter2012 = 0;
	const double DANGER = (1.0/7);

	waveData waveArray[50];
	int month2010, min2010, hour2010, day2010;
	int month2011, min2011, hour2011, day2011;
	int month2012, min2012, hour2012, day2012;
	double maxRatio2010 = 0;
	double maxRatio2011 = 0;
	double maxRatio2012 = 0;

	while(!InFile.eof())
	{
		int i = 0;
		InFile>>waveArray[i].year>>waveArray[i].month>>waveArray[i].day>>waveArray[i].hour>>waveArray[i].min>>waveArray[i].height>>waveArray[i].length;
		waveArray[i].ratio = (waveArray[i].height/waveArray[i].length);
		if(waveArray[i].ratio > DANGER)
		{
			OutFile<<waveArray[i].year<<setw(10)<<waveArray[i].month<<setw(10)<<waveArray[i].day<<setw(10)<<waveArray[i].hour<<setw(10)<<waveArray[i].min<<setw(10)<<waveArray[i].height<<setw(10)<<waveArray[i].length<<setw(10)<<waveArray[i].ratio<<endl;
			if(waveArray[i].year == 2010)
			{
				runningTotal2010 = runningTotal2010 + waveArray[i].ratio;
				counter2010++;
				if(waveArray[i].ratio > maxRatio2010)
				{
					maxRatio2010 = waveArray[i].ratio;
					month2010 = waveArray[i].month;
					day2010 = waveArray[i].day;
					hour2010 = waveArray[i].hour;
					min2010 = waveArray[i].min;
				}
			}
			if(waveArray[i].year == 2011)
			{
				runningTotal2011 = runningTotal2011 + waveArray[i].ratio;
				counter2011++;
				if(waveArray[i].ratio > maxRatio2011)
				{
					maxRatio2011 = waveArray[i].ratio;
					month2011 = waveArray[i].month;
					day2011 = waveArray[i].day;
					hour2011 = waveArray[i].hour;
					min2011 = waveArray[i].min;
				}
			}
			if(waveArray[i].year == 2012)
			{
				runningTotal2012 = runningTotal2012 + waveArray[i].ratio;
				counter2012++;
				if(waveArray[i].ratio > maxRatio2012)
				{
					maxRatio2012 = waveArray[i].ratio;
					month2012 = waveArray[i].month;
					day2012 = waveArray[i].day;
					hour2012 = waveArray[i].hour;
					min2012 = waveArray[i].min;
				}
			}
		}
		i++;
	}
	runningTotal2010 = runningTotal2010 / counter2010;
	runningTotal2011 = runningTotal2011 / counter2011;
	runningTotal2012 = runningTotal2012 / counter2012;
	cout<<"The average ratio for 2010 is "<<runningTotal2010<<endl;
	cout<<"The average ratio for 2011 is "<<runningTotal2011<<endl;
	cout<<"The average ratio for 2012 is "<<runningTotal2012<<endl;
	cout<<"The steepest wave in 2010 had a ratio of "<<maxRatio2010<<" which happened on month "<<month2010<<" on day "<<day2010<<" on hour "<<hour2010<<" on minute "<<min2010<<endl;
	cout<<"The steepest wave in 2011 had a ratio of "<<maxRatio2011<<" which happened on month "<<month2011<<" on day "<<day2011<<" on hour "<<hour2011<<" on minute "<<min2011<<endl;
	cout<<"The steepest wave in 2012 had a ratio of "<<maxRatio2012<<" which happened on month "<<month2012<<" on day "<<day2012<<" on hour "<<hour2012<<" on minute "<<min2012<<endl;
	InFile.close();
	OutFile.close();
	cin.ignore();
	cin.get();
	return 0;
}

