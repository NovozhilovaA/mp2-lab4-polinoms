#ifndef _POLINOM_H_
#define _POLINOM_H_
#include "monom.h"
#pragma warning (disable: 4703)

class Polinom
{

	Monom* polinom;

public:
	Polinom();
	Polinom(const Polinom &x);	
	void Add(double coeff,int N);
    void Input();
	void out_pol();
	~Polinom();
	void Clean();
	friend ostream& operator<<(ostream &out, const Polinom &p);
	Polinom&  operator=(const Polinom &p);
	bool  operator==(const Polinom &p) const;
	Polinom&  operator*(int a) const;
	Polinom&  operator+(const Polinom &p) const;
	Polinom&  operator-(const Polinom &p) const;
	Polinom& operator*(const Polinom &p) const;

};



#endif