/*ID block
*---------------------------------------------------*
~ Programmer : 	Branden Dye           				~
~ Course     : 	Computer Science 2    				~
~ Lab Section:	 (M && Wes)						~
~ Assignment :	CS2Assignment2						~
~ Due Date   : 	Wendsday 9/24/14					~
*---------------------------------------------------*



                -'''''-.
             .'      #  `.
            :             :
           :   #           :
           :      /|      :
            :   =//   #  :
             `./ |     .'
           (   /  ,|...-'
            \/^\/||   
            /~  `''~`` `
     __/  -'/  --._ |'__
   /________/--  -` ~|'

		|=Collie Tech=|

*/



#include <string>
#include <ostream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <windows.h>

#include "Fraction.h"
#include "FractionList.h"

#include "UtilityFuncs.h"

using namespace std;

const int BASECOLOR = 15; //7 Gray 15 White
const int USERCOLOR1 = 11; // Light Blue-teal
const int USERCOLOR2 = 13; // Pink ^\/^


void printCollieMenu1();




void printCollieMenu1()
{
	//Colors
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// Colors

	int Collie = 10, spacing = 10;

	SetConsoleTextAttribute(hConsole, BASECOLOR);
	cout << setw(Collie) << "" << "  " << endl;
	cout << setw(Collie) << "" << "||-------------------------------------------------------||" << endl;
	cout << setw(Collie) << "" << "||";
	SetConsoleTextAttribute(hConsole, USERCOLOR1);
	cout << "" << "                  Fractions       ";
	SetConsoleTextAttribute(hConsole, BASECOLOR);  cout << "                     ||" << endl;
	cout << setw(Collie) << "" << "||                                                       ||" << endl;
	cout << setw(Collie) << "" << "||                 -'''''-.                              ||" << endl;
	cout << setw(Collie) << "" << "||              .'      #  `.                            ||" << endl;
	cout << setw(Collie) << "" << "||             :             :                           ||" << endl;
	cout << setw(Collie) << "" << "||            :   #           :                          ||" << endl;
	cout << setw(Collie) << "" << "||            :      /|       :                          ||" << endl;
	cout << setw(Collie) << "" << "||             :   =//   #   :                           ||" << endl;
	cout << setw(Collie) << "" << "||              `./ |      .'                            ||" << endl;
	cout << setw(Collie) << "" << "||           (   /  ,|...-'                              ||" << endl;
	cout << setw(Collie) << "" << "||            \/^\/||                                      ||" << endl;
	cout << setw(Collie) << "" << "||           /~  `''~`` `                                ||" << endl;
	cout << setw(Collie) << "" << "||       __ / -'/  --._ |'__                             ||" << endl;
	cout << setw(Collie) << "" << "||      / ________ / -- - ` ~| '                         ||" << endl;
	cout << setw(Collie) << "" << "||                                                       ||" << endl;
	cout << setw(Collie) << "" << "||-------------------------------------------------------||" << endl;
	cout << setw(Collie) << "" << "||-------------------------------------------------------||" << endl;
	cout << setw(Collie) << "" << "||                                                       ||" << endl;
	cout << setw(Collie) << "" << "||    //- Will print all fractions to file and thier -\\\\ ||" << endl;
	cout << setw(Collie) << "" << "||    //- corresponding double values.               -\\\\ ||" << endl;
	cout << setw(Collie) << "" << "||                                                       ||" << endl;
	cout << setw(Collie) << "" << "||  1) All the Fractions                                 ||" << endl;
	cout << setw(Collie) << "" << "||  2) Sum of all the Fractions                          ||" << endl;
	cout << setw(Collie) << "" << "||  3) Mean of all the Fractions                         ||" << endl;
	cout << setw(Collie) << "" << "||  4) Exit                                              ||" << endl;
	cout << setw(Collie) << "" << "||                                                       ||" << endl;
	cout << setw(Collie) << "" << "||-------------------------------------------------------||" << endl;
	cout << setw(Collie) << "" << "||-------------------------------------------------------||" << endl;

	SetConsoleTextAttribute(hConsole, BASECOLOR);
}










int main()

