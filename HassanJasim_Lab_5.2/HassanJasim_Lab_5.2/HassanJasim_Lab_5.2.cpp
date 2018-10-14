// HassanJasim_Lab_5.2.cpp : Defines the entry point for the console application.
// Hassan Jasim ID: 400057926

#include "stdafx.h"
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
//intializing the number of rows and clumns in the array
int const ROWS = 50;
int const COLUMN = 6;
int _tmain(int argc, _TCHAR* argv[])
{
	//initializing all the variables and the array
	double scores [ROWS][COLUMN];
	ifstream Scores;
	Scores.open("Scores.txt");
	//running totals for the rows and columns
	double totalR = 0, totalC = 0;
	//intializing minimum row and maximum column
	double minRow = 1e300, maxCol = 0;
	//index of the maximum column and minimum row
	int minRowI, maxColI;
	//index of the closest number to 50
	int closestR, closestC;
	//closest number to 50 is set to the first number
	double closest = scores[0][0], difference;
	//looking for the number closest to "seekValue" in the array
	double seekValue = 50;
	//checks to makes sure the file exists
	if(Scores)
	{
		//goes through the array one row at a time
		for(int i = 0 ; i < 50 ; i++)
		{
			for(int j = 0 ; j < 6 ; j++)
			{
				//sets the current number in the text file to the corresponing location in the array 
				Scores>>scores[i][j];
				//prints out the array with spacing
				cout<<scores[i][j]<<"\t";
				//finds the total of each row in the array
				totalR = totalR + scores[i][j];
				//finds the difference between the "closest" value and the seekValue(50)
				difference = fabs(closest - seekValue);
				//checks to see if the current number in the array has a smaller difference than the calculated value above
				if(fabs(scores[i][j] - seekValue) < difference)
				{
					//if true sets the current value in the array to "closest" and sets the coresponding indices
					closest = scores[i][j];
					closestR = i;
					closestC = j;
				}
			}
			//checks to see if the total row calculated above(totalR) is less than the minimum row total(minRow)
			if(totalR < minRow)
			{
				//if true sets the minimum total to the total calculated above with the correct index
				minRow = totalR;
				minRowI = i;
			}
			//resets the total row to be recalculated above
			totalR = 0;
			cout<<endl;	
		}
		//goes through the array one column at a time
		for(int j = 0 ; j < 6 ; j++)
		{
			for(int i = 0 ; i < 50 ; i++)
			{
				//calculates the current column total and sets it to totalC
				totalC = totalC + scores[i][j];
			}
			//checks if the totalC(calculated above) is grater than the maximum column total(maxCol)
			if(totalC > maxCol)
			{
				//if true, sets the new total to maxCol with the coresponding index
				maxCol = totalC;
				maxColI = j;
			}
			//resets the total column to be recalculated above
			totalC = 0;
		}
		//outputs all the values that were calculated
		cout<<endl;
		cout<<"The Maximum column total is column "<<maxColI<<" with a total of "<<maxCol<<endl<<endl;
		cout<<"The Minimum row total is row "<<minRowI<<" with a total of "<<minRow<<endl<<endl;
		cout<<"The closest value to 50 is "<<closest<<" with a row index of "<<closestR<<" and a cloumn index of "<<closestC<<endl;
	}


	else
		cout<<"The file does not exist";

	cin.ignore();
	cin.get();
	return 0;
}


