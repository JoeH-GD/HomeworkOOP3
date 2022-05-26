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


public:

	PassengerCar();

	PassengerCar(std::string uCompany, std::string uModel);

};

class Bus : virtual public Car {

private:


public:

	Bus();

	Bus(std::string uCompany, std::string uModel);

};

class Minivan : public Bus, public PassengerCar {
private:


public:

	Minivan();

	Minivan(std::string uCompany, std::string uModel);

};