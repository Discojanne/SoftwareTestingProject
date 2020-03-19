#include "pch.h"
//#include "Vector.cpp"
#include "..//SoftwareTestingProject/Vector.cpp"


Vector v = Vector(5.0f, 7.0f, 1.0f);
int a = 1;

TEST(TestCaseName, TestName) {


  EXPECT_EQ(a, 1);
  EXPECT_TRUE(true);
  EXPECT_FLOAT_EQ((int)8.6023f,(int)v.Length());
}