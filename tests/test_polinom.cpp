#include <gtest.h>
#include "polinom.h"
#include "monom.h"

TEST(Monom, can_create_monom)
{
  ASSERT_NO_THROW(Monom m(4,1,2,3));
}


TEST(Monom, can_get_coef)
{
  Monom m(4,1,2,3);

 EXPECT_EQ(4,m.Get_coef());
}

TEST(Monom, can_get_degree_monom_x)
{
  Monom m(4,1,2,3);

  EXPECT_EQ(1,m.Get_x());
}


TEST(Monom, can_get_degree_monom_y)
{
  Monom m(4,1,2,3);

  EXPECT_EQ(2,m.Get_y());
}

TEST(Monom, can_get_degree_monom_z)
{
  Monom m(4,1,2,3);

  EXPECT_EQ(3,m.Get_z());
}

TEST(Monom, can_check_equality_of_monoms)
 {
 	Monom m1(1, 1, 2, 3);
 	Monom m2(1, 1, 2, 3);
 	EXPECT_EQ(1, m1 = m2);
 }

TEST(Monom, throws_when_create_monom_with_negative_degree)
{
  ASSERT_ANY_THROW(Monom m(2,-2,2,2));
}

/*
TEST(Monom, can_get_degree_of_monom)
{
  Monom m(4,1,2,3);
  Monom m2;
  EXPECT_EQ(123,m2.set_st_pol(1,2,3));
}




TEST(Monom, throws_when_create_monom_with_high_degree)
{
  ASSERT_ANY_THROW(Monom m(2,11,12,22));
}

TEST(Monom, throws_when_create_monom_with_zero_coef)
{
  ASSERT_ANY_THROW(Monom m(0,1,2,3));
}



TEST(Monom, can_check_noy_equality_degree) {
 	Monom m1(1, 2, 1, 1);
 	Monom m2(1, 1, 2, 3);
 	EXPECT_NE(1 , m1 = m2);
 }

TEST(Monom, can_add_monoms_with_equal_degree) {
 	Monom a(1, 1, 0, 0);
 	Monom b(2, 1, 0, 0);
 	Monom c = a + b;
 	EXPECT_EQ(3, c.Get_coef());
 }

TEST(Monom, can_multiply_monoms) {
	Monom a(2, 1, 2, 3);
	Monom b(2, 2, 1, 0);
	Monom c = a * b;
	EXPECT_EQ(4, c.Get_coef());
	EXPECT_EQ(3, c.Get_x());
	EXPECT_EQ(3, c.Get_y());
	EXPECT_EQ(3, c.Get_z());
}

TEST(Monom, throws_when_multiply_with_high_degree) {
	Monom a(3, 9, 0, 4);
	Monom b(2, 3, 0, 9);
	Monom c;
	ASSERT_ANY_THROW(c = a * b);
}

TEST(Polinom, Can_create_polinom){
	Polinom p1;

	p1.Insert(Add(1, 1, 2, 3));
	p1.Insert(Add(1, 1, 1, 1));

	ASSERT_NO_THROW(p1);	
}

TEST(Polinom, Can_create_polinom){
	Polinom p1;

	p1.Insert(Add(1, 1, 2, 3));
	p1.Insert(Add(1, 1, 1, 1));

	ASSERT_NO_THROW(p1);	
}

TEST(Polinom, can_add_polinoms) {
	Polinom p1;
	Polinom p2;

	p1.Add(Add(2, 1, 2, 3));
	p1.Add(Add(2, 1, 1, 1));
	
	p2.Add(Add(3, 1, 2, 3));
	p2.Add(Add(3, 1, 1, 1));

	Polinom p;
	
	p = p1 + p2;

	/////
}

TEST(Polinom, can_minus_polinoms) {
	Polinom p1;
	Polinom p2;

	p1.Add(Monom(2, 1, 2, 3));
	p1.Add(Monom(2, 1, 1, 1));
	
	p2.Add(Monom(3, 1, 2, 3));
	p2.Add(Monom(3, 1, 1, 1));

	Polinom p;
	
	p = p1 - p2;

	////
}

TEST(Polinom, can_multiply_polinom__and_monom){
	Polinom p1;
	
	p1.Add(Monom(2, 1, 2, 3));
	p1.Add(Monom(2, 1, 1, 1));
	
	
	Monom m(2, 1, 0, 0);
	Polinom p;

	p = p1 * m;

	///////
}
*/




