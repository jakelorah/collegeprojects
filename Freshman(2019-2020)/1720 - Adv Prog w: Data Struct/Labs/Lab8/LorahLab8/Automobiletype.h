
//Taken directly from Lab 7:


//Name: Jake Lorah
//Date: 2/25/20
//Professor: Dr. Titus
//Program: LorahLab7.h
//File Path: /home/students/jlorah/csc1720/Labs/Lab7/LorahLab7/LorahLab7.h
//Description: This test program is used to store a car's odometer reading, fuel level, and fuel efficiency and perform operations. This is the header file.

#include <iostream>
#include <string>

using namespace std;

//Header file that creates class automobileType with public and private elements.
class automobileType
{
     public:
          void setProperties(double, double, double); //sets the values for the car as doubles.
          void getInfoString() const; //puts info into a string format to be outputted.
          void addFuel(double); //adds fuel to the car.
          void drive(double); //puts the car into action.
          automobileType(double, double, double);
          automobileType();

     private:
          double miles;
          double fuel;
          double fuelefficiency;
};
