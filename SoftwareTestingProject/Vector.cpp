#include "Vector.h"
#include <math.h>


Vector::Vector() {
	m_x = 0;
	m_y = 0;
	m_z = 0;
}

Vector::Vector(float x, float y, float z) {
	m_x = x;
	m_y = y;
	m_z = z;
}

Vector::~Vector() {
}

float Vector::Length() {
	return sqrtf(m_x*m_x + m_y*m_y + m_z*m_z);
}

float Vector::Dot(Vector v) {

	return (m_x * v.m_x + m_y * v.m_y + m_z * v.m_z);
}

Vector Vector::Cross(Vector v) {

	return Vector();
}

float Vector::X() {
	return m_x;
}

float Vector::Y() {
	return m_y;
}

float Vector::Z() {
	return m_z;
}
