// HassanJasim_Lab_5.3.cpp : Defines the entry point for the console application.
// Hassan Jasim ID:400057926

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//Initializing all the variables
	char password[80];
	int i = -1;
	int countUpper = 0;
	int countLower = 0;
	int countint = 0;
	int total = 0;
	//outputs all the requirments
	cout<<"Requirments\n==========================="<<endl;
	cout<<"Atleast 6 characters long"<<endl;
	cout<<"Atleast one upper and one lower case letter"<<endl;
	cout<<"Atleast one digit"<<endl;
	cout<<"Please enter your password"<<endl;
	//gets all the characters and stores them into an array
	do
	{
		i++;
		password[i] = _getch();
	}while(password[i] != '\r');
	//sets the last character in the array to \0
	password[i] = '\0';
	cout<<endl;
	//this loop is only for counting
	//it goes through the array and count how many upper/lower case letters and numbers 
	for(int i = 0 ; password[i] != '\0' ; i++)
	{
		if(isalpha(password[i]))
		{
			if(isupper(password[i]))
			{
				countUpper++;
			}
			else
				countLower++;
		}
		if(isdigit(password[i]))
		{
			countint++;
		}
	}
	total = countint + countLower + countUpper;
	//once the counter is done
	//these if statments output the corrent message
	if(countint >= 1 && countUpper >= 1 && countLower >= 1 && total >= 6)
	{
		cout<<"Your password met the requirments!!"<<endl;
	}
	if(countLower < 1 || countUpper < 1)
	{
		cout<<"You don't have enough upper or lower case letters"<<endl;
	}
	if(countint < 1)
	{
		cout<<"You dont have enough numbers"<<endl;
	}
	if(total < 6)
	{
		cout<<"Your password is too short"<<endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}

