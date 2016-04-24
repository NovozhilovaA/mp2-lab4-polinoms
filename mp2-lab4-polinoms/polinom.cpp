#include "polinom.h"

Polinom :: Polinom(){

//	polinom=new Monom;
//	polinom->n=NULL;
//	polinom->a=0;
	polinom = NULL;
}


Polinom :: Polinom(const Polinom &p){

	//polinom = new Monom(*x.polinom);

	polinom = new Monom;
		polinom->n=NULL;
		Monom *cur = new Monom;
		cur = p.polinom;
		while (cur != NULL)
		{
			Add(cur->a, cur->N);
			cur = cur->n;
		}

}

void Polinom::Clean()
	{
		Monom *t = new Monom;
		while (polinom != NULL)
		{
			t = polinom->n;
			delete polinom;
			polinom = t;
		}
	}

void Polinom :: Add(double coeff,int N){ //упорядоченная вставка монома в список
	/*
	if (coeff == 0) return;

	if (polinom->n == NULL) 
	{
		polinom = new Monom(coeff, N);
	    polinom -> n = NULL;

	}
		else
		{
			if (polinom->N < N)
			{
				Monom *tmp = new Monom(coeff, N);
				polinom -> n = NULL;
				tmp->n=polinom;
				polinom = tmp;
			}
			else
			{
				Monom *cur, *last;
				for (cur = polinom; cur != NULL; cur = cur->n)
				{
					if (cur->N < N) break;
					if (cur->N == N)
					{
						if ((coeff + cur->a) != 0) 
							cur-> a = coeff + cur->a;
						else
						{
							Monom *tmp = polinom;
							if (cur == polinom) polinom = cur->n;
							else
							{
								while (tmp->n != cur) tmp = tmp->n;
								tmp->n=(cur->n);
							}
							delete cur;
						}
						return;
					}
					last = cur;
				}
				if (cur != NULL)
				{
					Monom *p = new Monom(coeff, N);
					p->n=cur;
					last->n= p;
				}
				else
				{
					Monom *p = new Monom(coeff, N);
					p->n = NULL;
					last->n= p;
				}
			}
		}

*/
	
	Monom *cur;
	Monom * t;
	t =new Monom;
	//t->set_st_pol((N)Get_x,(N)Get_y, Get_z(N));
	t->N=N;
	t->a=coeff;
	t->n=NULL;

	if(coeff == 0) return;
	if(polinom==NULL)
	{ 
		polinom = new Monom(coeff, N);
		polinom -> n = NULL;
		//polinom=t;
		return;
	}

	if ((t->N)<(polinom->N)){
		t->n=polinom;
		polinom=t;
		return;
	}
	if ((t->N)==(polinom->N))
	{
		polinom->a+=t->a;
		delete t;
		return;
    }

	
		if ((polinom->a)==0)
		{
			t=polinom;
			polinom=polinom->n;
			delete t;
			return;
		}
	
	cur=polinom;
	while(cur->n!=NULL)
	{
		if ((t->N)>=(cur->n->N))
			break;
	}

	if (cur->n=NULL)
	{
		cur->n=t;
		return;
	}

	if ((cur->N)==(t->N))//->n
	{
		cur->n->a+=t->a;
		delete t;
		if (cur->a==0)//->n
		{
			t=cur->n;
			cur->n=t->n;
			delete t;
		}
		return;
	}
	t->n=cur->n;
	cur->n=t;

	
	
}

Polinom& Polinom:: operator=(const Polinom &p)
	{
		this->Clean();
		polinom = p.polinom;
		Monom *l1 = p.polinom;
		Monom *l2 = (*this).polinom;
		l2 = l1;
		while (l1 != NULL)
		{
			l2 = l1;
			l1 = l1->n;
			l2 = l2->n;
		}
		return *this;
	}

	bool Polinom:: operator==(const Polinom &p) const
	{
		Polinom *q = new Polinom(p);
		if (polinom == NULL)
		{
			if (q->polinom == NULL) return true;
			else return false;
		}
		Monom *t1 = polinom;
		Monom *t2 = q->polinom;
		int flag(1);
		while (t1 != NULL)
		{
			if ((t1->a != t2->a) || (t1->N!= t2->N))
			{
				flag = 0;
				break;
			}
			t1 = t1->n;
			t2 = t2->n;
		}
		if (flag == 1) return true;
		else return false;
	}


