//Name: Jake Lorah
//Date: 3/21/20
//Professor: Dr. Titus
//Program: hybridtype.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab8/LorahLab8/hybridtype.cpp
//Description: This test program creates a class that inherits from your Lab 7 automobileType class.

//Test program:

//#Include statements:
#include "Automobiletype.h"
#include "hybridtype.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Main:
int main()
{
     string data;
     automobileType hybrid1;

//Welcome Message:

     cout << "Are you ready to drive hybrid1? Get pumped!!!" << endl;
     cout << endl;

//Let the Tests Begin:

     hybrid1.setProperties(174, 12, 20);
     cout << "Hybrid1's properties were set to 174 miles on the odometer, 12 gallons of gas in the car, and 20 miles per gallon." << endl;
     cout << endl;

     data = hybrid1.getInfoString();
     cout << data << endl;
     cout << endl;

     hybrid1.setProperties(-10, -250, -3);
     cout << "Testing hybrid1 with negative numbers." << endl;
     data = hybrid1.getInfoString();
     cout << data << endl;
     cout << endl;

     hybrid1.drive(22);
     cout << "Driving hybrid1 22 miles." << endl;
     cout << endl;

     data = hybrid1.getInfoString();
     cout << "Retrieving the new InfoString data." << endl;
     cout << data << endl;
     cout << endl;

     cout << "Running out of gas test." << endl;
     hybrid1.drive(5000);
     data = hybrid1.getInfoString();
     cout << data << endl;
     cout << endl;

//Shifting to Eco:

//Welcome Message:

     cout << "Let's be more eco-friendly! Let's say yes to helping the environment." << endl;

//Let the Tests Begin:

     hybridAutoType hybrid2;
     cout << "Creating hybrid2 by using a constructor with parameters along with it." << endl;
     
     hybridAutoType hybrid2;
     cout << data << endl;
     cout << endl;

     cout << "Set the charge level of hybrid2 to 93." << endl;
     hybrid2.setChargeLevel(93);
     cout << "Charge Level = " << hybrid2.getChargeLevel() << endl;

     cout << "Set the charge efficiency of hybrid2 to 25." << endl;
     hybrid2.setChargeEfficiency(25);
     cout << "Charge Efficiency = " << hybrid2.getChargeEfficiency() << endl;

     data = hybrid2.getInfoString();

     cout << endl;
     cout << endl;

//Comparison:

     cout << "Now let's compare hybrid1 to hybrid2! Yay!" << endl;

     cout << "Data for hybrid1: " << endl;
     data = hybrid1.getInfoString();
     cout << data << endl;

     cout << "Data for hybrid2: " << endl;
     data = hybrid2.getInfoString();
     cout << data << endl;

     cout << endl;
     cout << endl;

//Final Message:

     cout << "Wow, what an excellent drive that was. Have a great day!" << endl;

     return 0;
}

