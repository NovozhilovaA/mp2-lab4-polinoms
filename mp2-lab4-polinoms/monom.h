#ifndef __MONOM_H__
#define __MONOM_H__

#include <stdio.h>
#include <iostream>
using namespace std;	


class Monom{

public:

	Monom *n;
	double a;//коэффициент
	int N;//свёртка


	// constructors

	Monom :: Monom(){

	}

	Monom :: Monom (double coeff, int N){

		//Monom *tmp=new Monom;
		
		this -> a=coeff;
		this -> N=N;

	}
	Monom :: Monom(double coeff,int i,int j,int k)
	{

		Monom *tmp=new Monom;
		tmp->N=set_st_pol(i,j,k);
		tmp->a=coeff;
		tmp->n=NULL;

	}

	Monom::Monom(Monom &p)
	{
		a = p.a;
		N = p.N;
		n = p.n;
	}

	// set degree of monom
	int Monom::set_st_pol(int &i,int &j,int &k)
	{ 

		if ((i<10)&&(j<10)&&(k<10))
        N=i*10*10+j*10+k;
			return N;

	}

	/*
	void get(int &i,int &j,int &k){ //получить значения степеней
	k=N%10;
	int t=N/10;
	j=t%10;
	i=t/10;
	}
	*/

	

	int Get_x(int N){

		//int NN=m->N;

		int t=N/10;
		int _i=t/10;

		return _i;
	}

	int Get_y(int N){

		//int NN=m->N;

		int t=N/10;
		int _j=t%10;


		return _j;
	}

	int Get_z(int N){
		//int NN=m->N;
		int _k=N%10;


		return _k;
	}



	Monom::~Monom()
	{

	}

	Monom& Monom::operator=(const Monom &m)
	{
		a = m.a;
		N = m.N;
		return *this;
	}


	bool Monom::operator==(const Monom &m) const
	{
		if ((a == m.a) && (N == m.N)) return true;
		else return false;
	}


};


/*
int get(int st){ //получить значения степеней
int k=st%10;
int t=st/10;
int j=t%10;
int i=t/10;
N=set_st_pol(i,j,k);
}
*/
#endif;