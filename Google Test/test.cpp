#include "pch.h"
//#include "Vector.cpp"
#include "..//SoftwareTestingProject/Vector.cpp"


Vector v = Vector(5.0f, 7.0f, 1.0f);
int a = 1;

TEST(VectorTests, LearningToTest) {


  EXPECT_EQ(a, 1);
  EXPECT_TRUE(true);
  EXPECT_FLOAT_EQ((int)8.6023f,(int)v.Length());
}

TEST(VectorTests, LearningToTest2) {


	EXPECT_EQ(a, 1);
	EXPECT_TRUE(true);
	EXPECT_FLOAT_EQ((int)8.6023f, (int)v.Length());
}

TEST(VectorTests, LearningToTest3) {


	EXPECT_EQ(a, 1);
	EXPECT_TRUE(true);
	EXPECT_FLOAT_EQ((int)8.6023f, (int)v.Length());
}