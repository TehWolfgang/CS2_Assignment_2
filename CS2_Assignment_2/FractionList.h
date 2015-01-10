#pragma once
#ifndef FractionList_H
#define FractionList_H

#include "Fraction.h"

#include <iostream>
#include <string>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int MAXSIZE = 30;

class FractionList
{
private:

	size_t len;
	Fraction FractionArray[MAXSIZE];

public:

//********* Default Constructor *********\\

FractionList();

//********* Overload Constructor *********\\

//FractionList(Fraction fraction[]);

//********* Default Destructor *********\\

~FractionList();

//********* Accessor Functions *********\\

Fraction FractionList::getFraction(const int i) const;

//** Calculator Functions **\\

Fraction FractionList::sumOfAll() const;

Fraction FractionList::meanOfAll() const;

//********* Mutator Function *********\\	



//********* Loading Members *********\\

//***** In *****\\

void readFileIntoFractionList(ifstream &input);

//***** Out *****\\

void FractionList::allPrintWriteFractionListToFile(ofstream &output);
void FractionList::sumPrintWriteFractionListToFile(ofstream &output);
void FractionList::meanPrintWriteFractionListToFile(ofstream &output);

//*********print Function *********\\



};
#endif