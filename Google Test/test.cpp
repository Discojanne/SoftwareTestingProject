#include "pch.h"
//#include "Vector.cpp"
#include "..//SoftwareTestingProject/Vector.cpp"
#include "..//SoftwareTestingProject/calculator.cpp"

Calculator c;
float d = 5.0f;
Vector v = Vector(d, 7.0f, 1.0f);
Vector u = Vector(2.0f, 3.0f, 4.0f);
float vLength = sqrt(v.X() * v.X() + v.Y() * v.Y() + v.Z() * v.Z());
Vector e1 = Vector(1.0f, 0.0f, 0.0f);
Vector e2 = Vector(0.0f, 1.0f, 0.0f);
Vector e3 = Vector(0.0f, 0.0f, 1.0f);
int a = 1;
int b = 13;

Vector tempVector;
Vector tempVector2;
float tempFloat;
TEST(VectorTest, Unit) {

  EXPECT_EQ(v.X(),d);

  EXPECT_FLOAT_EQ(vLength,v.Length());
  
  tempVector = Vector(v.X() / v.Length(), v.Y() / v.Length(), v.Z() / v.Length());
  tempVector2 = Vector(u.X() / u.Length(), u.Y() / u.Length(), u.Z() / u.Length());
  EXPECT_LE(tempVector.Dot(tempVector2),1.0f);

  tempVector = e1.Cross(e2);
  EXPECT_EQ(tempVector.X(), e3.X());
  EXPECT_EQ(tempVector.Y(), e3.Y());
  EXPECT_EQ(tempVector.Z(), e3.Z());
}

TEST(CalculatorTest, Unit) {

	EXPECT_EQ(a + b, c.Add(a, b));
	EXPECT_EQ(a - b, c.Sub(a, b));
	EXPECT_EQ(b + b, c.Add(b, b));
	EXPECT_EQ(a - a, c.Sub(a, a));
}

TEST(VectorCalculatorTest, Integration) {

	EXPECT_EQ(v.X() + u.Y(), c.Add(v.X(), u.Y()));
	
	tempVector = e1.Cross(e2);
	EXPECT_EQ(tempVector.X() - e3.X(), c.Sub(tempVector.X(), e3.X()));
	EXPECT_EQ(tempVector.Y() - e3.Y(), c.Sub(tempVector.Y(), e3.Y()));
	EXPECT_EQ(tempVector.Z() - e3.Z(), c.Sub(tempVector.Z(), e3.Z()));
}