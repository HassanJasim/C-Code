// HassanJasim_Lab_6.1.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

struct SSC
{
	double rateConstant; 
	double infusionRate;
	int distributionVolume;
};
int _tmain(int argc, _TCHAR* argv[])
{

	SSC steadySC;
	double ssc;
	const double MAXK = 0.3, MINK = 0.1, MAXR = 30, MINR = 5;
	const int MAXV = 20000, MINV = 5000;
	srand(time(0));

	steadySC.rateConstant = (double)rand()/RAND_MAX * (MAXK - MINK) + MINK;
	steadySC.infusionRate = (double)rand()/RAND_MAX * (MAXR - MINR) + MINR;
	steadySC.distributionVolume = (double)rand()/RAND_MAX * (MAXV - MINV) + MINV;

	ssc = (steadySC.infusionRate)/(steadySC.distributionVolume*steadySC.rateConstant);


	cout<<"The rate constant is "<<setprecision(3)<<fixed<<steadySC.rateConstant<<" per hour"<<endl;
	cout<<"The infusion rate is "<<setprecision(3)<<fixed<<steadySC.infusionRate<<" mg/h"<<endl;
	cout<<"The volume of distribution is "<<steadySC.distributionVolume<<" ml"<<endl;
	cout<<"The Steady State Consentration is "<<setprecision(3)<<fixed<<ssc<<" ug/ml"<<endl;

	cin.ignore();
	cin.get();
	return 0;
}

