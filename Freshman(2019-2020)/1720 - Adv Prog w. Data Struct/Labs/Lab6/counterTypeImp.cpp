//Name: Jake Lorah
//Date: 2/20/20
//Professor: Dr. Titus
//Program: counterTypeImp.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab6/counterTypeImp.cpp
//Description: This test program is used to implement the class that was described in the lab directions. This is the Imp file.

//Include statements:
#include <iomanip>
#include "counterType.h"
#include <iostream>

//Implementation:
using namespace std;

void counterType::initializeCounter()
{
     count = 0;
}

void counterType::setCounter(int x)
{
     if (x >= 0)
        count = x;
     else
        count = 0;
}

int counterType::getCounter() const
{
     return count;
}

void counterType::incrementCounter()
{
     count++;
}

void counterType::decrementCounter()
{
     if (count > 0)
        count--;
}

void counterType::displayCounter() const
{
     cout << count << endl;
}

counterType::counterType(int x)
{
     if (x > 0)
        count = x;
     else
        count = 0;
}

counterType::counterType()
{
     count = 0;
}
