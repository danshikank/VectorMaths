#include "Vector2d.h"
#include <iostream>

Vector2d::Vector2d(float x, float y)
{
	Xcoord = x;
	Ycoord = y;
}

Vector2d Vector2d::operator+(const Vector2d& other) const
{
	return Vector2d(Xcoord + other.Xcoord, Ycoord + other.Ycoord);
}

Vector2d Vector2d::operator-(const Vector2d& other) const
{
	return Vector2d(Xcoord - other.Xcoord, Ycoord - other.Ycoord);
}

Vector2d Vector2d::operator*(const int other) const
{
	return Vector2d(Xcoord * other, Ycoord * other);
}

Vector2d Vector2d::operator/(const int other) const
{
	return Vector2d(Xcoord / other, Ycoord / other);
}

int Vector2d::dotprod(const Vector2d& other) const
{
	return int(Xcoord * other.Xcoord + Ycoord * other.Ycoord);
}

Vector2d Vector2d::crossprod(const Vector2d& other) const
{
	return Vector2d(Xcoord * other.Ycoord - Ycoord * other.Xcoord, 0);
}