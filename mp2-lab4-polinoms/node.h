#ifndef __NODE_H__
#define __NODE_H__

#include <stdio.h>

struct Node{

	double a;
	int N;
	Node *n;
};

/*
struct Node{

	double val;
	Node *n;
	
};*/

class List : public Node{
	Node *h;

public:
	List(){
		h=new Node;
		h->n=h;
		h->a=0;
	}
	~List(){

	}
/*
	void Add(double val){
		Node *t= new Node;
		t->a=val;
		t->n=h->n;
		h->n=t;
	}

	void AddLast(double val){
		Node *t=new Node;
		t->a=val;
		t->n=NULL;
		Node *curr=h;
		while (curr->n!=h){
			curr=curr->n;
			curr->n=t;
		}
	}

	void Del(int i){
		int k=0;
		Node *t=h;
		while((t!=h)&&(k<i)){
			k++;
			t=t->n;
		}

		if (k==i){
			Node* t2=t->n;
			if (t2!=h){
			t->n=t2->n;
			delete t2;
			}
		}
	}

	 
*/

	int Get_val()const {
		return a;
	}

	Node * Get_next()const{
		return n;
	}

	void Set_val(int _val){
		a=_val;
	}

	void Set_next(Node * _n){
	n=_n;
	}

		



};

//node == TLink, val==Data, n==PNext
/*class Node{

	int val;//data

	Node *n;//pNext

public:
	Node(double _val,Node * _n){

		val=_val;

		n=_n;
	}

	int Get_val()const {
		return val;
	}

	Node * Get_next()const{
		return n;
	}

	void Set_val(int _val){
		val=_val;
	}

	void Set_next(Node * _n){
	n=_n;
	}
};

//h==FirstLink, 
class List{
	Node * h;
	int Ins_first(int elem);
	int Ins_mid(int elem);
	int Ins_lost(int elem);
	int Del_first(int elem);
	int Del_mid(int elem);
	int Del_lost(int elem);
	int search(Node *p,int x);


public:

	List::List(int val)
	{
	h=new Node (val,NULL);
	}

	
	
	int Is_empty()
	{
		return (h==NULL);	
	}
	
	int Is_full()
	{
		Node *temp=new Node(1,NULL);
		int res=(temp==NULL);
		if (temp!=NULL)
		{
			delete temp;
		}
		return res;
	}

	void Add_in_begining(int val)
	{
		Node *New=new Node (val,h);
		h=New;
	}
	void Add_in_end(int val)
	{
		Node *New=new Node (val,NULL);
		Node *temp=h;
		while (temp->Get_next()!=NULL)
		{
				temp=(temp->Get_next());
		}
	//	temp->Get_next(New);
		temp->Get_next();
	}

/*	int delete_from_beginning()
	{
		Node *temp=h;
		int res=temp->Get_val();
		temp=temp->Get_val();
		delete temp;
	}
*/

/*	

int delete_from_end()
	{
		Node *temp=h;
		while(temp->Get_next()!=NULL)
			temp=(temp->Get_next());
		int res=temp->Get_val();
	}

*/
	
/*	int Ins_first(int elem)
	{
		int res=0;
		Node *tmp;
		tmp=new Node(elem,h);
		h=tmp;
		if (tmp!=0)
			res=1;
		return res;	
	}
*/
	
	
	/*
	
	int List::Ins_mid(int elem,Node *p)
	{
		int res=0;
		Node*tmp;
		tmp=new Node(elem,p);
		p->Get_next();
		//p->Get_next(tmp);
		if (tmp!=0)
			res=1;
	}
	/*
	int List::Del_first(int elem)
	{
		int res;
		if (h!=0)
		{
			res=h->Get_val();
			Node *p=h->Get_next();
			delete h;
			h=p;
		}
		return res;
	}
	*/



	/*
	int List::Del_mid(Node *p)
	{
		int res=0;
		Node *m=p->Get_next();
		res=m->Get_val();
		p->Set_next(m->Get_next());
		delete m;
		return res;	
	}

/*	List::~List()
	{
	while (h!=0)
		Del_first();
	}
*/


	/*
	void List::Print()
	{
		Node *p=h;
		while(p!=NULL)
		{
			printf("%d",p->Get_val());
			p=p->Get_next();
		}
	}

/*	int List::search(Node *p, int x)
	{
		p=h;
		while((p->Get_data!=x)||(p!=NULL))
		{
			m=p;
			p=p->Get_next();
		}
		if (p!=0)
			res=1;
		p=m;
		return res;
	}
	
};
*/







#endif