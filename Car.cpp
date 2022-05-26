#include<iostream>
#include "Car.h"

Car::Car()
{
}

Car::~Car()
{
}

PassengerCar::PassengerCar()
{
}

PassengerCar::PassengerCar(std::string uCompany, std::string uModel) : company(uCompany), model(uModel)
{
	std::cout << "The brand is: " << company << " the model is: " << model << std::endl;
}

Bus::Bus()
{
}


Bus::Bus(std::string uCompany, std::string uModel): company(uCompany), model(uModel)
{
	std::cout << "The brand is: " << company << " the model is: " << model << std::endl;
}

Minivan::Minivan()
{
}

Minivan::Minivan(std::string uCompany, std::string uModel) : company(uCompany), model(uModel)
{
	std::cout << "The brand is: " << company << " the model is: " << model << std::endl;
}

