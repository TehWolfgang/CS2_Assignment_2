#include "Fraction.h"

	//********* Default Constructor *********\\
	
	///*
	Fraction::Fraction()
	{
		numerator=0;
		denominator=1;
	}
	//*/

	//********* Overload Constructor *********\\

	Fraction::Fraction(long Top, long Bottom)
	{
		numerator = Top;
		if(Bottom==0)
		{
			denominator = 0;
		}
		else
		{
		denominator = Bottom;
		}
		normalizeSigns();
	}

	/*
	Default and explicit constructor. Coding must use the member initialization list! 
	*/

	

	/*
	Fraction::Fraction(long Top = 0, long Bottom = 1)
	{
		numerator=Top;
		denominator=Bottom;
	}	
	*/

	//********* Default Destructor *********\\

	Fraction::~Fraction()
	{
	}

	//********* Accessor Functions *********\\

	long Fraction::getTop() const
	{
		return numerator;
	}

	/*

	*/

	long Fraction::getBottom() const
	{
		return denominator;
	}

	/*

	*/

	string Fraction::toString()
	{
		stringstream tempStr;
		tempStr << numerator << "/" << denominator;
		return tempStr.str();
	}

	/*

	*/

		//** Calculator Functions **\\

	void Fraction::normalize()
	{
		int tempGCD = 0;
		tempGCD = gcd(numerator, denominator);
		numerator /= tempGCD;
		denominator /= tempGCD;
	}

	/*

	*/
	void Fraction::normalizeSigns()
	{
		if (numerator > 0 && denominator < 0)
		{
			numerator *= -1;
			denominator *= -1;
		}
		else if (numerator < 0 && denominator < 0)
		{
			numerator *= -1;
			denominator *= -1;	
		}			
	}

	/*

	*/
	double Fraction::toDouble() const
	{
		return (double)numerator / (double)denominator;
	}

	/*

	*/

	long Fraction::gcd(long a, long b)
	{
		for (;;)
		{
			if (!a) return b;
			b %= a;
			if (!b) return a;
			a %= b;
		}
	}

	/*

	*/

	//+= Pre?
	//=+ Post?

	//number++ pre

	//++number post



	//********* Mutator Function *********\\	

	Fraction Fraction::operator --()//Pre -1
	{
		 Fraction temp(numerator -= denominator, denominator);
		 temp.normalizeSigns();
		 return temp;
		//return  Fraction(numerator = numerator - denominator, denominator);
	}
	
	/*

	*/

	Fraction Fraction::operator ++()//Pre +1
	{
		return  Fraction(numerator += denominator, denominator);
		//return  Fraction(numerator = numerator + denominator, denominator);
	}

	/*

	*/

	Fraction Fraction::operator --(int maker)//Post -1
	{
		Fraction temp = *this;
		numerator -= denominator;
		temp.normalizeSigns();
		return temp;//alternate? version
	}

	/*

	*/

	Fraction Fraction::operator ++(int maker)//Post +1
	{
		Fraction temp = *this;
		numerator += denominator;
		return temp;//alternate? version
	}

	/*

	*/
	
	

		//**** Friend Functions ****\\	



	void operator += (Fraction & frac1, const Fraction & frac2)
	{
		frac1.numerator = (frac1.numerator*frac2.denominator) + (frac2.numerator*frac1.denominator);
		frac1.denominator = (frac1.denominator*frac2.denominator);
		frac1.normalizeSigns();
		frac1.normalize();
	}


	void operator -= (Fraction & frac1, const Fraction & frac2)
	{
		frac1.numerator = (frac1.numerator*frac2.denominator) - (frac2.getTop()*frac1.denominator);
		frac1.denominator = (frac1.denominator*frac2.denominator);
		frac1.normalizeSigns();
		frac1.normalize();
	}

	void operator *= (Fraction & frac1, const Fraction & frac2)
	{
		frac1.numerator = (frac1.numerator*frac2.numerator);
		frac1.denominator = (frac1.denominator*frac2.denominator);
		frac1.normalizeSigns();
		frac1.normalize();
	}

	void operator /= (Fraction & frac1, const Fraction & frac2)
	{
		frac1.numerator = (frac1.numerator*frac2.denominator);
		frac1.denominator = (frac1.denominator*frac2.numerator);
		frac1.normalizeSigns();
		frac1.normalize();
	}






	///*
	Fraction operator + (const Fraction & frac1, const Fraction & frac2)
	{
		Fraction temp((frac1.numerator*frac2.denominator) + (frac2.numerator*frac1.denominator), (frac1.denominator*frac2.denominator));
		temp.normalizeSigns();
		temp.normalize();
		return temp;

	}

	/*

	*/

	Fraction operator - (const Fraction & frac1, const Fraction & frac2)
	{
		Fraction temp((frac1.numerator*frac2.denominator) - (frac2.getTop()*frac1.denominator), (frac1.denominator*frac2.denominator));
		 temp.normalizeSigns();
		 temp.normalize();
		 return temp;
	}

	/*

	*/

	Fraction operator * (const Fraction & frac1, const Fraction & frac2)
	{
		Fraction temp((frac1.numerator*frac2.numerator), (frac1.denominator*frac2.denominator));
		 temp.normalizeSigns();
		 temp.normalize();
		 return temp;
	}

	/*

	*/

	Fraction operator / (const Fraction & frac1, const Fraction & frac2)
	{
		Fraction temp((frac1.numerator*frac2.denominator), (frac1.denominator*frac2.numerator));
		 temp.normalizeSigns();
		 temp.normalize();
		 return temp;
	}                             

	/*

	*/

	bool  operator == (const Fraction & frac1, const Fraction & frac2)
	{
		return frac1.numerator*frac2.denominator == frac1.denominator * frac2.numerator;


		/*
		if (frac1.numerator != frac2.numerator || frac1.denominator != frac2.denominator)
		{
			return false;
		}
		else
		{
			return true;
		}
		*/
	}

	/*

	*/

	bool  operator != (const Fraction & frac1, const Fraction & frac2)
	{
		return !(frac1.numerator*frac2.denominator == frac1.denominator * frac2.numerator);

		/*
		if (frac1.numerator != frac2.numerator || frac1.denominator != frac2.denominator)
		{
			return true;
		}
		else
		{
			return false;
		}
		*/
	}

	/*

	*/
	ostream & operator << (ostream & output, const Fraction & frac)
	{
		output << frac.numerator;
		output << ' ';
		output << frac.denominator;
		return output;
	}

	/*

	*/

	istream &  operator >> (istream & input, Fraction & frac)
	{
		//char temp;
		input >> frac.numerator;
		//input >> temp;
		input >> frac.denominator;
		return input;
	}

	/*

	*/

	//*/


	//********* Loading Members *********\\




	//*********print Function *********\\