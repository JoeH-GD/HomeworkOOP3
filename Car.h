#pragma once
#include <string>

class Car {
private: 
	std::string company;
	std::string model;

public:
	Car();
	virtual ~Car();
};

class PassengerCar : virtual public Car {
private:
	std::string company;
	std::string model;

public:

	PassengerCar();

	PassengerCar(std::string uCompany, std::string uModel);

};

class Bus : virtual public Car {

private:
	std::string company;
	std::string model;

public:

	Bus();

	Bus(std::string uCompany, std::string uModel);

};

class Minivan : public Bus, public PassengerCar {
private:
	std::string company;
	std::string model;

public:

	Minivan();

	Minivan(std::string uCompany, std::string uModel);

};