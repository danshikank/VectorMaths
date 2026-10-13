#include "VecTools.h"
#include "Vector2d.h"

Vector2d VecTools::intersection(const Vector2d& a1, const Vector2d& a2, const Vector2d& b1, const Vector2d& b2)
{
	Vector2d dA = a2 - a1;
	Vector2d dB = b2 - b1;

	Vector2d detAB = dA * dB


}