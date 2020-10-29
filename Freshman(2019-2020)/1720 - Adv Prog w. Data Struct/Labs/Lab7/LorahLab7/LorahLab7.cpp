//Name: Jake Lorah
//Date: 2/25/20
//Professor: Dr. Titus
//Program: LorahLab7.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab7/LorahLab7/LorahLab7.cpp
//Description: This test program is used to store a car's odometer reading, fuel level, and fuel efficiency and perform operations.

//Include statements:
#include <iostream>
#include <iomanip>
#include "LorahLab7.h"

using namespace std;

//Main program:
int main()
{
     automobileType car;

     //Test #1 (Test was a success. Numbers changed to zero).
     cout << endl << "Test to set all three negative numbers and see if the negative will make them default to zero:" << endl;
     car.setProperties(-1234, -6.25, -25.7);
     car.getInfoString();

     //Test #2 (Test was a success. All three numbers were shown).
     cout << endl << "Test to set all three positive numbers:" << endl;
     car.setProperties(1234, 6.25, 25.7);
     car.getInfoString();

     //Test #3 (Test was a success. Fuel was added to the car).
     cout << endl << "Test to add fuel:" << endl;
     car.addFuel(15);
     car.getInfoString();

     //Test #4 (Test was a success. However, changing the fuel value to negative made no impact. Compiler treated it as a positive value still).
     cout << endl << "Test to add a negative fuel value and see if the negative will make it default to zero:" << endl;
     car.addFuel(-15);
     car.getInfoString();

     //Test #5 (Test was a success. The car drove ten miles and the fuel level was changed automatically).
     cout << endl << "Test the drive function:" << endl;
     car.drive(10);
     car.getInfoString();

     //Test #6 (Test was a success. Depending on how many miles you drive, the fuel level will decrease. If you only drive five miles, for example, the fuel level decreases but does not reach zero. If you drive 1,000 miles, for example, the fuel level reaches zero and a message pops up).
     cout << endl << "Test the drive function with running out of fuel:" << endl;
     car.drive(1000);
     car.getInfoString();

     //Fuel efficiency stays the same throughout all operations.

     return 0;
}
