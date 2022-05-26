#include <string>
#include "Shape.h"

Parallelogram::Parallelogram()
{
}

int Parallelogram::Area()
{
	int area;
	area = LengthSide * height;
	return area;
}

int Circle::Area()
{
	int area;
	
	area = (int)(pow(radius, 2) * Pi);

	return area;
}

int Rectangle::Area()
{
	int area = length * width;
	return area;
}

int Square::Area()
{
	int area = pow(length, 2);
	return area;
}

int Rombus::Area()
{
	int area = (int)((firstDiagonal * secondDiagonal)/2);
	return area;
}

Shape::Shape()
{
}
