//Name: Jake Lorah
//Date: 3/2/20
//Professor: Dr. Titus
//Program: LorahProgram2Imp.cpp
//File Path: /home/students/jlorah/csc1720/Programs/Program2/LorahProgram2Imp.cpp
//Description: This test program is used to store a car's odometer reading, fuel level, and fuel efficiency and perform operations. This is the implementation file.

//Include statements:
#include <iomanip>
#include <string>
#include "LorahProgram2.h"

//Implementation:
using namespace std;

//Constants:
const double automobileType::defaultfuelEfficiency = 20;
const double automobileType::defaultfuelLevel = 15;
const double automobileType::maxfuelEfficiency = 200;

//Calling setProperties method from the automobileType class.
void automobileType::setProperties(double newmiles, double newfuel, double newfuelefficiency)
{
     //If statement checks to see if the values are valid or invalid.
     if (newfuel > 0 && newfuel <= maxFuel && newmiles > 0 && newfuelefficiency > 0 && newfuelefficiency <= maxfuelEfficiency)
     {
          setFuel(newfuel);
          setfuelEfficiency(newfuelefficiency);
          setMiles(newmiles);
     }

     else
     {
         cerr << "Error. Invalid value!" << endl;
         
         if (newfuel < 0 || newfuel > maxFuel)
         {
            cerr << "Invalid value: " << newfuel << endl;
            cerr << "Acceptable fuel values: 0 - " << maxFuel << endl;
         }
  
         else if (miles > 0)
         {
            cerr << "Invalid value: " << newmiles << endl;
            cerr << "Acceptable mile values: Any number greater than 0." << endl;
         }

         else if (newfuelefficiency < 1 || newfuelefficiency > maxfuelEfficiency)
         {
            cerr << "Invalid value: " << newfuelefficiency << endl;
            cerr << "Acceptable fuel efficiency values: 0 - " << maxfuelEfficiency << endl;
         }
     }
}

//Calling getInfoString method from the automobileType class.
void automobileType::getInfoString() const
{
     cout << "Miles: " << miles  << ", Fuel: " << fuel << ", Efficiency: " << fuelefficiency <<  "" << endl;
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
     //miles += x;
     fuel -= x;

     if (fuel = 0)
     {
          fuel = 0;
          miles = 1,285;
          cout << endl << "Warning: You ran out of gas! Call Triple A." << endl;
     }
}

//Calling getMiles method from the automobileType class.
double automobileType::getMiles() const
{
     return miles;
}

//Calling getFuel method from the automobileType class.
double automobileType::getFuel() const
{
     return fuel;
}

//Calling getfuelEfficiency method from the automobileType class.
double automobileType::getfuelEfficiency() const
{
     return fuelefficiency;
}

//Calling getmaxFuel method from the automobileType class.
double automobileType::getmaxFuel() const
{
     return maxFuel;
}

//Calling setMiles method from the automobileType class.
void automobileType::setMiles(double newmiles)
{

     if (miles <= newmiles)
     {
        miles = newmiles;
     }
     else
     {
        cerr << "Error! You cannot decrease miles." << endl;
     }
}

//Calling setFuel method from the automobileType class.
void automobileType::setFuel(double newfuel)
{

     if (newfuel <= maxFuel && newfuel >= 0)
     {
        fuel = newfuel;
     }
     else
     {
        cerr << "Error! Max fuel is 50." << endl;
     }
}

//Calling setfuelEfficiency method from the automobileType class.
void automobileType::setfuelEfficiency(double newfuelEfficiency)
{

     if (newfuelEfficiency <= maxfuelEfficiency && newfuelEfficiency > 0)
     {
         fuelefficiency = newfuelEfficiency;
     }
     else
     {
        cerr << "Error! Max fuel efficiency is 50." << endl;
     }
}

//Calling setmaxFuel method from the automobileType class.
void automobileType::setmaxFuel(double max)
{
     maxFuel = 50;

}

//Constructors.
automobileType::automobileType()
{
     fuel = 0;
     miles = 0;
     fuelefficiency = 0;
     maxFuel = 50;
}
