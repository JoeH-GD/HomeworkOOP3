#include<iostream>
#include <string>
#include "Car.h"

Car::Car()
{
}

std::string Car::GetModel() const
{
	return model;
}

std::string Car::GetCompany() const
{
	return company;
}

Car::Car(std::string uCompany, std::string uModel): company(uCompany), model(uModel)
{
}

Car::~Car()
{
}

PassengerCar::PassengerCar()
{
	
}


PassengerCar::PassengerCar(std::string uCompany, std::string uModel): Car(uCompany, uModel)
{
	std::cout << "The brand is: " << GetCompany() << " the model is: " << GetModel() << std::endl;
}

Bus::Bus()
{
}


Bus::Bus(std::string uCompany, std::string uModel): Car(uCompany, uModel)
{
	std::cout << "The brand is: " << GetCompany() << " the model is: " << GetModel() << std::endl;
}

Minivan::Minivan()
{
}

Minivan::Minivan(std::string uCompany, std::string uModel) : Car(uCompany, uModel)
{

std::cout << "The brand is: " << GetCompany() << " the model is: " << GetModel() << std::endl;
}