/*
void Polinom::out_pol()
{
	//cout << Z << endl;
	
	Monom *p=polinom;
	//Polinom *PP = new Monom;
	
	//for (Monom *i = polinom; i != NULL; i = i->n)

	while(p->n!=NULL)
	{
		    
			cout << "Degree =" << p->N;
			cout << " Coef =" << p->a << endl;	
			p=p->n;
	}
}
*/
	void Polinom :: Input(){

	double koeff;
	int i,j,k;
	char Y;
	Polinom A,B;
	 
	while (true)
	{
		cout<<"enter coefficient:";
	cin>>koeff;
	cout<<"enter i:";
	cin>>i;
	while (i>=10)
	{

		cout<<"enter another degree x"<<endl;
		cout<<"enter i:";
		cin>>i;
	}
	cout<<"enter j:";
	cin>>j;
    while (j>=10)
	{
		cout<<"enter another degree y"<<endl;
		cout<<"enter j:";
		cin>>j;
	}
	cout<<"enter k:";
	cin>>k;
    while (k>=10){
		cout<<"enter another degree z"<<endl;
		cout<<"enter k:";
		cin>>k;
	}
	int t = i*10*10+j*10+k;
	cout<< t<< endl;

	A.Add(koeff, t );
	cout << A << endl;

		cout << "more(Y/N) ?: ";
		cin >> Y;
		if (Y == 'N'||Y=='n'){
				
		 
		cout << A << endl;
			//A.out_pol();
		break;
		}

}
	}


	ostream& operator<<(ostream &out, const Polinom &p)
	{
		//Polinom q(p);
		Monom *t = p.polinom;
		/*if (t == NULL)
		{
			out << t->a;
			return out;
		}
		if (t->n == NULL)
		{
			if (t->a == 0)
			{
				out << t->a;
				return out;
			}
			else if (t->n == 0) out << t->a;
			else out << t->a << "x^" << t->N / 100 << "y^" << (t->N / 10) % 10 << "z^" << t->N % 10 << endl;
			return out;
		}
		while (t->n != NULL)
		{
			if (t->a == 0) t = t->n;
			else if (t->N == 0)
			{
				out << t->a;
				t = t->n;
			}
			else
			{
				out << t->a << "x^" << t->N / 100 << "y^" << (t->N / 10) % 10 << "z^" << t->N % 10;
				t = t->n;
			}
			if (t->n != NULL) out << " + ";
		//
		if (t->a == 0) return out;
		else if (t->N == 0) out << " + " << t->a;
		else out << " + " << t->a << "x^" << t->N / 100 << "y^" << (t->N / 10) % 10 << "z^" << t->N % 10 << endl;
		
		}*/

		while (t != NULL)
		{
			out <<t->a << " x^" << t->N / 100 << " y^" << (t->N / 10) % 10 << "  z^" << t->N % 10 << " + ";
			t = t->n;
		}



		out <<endl;

		return out;
	}




Polinom::~Polinom()
{

	Clean();
	/*Monom *tmp = polinom;
	while (tmp->n != polinom)
	{
		Monom *cur = tmp;
		tmp = tmp->n;
		delete cur;
	}
	*/
}


	
	Polinom& Polinom:: operator+(const Polinom &p) const
	{
		Polinom *res = new Polinom(*this);
		Monom *t = p.polinom;
		while (t != NULL)
		{
			(*res).Add(t->a, t->N);
			t = t->n;
		}
		return *res;
	}

Polinom& Polinom:: operator*(int a) const
	{
		Polinom *res = new Polinom;
		Polinom q(*this);
		Monom *t = q.polinom;
		if (a == 0) return *res;
		while (t != NULL)
		{
			(*res).Add(a*(t->a), t->N);
			t = t->n;
		}
		return *res;
	}

	Polinom& Polinom:: operator-(const Polinom &p) const
	{
		Polinom *res = new Polinom(*this);
		Monom *t = p.polinom;
		while (t != NULL)
		{
			(*res).Add(-t->a, t->N);
			t = t->n;
		}
		return *res;
	}
/*
	Polinom& Polinom::operator*(const Polinom &p) const
	{
		Polinom *res = new Polinom;
		Polinom q(*this);
		for (Monom *t1 = p.polinom; t1 != NULL; t1 = t1->n)
			for (Monom *t2 = q.polinom; t2 != NULL; t2 = t2->n)
			{
				int s1(0), s2(0), s3(0);
				s1 = (t1->a) % 10 + (t2->a) % 10;
				s2 = (t1->a) / 10) % 10 + ((t2->a) / 10) % 10;
				s3 = (t1->a) / 100 + (t2->a) / 100;
				if (s1 > 9 || s2 > 9 || s3 > 9)
					throw ("Одна из степеней итогового полинома >= 10");
				else (*res).Add(t1->a * t2->a, t1->a + t2->a);
			}
		return *res;
		

		

	}
	*/
	