#include <gtest.h>
#include "polinom.h"
#include "monom.h"

TEST(Polinom, can_add_monoms_with_equal_degree) {
 	
	Polinom A,B;
	A.Add(1,0);
	B.Add(2,0);
 	Polinom C = A + B;
 	EXPECT_EQ(3, C);
 }


TEST(Polinom, can_add_polinoms) {
	Polinom p1;
	Polinom p2;

	p1.Add(2, 123);
	p1.Add(2, 111);
	
	p2.Add(3, 123);
	p2.Add(3, 111);

	Polinom p;
	
	p = p1 + p2;

	
}

TEST(Polinom, can_minus_polinoms) {
	Polinom p1;
	Polinom p2;

	p1.Add(2, 123);
	p1.Add(2, 111);
	
	p2.Add(3,123);
	p2.Add(3,111);

	Polinom p;
	
	ASSERT_NO_THROW(p = p1 - p2);
}

TEST(Polinom, can_multiply_polinom_on_const){

	Polinom p1;
	
	p1.Add(2,123);
	p1.Add(2,111);
	
	int c=4;
	Polinom p;

	ASSERT_NO_THROW(p = p1 * c);

	
}

TEST(Polinom, can_create_polinom)
{
	ASSERT_NO_THROW(Polinom l);
}


TEST(Polinom, can_create_copied_polinom)
{
	Polinom p1;
	ASSERT_NO_THROW(Polinom p2(p1));
}

TEST(Polinom, copied_polinom_is_equal_to_source_one)
{
	Polinom p;
	for (int i(0);i<10;i++)
		p.Add(i,i*100);
	Polinom q(p);
	EXPECT_EQ(p,q);
}

TEST(Polinom, can_assign_polinom)
{
	Polinom *p = new Polinom;
	Polinom *q = new Polinom;
	p->Add(5.0,125);
	q->Add(7.7,343);
	ASSERT_NO_THROW(q=p);
	EXPECT_EQ(p,q);
}


TEST(Polinom, compare_equal_polinoms_return_true)
{
	Polinom *p = new Polinom;
	Polinom *q = new Polinom;
	for (int i(0);i<3;i++)
	{
		p->Add(i,i*100);
		q->Add(i,i*100);
	}
	EXPECT_EQ(true,(*p)==(*q));
}

TEST(Polinom, compare_polinom_with_itself_return_true)
{
	Polinom p;
	p.Add(5.0,125);
	EXPECT_EQ(true,p==p);
}

TEST(Polinom, compare_different_polinoms)
{
	Polinom p,q;
	p.Add(5.0,125);
	q.Add(7.7,343);
	EXPECT_EQ(false,p==q);
}




TEST(Polinom, can_sort_polinom)
{
	Polinom p;
	p.Add(1.0,333);
	p.Add(1.0,999);
	p.Add(1.0,125);
	Polinom q;
	q.Add(1.0,125);
	q.Add(1.0,333);
	q.Add(1.0,999);
	EXPECT_EQ(p,q);
}




TEST(Polinom, can_multiply_monom_on_const)
{
	Polinom p;
	p.Add(5.0,125);
	p.Add(2.0,545);
	Polinom res = p*5;
	Polinom q;
	q.Add(5.0*5,125);
	q.Add(2.0*5,545);
	EXPECT_EQ(res,q);
}



TEST(Polinom, can_add_polinoms_with_equal_index)
{
	Polinom p,q;
	p.Add(5.0,125);
	q.Add(1.0,125);	
	Polinom res;
	res.Add(6.0,125);
	EXPECT_EQ(res,p+q);
}

TEST(Polinom, can_add_polinoms_with_not_equal_index)
{
	Polinom p,q;
	p.Add(5.0,666);
	q.Add(1.0,444);
	Polinom res;
	res.Add(5.0,666);
	res.Add(1.0,444);
	EXPECT_EQ(res,p+q);
}

TEST(Polinom, can_substract_polinoms_with_equal_index)
{	
	Polinom p,q;
	p.Add(5.0,125);
	q.Add(1.0,125);	
	Polinom res;
	res.Add(4.0,125);
	EXPECT_EQ(res,p-q);
}

TEST(Polinom, can_substract_polinoms_with_not_equal_index)
{
	Polinom p,q;
	p.Add(5.0,666);
	q.Add(1.0,444);
	Polinom res;
	res.Add(5.0,666);
	res.Add(-1.0,444);
	EXPECT_EQ(res,p-q);
}

TEST(Polinom, can_multiply_polinoms_with_equal_index)
{
	Polinom p,q,res;
	p.Add(5,421);
	q.Add(15,421);
	q=q*p;
	res.Add(75,842);
	EXPECT_EQ(q,res);
}

TEST(Polinom, can_multiply_polinoms_with_not_equal_index)
{
	Polinom p,q,res;
	p.Add(5,842);
	q.Add(15,421);
	q=q*p;
	res.Add(75,1263);
	EXPECT_EQ(q,res);
}



TEST(Polinom, output_without_nulls_2)
{
	Polinom p,q;
	p.Add(2,0);
	p.Add(5,421);
	p.Add(-2,0);
	q.Add(5,421);
	EXPECT_EQ(p,q);
}



