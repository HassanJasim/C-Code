// HassanJasim_Lab_3.1.cpp : Defines the entry point for the console application.
//Hassan Jasim ID:400057926

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
//proto-function
void functionTitle(string);
//beginning of main
int _tmain(int argc, _TCHAR* argv[])
{
	//initializing vriables
	string title;
	//getting user input
	cout<<"Please enter the title: ";
	getline(cin, title);
	//outputting the title and the equal signs
	cout<<title<<endl;
	functionTitle(title);
	
	cin.ignore();
	cin.get();
	return 0;
}//end of main function
//==========================================================================

void functionTitle(string title)
{
	//initializing the variables
	int titleLength;
	titleLength = title.length();
	//for-loop for printing out the equal signs
	for(int i = 0 ; i < titleLength ; i++)
	{
		cout<<"=";
	}
}//end of "function title"