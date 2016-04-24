#include <stdio.h>
#include <iostream> 
//#include "node.h"
#include "polinom.h"
#include "monom.h"


using namespace std;
int main()
{
	/*int count = 0;

cout << "Enter the first polinom"<< endl;
	Polinom *A  = new Polinom;

	A->Input();
//cout << "A: "<<endl<<*A<<endl;


cout << "Enter the second polinom"<< endl;
	Polinom *B  = new Polinom;
//cout << "B: "<<endl<<*B<<endl;
	B->Input();

	cout<<"Operations"<<endl;
		cout<<"1. A + B"<<endl;
		cout<<"2. A - B"<<endl;
		cout<<"3. B - A"<<endl;
		cout<<"4. A * B"<<endl;
		cout<<"5. A * const"<<endl;
		cout<<"6. B * const"<<endl;

		cin >> count;
		while (count!=6)
		{
			switch (count)
			{
			case 1: 
				{
					cout << "Add "<<(*A)+(*B)<<endl;
					break;
				}
			case 2: 
				{
					cout << "Minus "<<(*A)-(*B)<<endl;
					break;
				}
			case 3: 
				{
					cout << "Minus "<<(*B)-(*A)<<endl;
					break;
				}
				/*
			case 4: 
				{
					cout << "Multy "<<(*A)*(*B)<<endl;
					break;
				}
			case 5:
				{
					int k(0);
					cout << "const:"<<endl;
					cin>>k;
					cout << "Multy on const: "<<(*A)*k<<endl;
					break;
				}	
			case 6:
				{
					int k(0);
					cout << "const:"<<endl;
					cin>>k;
					cout << "Multy on const: "<<(*B)*k<<endl;
					break;
				}	
			default: 
				{
					cout <<"Error" << endl;
					break;	
				}
			}
			cout << "Выберите операцию или введите 7" << endl;
			cin >> count;
	}
	
	*/
	setlocale(LC_ALL, "Russian");
	double koeff;
	int i,j,k;
	char Y;
	Polinom A,B;
	int x = 1;
int f=1;
	 
	while (f == 1)
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
				
		 f=0;
		cout << A << endl;
			
	
		}

		f=1;

		while (f == 1)
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

	B.Add(koeff, t );
	cout << B << endl;

		cout << "more(Y/N) ?: ";
		cin >> Y;
		if (Y == 'N'||Y=='n'){
				
		 k=0;
		cout << B << endl;
			
		
		}



		cout << "Сложение:" << endl;
	Polinom C,D,F;
	C = A + B;
	cout << C<<endl;
	cout << "----------------------------------------------" << endl;
	cout << "Вычитание:" << endl;
	D = A - B;
	cout << D<<endl;
	cout << "----------------------------------------------" << endl;
	//cout << "Умножение:" << endl;
	//F = A*B;
	//cout << F<<endl;
	 
	f=0;
	
	
		}
		
	}

	}
	
