#include <gtest.h>
#include "monom.h"


TEST(Monom, can_create_Monom_with_correct_power)
{
	ASSERT_NO_THROW(Monom m(5,125));
}

TEST(Monom, can_create_Monom_with_power_less_that_0)
{
	ASSERT_ANY_THROW(Monom m(5,-1));
}

TEST(Monom, can_create_Monom_with_power_more_that_9)
{
	ASSERT_ANY_THROW(Monom m(5,8000));
}

TEST(Monom, can_create_copied_monom)
{
	Monom m1(5,100);
	ASSERT_NO_THROW(Monom m2(m1));
}

TEST(Monom, can_copied_monom_right)
{
	Monom m1(5,125);
	Monom m2(m1);
	EXPECT_EQ(m1.a,m2.a);
	EXPECT_EQ(m1.N,m2.N);
}

TEST(Monom, copied_monom_is_equal_to_source_one) 
{
	Monom m1;
	Monom m2(m1);
	EXPECT_EQ(m1, m2);
}

TEST(Monom, can_get_coeff)
{
	Monom a(5.0,100);
	EXPECT_EQ(5.0,a.a);
}

TEST(Monom, can_get_index)
{
	Monom a(5.0,100);
	EXPECT_EQ(100,a.N);
}

TEST(Monom, can_set_coeff)
{
	Monom a(5.0,100);
	a.a=10.1;
	EXPECT_EQ(10.1,a.a);
}

TEST(Monom, can_set_index)
{
	Monom a(5.0,100);
	a.N=999;
	EXPECT_EQ(999,a.N);
}

TEST(Monom, throws_when_set_element_with_negative_index)
{
	Monom a;
	ASSERT_ANY_THROW(a.N=-5);
}

TEST(Monom, throws_when_set_element_with_too_large_index)
{
	Monom a;
	ASSERT_ANY_THROW( a.N=1080);
}


TEST(Monom, can_set_next)
{
	Monom m(5.0,100);
	Monom *p = new Monom;
	m.n=p;
	EXPECT_EQ(p,m.n);
}

TEST(Monom, can_assign_monom)
{
	Monom *p = new Monom;
	Monom a(5.0,100);
	Monom b(33.3,999);
	b=a;
	Monom c(b);
	EXPECT_EQ(5.0,b.a);
	EXPECT_EQ(100, b.N);
	EXPECT_EQ(c.a,a.a);
	EXPECT_EQ(c.N,a.N);
}

TEST(Monom, can_assign_monom_to_itself)
{
	Monom m(5.0,100);
	ASSERT_NO_THROW(m = m);
}

TEST(Monom, compare_monom_with_itself_return_true)
{
	Monom m(5.0,100);
	EXPECT_EQ(true,m==m);
}

TEST(Monom, compare_equal_monoms_return_true)
{
	Monom m1(5.0,100);
	Monom m2(5.0,100);
	EXPECT_EQ(true, m1==m2);
}



TEST(Monom, compare_different_monoms)
{
	Monom m1(3.0,100);
	Monom m2(5.0,100);
	Monom m3(5.0,200);
	EXPECT_EQ(false,m1==m2);
	EXPECT_EQ(false,m2==m3);
}


TEST(Monom, can_create_monom)
{
  ASSERT_NO_THROW(Monom m(4,1,2,3));
}


TEST(Monom, can_get_coef)
{
  Monom * t = new Monom;
  t->a = 4;

 EXPECT_EQ(4,t->a);
}

TEST(Monom, can_get_degree_monom_x)
{
 Monom * t = new Monom;
  int k = t->Get_x(123);
  EXPECT_EQ(1,k);
}


TEST(Monom, can_get_degree_monom_y)
{
 Monom * t = new Monom;
  int k = t->Get_y(123);
  EXPECT_EQ(2,k);
}

TEST(Monom, can_get_degree_monom_z)
{
Monom * t = new Monom;
  int k = t->Get_z(123);
 
  EXPECT_EQ(3,k);
}

TEST(Monom, can_check_degree_of_monom)
 {
	 Monom *tmp1=new Monom;
		tmp1->N=123;
		tmp1->a=1;
	
 	EXPECT_EQ(123, tmp1->N);

 }

TEST(Monom, throws_when_create_monom_with_negative_degree)
{
  ASSERT_ANY_THROW(Monom m(2,-2,2,2));
}


TEST(Monom, throws_when_create_monom_with_high_degree)
{
  ASSERT_ANY_THROW(Monom m(2,11,12,22));
}

TEST(Monom, can_when_create_monom_with_zero_coef)
{
  ASSERT_NO_THROW(Monom m(0,1,2,3));
}



TEST(Monom, can_check_noy_equality_degree) {
 	Monom m1(1, 2, 1, 1);
 	Monom m2(1, 1, 2, 3);
 	EXPECT_NE(1 , m1 = m2);
 }