{

	/*
	Fraction Fra(15, 100);

	//cout << Fra.gcd(15, 100) << endl;

	Fra.normalize();

	cout << Fra.getTop()<<"/"<<Fra.getBottom() << endl;
	cout << Fra.toString() << endl << endl << endl << endl;




	Fraction Fra3(2, 7);
	cout << Fra3.getTop() << "/" << Fra3.getBottom() << endl << endl;

	++Fra3;//Pre
	cout << Fra3.getTop() << "/" << Fra3.getBottom() << endl << endl;

	--Fra3;//Pre
	cout << Fra3.getTop() << "/" << Fra3.getBottom() << endl << endl;

	--Fra3;//Pre
	cout << Fra3.getTop() << "/" << Fra3.getBottom() << endl << endl;

	cout << endl;

	Fraction Fra2(2, 7);
	cout << Fra2.getTop() << "/" << Fra2.getBottom() << endl << endl;

	Fra2++;//Post
	cout << Fra2.getTop() << "/" << Fra2.getBottom() << endl << endl;

	Fra2--;//Post
	cout << Fra2.getTop() << "/" << Fra2.getBottom() << endl << endl;

	Fra2--;//Post
	cout << Fra2.getTop() << "/" << Fra2.getBottom() << endl << endl;


	cout << endl << endl << endl << endl;

	*/

	
	/*
	Fraction FracB1(2,3);
	Fraction FracB2(6,5);
	Fraction FracSum = FracB1 / FracB2;
	FracSum.normalize();

	cout << FracSum.getTop() << "/" << FracSum.getBottom() << endl << endl;

	Fraction FracA1(20, 400);
	Fraction FracA2(20, 400);
	Fraction FracA3(453, 100);
	Fraction FracA4(15, 4252);
	Fraction FracA5(315, -34525);


	
	if (FracA1 == FracA2)
		cout << "A1 == A2" << endl;
	if (FracA1 == FracA3)
		cout << "A1 == A3" << endl;
	if (FracA1 == FracA4)
		cout << "A1 == A4" << endl;
	if (FracA1 == FracA5)
		cout << "A1 == A5" << endl;


	cout << endl << endl << endl << endl;


	if (FracA1 != FracA2)
		cout << "A1 != A2" << endl;
	if (FracA1 != FracA3)
		cout << "A1 != A3" << endl;
	if (FracA1 != FracA4)
		cout << "A1 != A4" << endl;
	if (FracA1 != FracA5)
		cout << "A1 != A5" << endl;

	cout << endl << endl << endl << endl;
	


	//Fraction FracC1(-2, 3);

	cout << Fra2 << endl << endl;

	//Fraction FracC2(2, -3);

	cout << FracA5 << endl << endl;

	*/

	/*
	Fraction FracC2(-2, -4);
	Fraction FracC1(-6, -7);

	Fraction FracSumC1 = FracC2*FracC1;

	 cout << FracSumC1;

	cout << endl;

	FracSumC1.normalize();

	cout << FracSumC1;

	cout << endl << endl << endl << endl;

	*/

	/*
	Fraction fracInD1;
	Fraction fracD1(1, 2);
	

	cin >> fracInD1;
	cout << endl << fracInD1;

	cout << endl << endl;

	Fraction fracSumD1 = fracInD1*fracD1;
	cout << fracSumD1 << endl << endl;
	*/

	/*
	Fraction fracD1(6, 7);
	Fraction fracSumD1(1, 1);

	fracSumD1 += fracD1;

	cout << fracSumD1 << endl << endl;
	*/



	//Colors
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// Colors

	Fraction fraction;
	ifstream fIn;
	ofstream fOut;

	string folder = "Files/", ext = ".txt";
	FractionList fractionArray;

	cout << "This program will read " << MAXSIZE << " fractions from an input file and store in an array" << endl << endl;
	if(!UtilityFuncs::openAndValidateInputFile(fIn, folder, ext))
		return 0;
	fractionArray.readFileIntoFractionList(fIn);


	bool flagLoop = true;
	char tempchar = ' ';
	int	menuchoice = -1, inID = -1, exitMenu = 3, tempInt = 0;
	string inLastName;
	UtilityFuncs::ClearScreen(100);
	while (flagLoop)
	{
		printCollieMenu1();
		UtilityFuncs::ClearScreen(5);
		UtilityFuncs::Center(CENTER);
		cout << setw(SPACING) << "Please slect a choice" << ": ";


		if (!UtilityFuncs::IsInt(menuchoice))
		{
			UtilityFuncs::ClearScreen(2);
			UtilityFuncs::Center(CENTER);
			cout << "Bad input, integers only." << endl;
			menuchoice = -1;
		}

		switch (menuchoice)
		{
		case 1:
			if (UtilityFuncs::openAndValidateOutputFile(fOut, folder, ext))
				fractionArray.allPrintWriteFractionListToFile(fOut);
			break;

		case 2:
			if (UtilityFuncs::openAndValidateOutputFile(fOut, folder, ext))
				fractionArray.sumPrintWriteFractionListToFile(fOut);
			break;

		case 3:
			if (UtilityFuncs::openAndValidateOutputFile(fOut, folder, ext))
				fractionArray.meanPrintWriteFractionListToFile(fOut);
			break;

		case 4:
			UtilityFuncs::ClearScreen(5);
			UtilityFuncs::Center(CENTER);
			cout << setw(SPACING) << "Are you shure you want to ";
			SetConsoleTextAttribute(hConsole, USERCOLOR1);
			cout << "Exit";
			SetConsoleTextAttribute(hConsole, BASECOLOR);
			cout << "? (Y/N): ";


			if (!UtilityFuncs::IsChar(tempchar))
			{
				UtilityFuncs::ClearScreen(2);
				UtilityFuncs::Center(CENTER);
				cout << "Bad input, characters only." << endl;
				break;

			}
			else
			{
				UtilityFuncs::ClearScreen(2);
				UtilityFuncs::Center(CENTER);
				switch (UtilityFuncs::AskYesNoCheck(tempchar))
				{
				case -1:
					cout << "not a valid option." << endl;
					break;
				case 0:
					cout << "Not exiting" << endl;
					break;
				case 1:
					cout << "Exiting" << endl;
					flagLoop = false;
					break;
				}
			}
			break;

		default:
			UtilityFuncs::Center(CENTER);
			cout << "not a valid option, please try again." << endl;
			break;
		}
	}

	cout << "Error";

	return 0;
}


