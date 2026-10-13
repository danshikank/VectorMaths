#pragma once
class Vector2d
{
public:
	Vector2d(float, float);

	float Xcoord;
	float Ycoord;

	Vector2d operator+(const Vector2d&) const;
	Vector2d operator-(const Vector2d&) const;
	Vector2d operator*(const int) const;
	Vector2d operator/(const int) const;
	int dotprod(const Vector2d&) const;
	Vector2d crossprod(const Vector2d&) const;

};

