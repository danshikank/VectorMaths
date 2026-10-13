#pragma once
#include "Vector2d.h"

class VecTools
{
public:

	VecTools(Vector2d, Vector2d, Vector2d, Vector2d);

	Vector2d a1;
	Vector2d a2;
	Vector2d b1;
	Vector2d b2;

	Vector2d intersection(const Vector2d& a1, const Vector2d& a2, const Vector2d& b1, const Vector2d& b2);
	
};

