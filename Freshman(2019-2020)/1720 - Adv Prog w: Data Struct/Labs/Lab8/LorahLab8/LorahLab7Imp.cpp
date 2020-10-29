

//Taken directly from Lab 7:


//Name: Jake Lorah
//Date: 2/25/20
//Professor: Dr. Titus
//Program: LorahLab7Imp.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab7/LorahLab7/LorahLab7Imp.cpp
//Description: This test program is used to store a car's odometer reading, fuel level, and fuel efficiency and perform operations. This is the Imp file.

//Include statements:
#include <iomanip>
#include <string>
#include "LorahLab7.h"

//Implementation:
using namespace std;

//Calling setProperties method from the automobileType class.
void automobileType::setProperties(double x, double y, double z)
{
     miles = x;
     fuel = y;
     fuelefficiency = z;

     if (fuel < 0)
     {
          fuel = 0;
     }

     if (miles < 0)
     {
          miles = 0;
     }

     if (fuelefficiency < 0)
     {
          fuelefficiency = 0;
     }
}

//Calling getInfoString method from the automobileType class.
void automobileType::getInfoString() const
{
     cout << "Miles: " << miles  << ", Fuel: " << fuel << ", Efficiency: " << fuelefficiency << "" << endl;
}

//Calling addFuel method from the automobileType class.
void automobileType::addFuel (double x)
{
     if (x < 0)
     {
          x = 0;
     }
     
     fuel += x;
}

//Calling drive method from the automobileType class.
void automobileType::drive (double x)
{
     miles += x;
     fuel -= x;

     if (fuel < 0)
     {
          fuel = 0;
          cout << "You ran out of gas! Call Triple A." << endl;
     }
}

//Constructors.
automobileType::automobileType()
{
     fuel = 0;
     miles = 0;
     fuelefficiency = 0;
}
