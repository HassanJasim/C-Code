// HassanJasim_Lab_1.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//declaring all variables
	string name, gender;
	int hWage, age;

	//user input
	cout<<"Please enter your name : ";
	cin>>name;

	cout<<"Please enter your age : ";
	cin>>age;

	cout<<"Please enter your gender (M/F) : ";
	cin>>gender;

	cout<<"Please enter your hourly wage : ";
	cin>>hWage;
	cin.ignore();
	
	
	
	
	//output 
	
	
	
	//outputs the name of the user
	cout<<"Your name is "<<name<<endl;

	
	
	
	//checks gender of the user and displays the appropriate message
	if(gender == "f" || gender == "F")
	{
		cout<<"It is inappropriate to display a womans age ;)"<<endl;
	}	
	else
	{
		cout<<"Your are "<<age<<" years old"<<endl;
	}




	//checks gender of the user and displays the appropriate message
	if(gender == "f" || gender == "F")
	{
		cout<<"You are a Female"<<endl;
	}
	
	else
	{
		cout<<"You are a Male"<<endl;
	}
	
	//displays the users hourly wage
	cout<<"You make $"<<hWage<<" an hour"<<endl;



	cin.get();
	return 0;
}

