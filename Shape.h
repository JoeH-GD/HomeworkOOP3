#pragma once
#include <string>

class Shape {

private:

	std::string name;

public:
	
	Shape();
	virtual int Area() = 0;

};

class Parallelogram : public Shape
{

private:
	std::string name = "Parallelogram";
	size_t LengthSide;
	size_t height;
	

public:
	Parallelogram();
	Parallelogram(size_t uHeight, size_t uLength) : LengthSide(uLength), height(uHeight) {};
	int Area() override;

};

class Circle : public Shape {

private:
	std::string name = "Circle";
	const float Pi = 3.14;
    size_t radius;

public:

	Circle(size_t uRadius) : radius(uRadius) {};
	int Area() override;


};

class Rectangle: public Parallelogram {

private:
	std::string name = "Rectangle";
	size_t length;
	size_t width;

public:

	Rectangle(size_t uLength, size_t uWidth) : length(uLength), width(uWidth) {};
	int Area() override;
};

class Square : public Parallelogram {
private:
	std::string name = "Square";
	size_t length;

public:

	Square(size_t uLength) : length(uLength) {};
	int Area() override;
};

class Rombus : public Parallelogram {
	
private:
	std::string name = "Rombus";
	size_t firstDiagonal;
	size_t secondDiagonal;

public:

	Rombus(size_t uFirstDiagonal, size_t uSecondDiagonal) : firstDiagonal(uFirstDiagonal), secondDiagonal(uSecondDiagonal) {};
	int Area() override;
};