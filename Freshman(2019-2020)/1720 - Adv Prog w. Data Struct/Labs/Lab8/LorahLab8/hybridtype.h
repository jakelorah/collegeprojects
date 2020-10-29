//Name: Jake Lorah
//Date: 3/21/20
//Professor: Dr. Titus
//Program: hybridtype.h
//File Path: /home/students/jlorah/csc1720/Labs/Lab8/LorahLab8/hybridtype.h
//Description: This test program creates a class that inherits from your Lab 7 automobileType class.

//Header file:

//#Include statements:
#ifndef hybridAutoType_H
#define hybridAutoType_H
#include "Automobiletype.h"
#include <string>

//Created a class called hybridAutoType with public and private members.
class hybridAutoType: public automobileType//making automobile public so we can access it outside of the class.
{
     //Private members:
     private:
     double chargeLevel;
     double chargeEfficiency;
     double mode;

     //Public members:
     public:
     static const bool GAS = true;
     static const bool ELECTRIC = false;
     void setChargeLevel(double);
     double getChargeLevel() const;
     void setChargeEfficiency(double);
     double getChargeEfficiency() const;
     string getInfoString() const;
     hybridAutoType(double, double, double, double, double);
     hybridAutoType();
};
