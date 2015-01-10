#include "FractionList.h"


FractionList::FractionList()
{
	Fraction FractionArray[MAXSIZE];
}

/*
FractionList::FractionList(Fraction fraction[])
{
	Fraction FractionArray[MAXSIZE];
}
*/

FractionList::~FractionList()
{
}


Fraction FractionList::getFraction(const int i) const
{
	return FractionArray[i];
}

Fraction FractionList::sumOfAll() const
{
	Fraction tempFraction;
	for (size_t i = 0; i < len; i++)
	{
		tempFraction += FractionArray[i];
	}
	tempFraction.normalizeSigns();
	tempFraction.normalize();
	return tempFraction;
}

Fraction FractionList::meanOfAll() const
{
	Fraction amout(len, 1);
	Fraction tempFraction = sumOfAll() / amout;
	tempFraction.normalizeSigns();
	tempFraction.normalize();
	return tempFraction;
}








void FractionList::readFileIntoFractionList(ifstream &input)
{
	int i = 0;
	Fraction tempFraction;

	while (i<MAXSIZE && input.peek() != EOF)
	{		
		input >> FractionArray[i];
		FractionArray[i].normalizeSigns();
		FractionArray[i].normalize();	
		//input.ignore(100, '\n');
		//input.ignore(1, ' ');
		//input.ignore(100, '	');

		i++;
		
	}

	input.close();
	len = i;
	if (i == MAXSIZE)
	{
		cout << "Array full." << endl;
	}

}

void FractionList::allPrintWriteFractionListToFile(ofstream &output)
{
	for (size_t i = 0; i < len; i++)
	{
		output << "Fraction: " << FractionArray[i].toString() << " Double: " << FractionArray[i].toDouble() << endl << endl;
	}
	output.close();
}

void FractionList::sumPrintWriteFractionListToFile(ofstream &output)
{
	Fraction tempFraction = sumOfAll();	
	output << "Fraction: " << tempFraction.toString() << " Double: " << tempFraction.toDouble() << endl << endl;
	output.close();
}

void FractionList::meanPrintWriteFractionListToFile(ofstream &output)
{
	Fraction tempFraction = meanOfAll();
	output << "Fraction: " << tempFraction.toString() << " Double: " << tempFraction.toDouble() << endl << endl;
	output.close();
}