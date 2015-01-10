#pragma once
#ifndef Fraction_H
#define Fraction_H


#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <ostream>
#include <sstream>


using namespace std;


class Fraction
{

	//friend class FractionList;

private:

	long numerator, denominator;


public:
	//********* Default Constructor *********\\

	Fraction();

	//********* Overload Constructor *********\\

	//Fraction(long Top = 0, long Bottom = 1);
	Fraction(long Top, long Bottom);
	

	//********* Default Destructor *********\\

	~Fraction();

	//********* Accessor Functions *********\\

	long getTop() const;
	long getBottom() const;

	string toString();


		//** Calculator Functions **\\

	void normalize();
	void normalizeSigns();

	double toDouble() const;
	long gcd(long a, long b);

	//********* Mutator Function *********\\	

	Fraction operator --();
	Fraction operator ++();
	Fraction operator --(int maker);
	Fraction operator ++(int maker);

	
	
	

		//********* Friend Functions *********\\	

	friend  void operator += (Fraction & frac1, const Fraction & frac2);

	friend void operator -= (Fraction & frac1, const Fraction & frac2);

	friend void operator *= (Fraction & frac1, const Fraction & frac2);

	friend void operator /= (Fraction & frac1, const Fraction & frac2);




	///*


	friend  Fraction operator + (const Fraction & frac1, const Fraction & frac2);

	friend  Fraction operator - (const Fraction & frac1, const Fraction & frac2);

	friend  Fraction operator * (const Fraction & frac1, const Fraction & frac2);

	friend  Fraction operator / (const Fraction & frac1, const Fraction & frac2);

	friend  bool operator == (const Fraction & frac1, const Fraction & frac2);

	friend  bool operator != (const Fraction & frac1, const Fraction & frac2);

	friend  ostream & operator << (ostream & output, const Fraction & frac);

	friend  istream & operator >> (istream & input, Fraction & frac);
	//*/


	//********* Loading Members *********\\




	//*********print Function *********\\

};
#endif
