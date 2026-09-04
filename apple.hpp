#pragma once

#include "point.hpp"
class Apple {
	Point _position;
	public:
	Apple(const Point & position);
	Point getPosition() const;
};