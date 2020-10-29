//Name: Jake Lorah
//Date: 3/21/20
//Professor: Dr. Titus
//Program: hybridtypeImp.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab8/LorahLab8/hybridtypeImp.cpp
//Description: This test program creates a class that inherits from your Lab 7 automobileType class.

//Hybrid Implementation File:

//Include statements:
#include "hybridtype.h"
#include <string>

//setChargeLevel function that sets the charge level.
void hybridAutoType::setChargeLevel(double charge)
{
     if (charge < 0)
        charge = 0;
     
     chargeLevel = charge;
}

//getChargeLevel function that grabs that value and returns it.
double hybridAutoType::getChargeLevel() const
{
     return chargeLevel;
}

//setChargeEfficiency function that sets the charge efficiency to a value.
void hybridAutoType::setChargeEfficiency(double chargempg)
{
     if (chargempg < 0)
        chargempg = 0;
     
     chargeEfficiency = chargempg;
}

//getChargeEfficiency function that grabs that value and returns it.
double hybridAutoType::getChargeEfficiency() const
{
     return chargeEfficiency;
}

//getInfoString function that returns the charge level and efficiency info.
string hybridAutoType::getInfoString() const
{
     string chargeLv1 = to_string(chargeLevel);
     string chargeEff = to_string(chargeEfficiency);
     string info = automobileType::getInfoString() + " Charge Level = " + chargeLv1 + " Charge Efficiency = " + chargeEff;
     return info;
}

//hybridAutoType function that sets the default constructors to 0.
hybridAutoType::hybridAutoType()
{
     chargeLevel = 0;
     chargeEfficiency = 0;
     mode = GAS;
}

//hybridAutoType function that sets the paramerterized constructors.
hybridAutoType::hybridAutoType(double miles, double fuelLv1, double fuelEff, double ChargeLv1, double ChargeEff)
{
     chargeLevel = ChargeLv1;
     chargeEfficiency = ChargeEff;
     mode = ELECTRIC;
}
