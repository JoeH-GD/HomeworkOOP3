// HomeworkOOP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"
#include "Car.h"
#include "Card.h"
#include "OperatorOverload.h"

int main()
{
    Parallelogram myParallelogram(3,5);

    std::cout << myParallelogram.Area() <<std::endl;

    Circle myCircle(4);
    std::cout << myCircle.Area() << std::endl;

    Rectangle myRectangle(6, 7);
    
    std::cout << myRectangle.Area() << std::endl;

    Square mySquare(5);

    std::cout << mySquare.Area() << std::endl;

    Rombus myRombus(6, 8);

    std::cout << myRombus.Area() << std::endl;


    //========================================================================================================
    PassengerCar myPassengerCar("Kia", "Rio");

    Bus myBus("Skoda", "24Tr");

    Minivan("Volkswagen", "T1 Samba");


    //=================================================================================================================
    Card MyCard;

    std::cout<<MyCard.GetValue()<<std::endl;


    //============================================================================================================
    Fraction myFraction(3, 0);

    Fraction myFraction2(4, 7);

    Fraction AnotherFraction;

    AnotherFraction = myFraction + myFraction2;

    std::cout << AnotherFraction.GetNumerator()<< "/" << AnotherFraction.GetDenominator()<< std::endl;

    AnotherFraction = myFraction - myFraction2;

    std::cout << AnotherFraction.GetNumerator() << "/" << AnotherFraction.GetDenominator()<< std::endl;

    AnotherFraction = myFraction * myFraction2;

    std::cout << AnotherFraction.GetNumerator() << "/" << AnotherFraction.GetDenominator()<< std::endl;

    AnotherFraction = myFraction / myFraction2;

    std::cout << AnotherFraction.GetNumerator() << "/" << AnotherFraction.GetDenominator()<< std::endl;

    myFraction == myFraction2? std::cout <<"fractions are equal" <<std::endl : std::cout << "Fractions are not equal"<< std::endl;
    myFraction>myFraction2? std::cout << "fraction 1 is more than fraction 2" << std::endl : std::cout << "fraction 1 is less than fraction 2" << std::endl;
    myFraction <= myFraction2 ? std::cout << "fraction 1 is less than or equal to fraction 2"<< std::endl : std::cout << "fraction 1 is more than or equal to fraction 2" << std::endl;
}

