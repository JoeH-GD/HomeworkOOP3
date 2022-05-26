// HomeworkOOP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"
#include "Car.h"
#include "Card.h"

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

    PassengerCar myPassengerCar("Kia", "Rio");

    Bus myBus("Skoda", "24Tr");

    Minivan("Volkswagen", "T1 Samba");

    Card MyCard(HEARTS, JACK);



}

