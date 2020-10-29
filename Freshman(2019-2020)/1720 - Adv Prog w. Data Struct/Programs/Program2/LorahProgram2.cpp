//Name: Jake Lorah
//Date: 3/2/20
//Professor: Dr. Titus
//Program: LorahProgram2.cpp
//File Path: /home/students/jlorah/csc1720/Programs/Program2/LorahProgram2.cpp
//Description: This test program is used to store a car's odometer reading, fuel level, and fuel efficiency and perform operations. If one instance appears invalid, the miles, fuel, and efficiency wont change from the previous test.

//Include statements:
#include <iostream>
#include <iomanip>
#include "LorahProgram2.h"

using namespace std;

//Main program:
int main()
{
     automobileType car;

     //Test #1 (Test was a success. Numbers changed to zero).
     cout << endl << "Test #1:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Set miles, fuel, and efficiency to negative numbers and see if the negative will make them default to zero." << endl;
     cout << "Before the test run: Miles: -1234, Fuel: -6.25, Efficiency: -25.7" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: " << endl;
     car.setProperties(-1234, -6.25, -25.7);
     car.getInfoString();

     //Test #2 (Test was a success. All three numbers were shown).
     cout << endl << "Test #2:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Set miles, fuel, and efficiency to positive numbers and see if they print out." << endl;
     cout << "Before the test run: Miles: 1234, Fuel: 6.25, Efficiency: 25.7" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: ";
     car.setProperties(1234, 6.25, 25.7);
     car.getInfoString();

     //Test #3 (Test was a success. Fuel was added to the car).
     cout << endl << "Test #3:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Add 15 gallons of fuel and see if the fuel number increases." << endl;
     cout << "Before the test run: Miles: 1234, Fuel: 6.25, Efficiency: 25.7" << endl;
     cout << "Method Used: addFuel" << endl;
     cout << "Results: ";
     car.addFuel(15);
     car.getInfoString();

     //Test #4 (Test was a success. However, changing the fuel value to negative made no impact. Compiler treated it as a positive value still).
     cout << endl << "Test #4:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Add a negative fuel value and see if the negative will make it default to zero." << endl;
     cout << "Before the test run: Miles: 1234, Fuel: -21.25, Efficiency: 25.7" << endl;
     cout << "Method Used: addFuel" << endl;
     cout << "Results: ";
     car.addFuel(-15);
     car.getInfoString();

     //Test #5 (Test was a success. The car drove ten miles and the fuel level was changed automatically).
     cout << endl << "Test #5:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Test the drive method by driving 10 miles and see if the miles and fuel level change." << endl;
     cout << "Before the test run: Miles: 1234, Fuel: 21.25, Efficiency: 25.7" << endl;
     cout << "Method Used: drive" << endl;
     cout << "Results: ";
     car.drive(10);
     car.getInfoString();

     //Test #6 (Test was a success. Depending on how many miles you drive, the fuel level will decrease. If you only drive five miles, for example, the fuel level decreases but does not reach zero. If you drive 1,000 miles, for example, the fuel level reaches zero and a message pops up).
     cout << endl << "Test #6:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Test the drive method by driving 1,000 miles and run out of fuel to see if the fuel level shows zero and a warning message appears." << endl;
     cout << "Before the test run: Miles: 1244, Fuel: 11.25, Efficiency: 25.7" << endl;
     cout << "Method Used: drive" << endl;
     cout << "Results: ";
     car.drive(1000);
     car.getInfoString();

     //Test #7 (Test was a success. Results did not change at all since it was a negative value).
     cout << endl << "Test #7:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Test the setProperties method by setting the fuel efficiency to -50." << endl;
     cout << "Before the test run: Miles: 2244, Fuel: 0, Efficiency: 25.7" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: " << endl;
     car.setProperties (3000, 20, -50);
     car.getInfoString();

     //Test #8 (Test was a success. Results did change since it was a positive value).
     cout << endl << "Test #8:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Test the setProperties method by setting the fuel efficiency to 50." << endl;
     cout << "Before the test run: Miles: 2244, Fuel: 0, Efficiency: 25.7" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: ";
     car.setProperties (3000, 20, 50);
     car.getInfoString();

     //Test #9 (Test was a success. Results did not change since fuel level was a value outside of 0-50).
     cout << endl << "Test #9:" << endl;
     cout << "--------" << endl;
     cout << "Purpose: Test the setProperties method by setting the fuel level to 55." << endl;
     cout << "Before the test run: Miles: 3000, Fuel: 20, Efficiency: 50" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: " << endl;
     car.setProperties (3000, 55, 50);
     car.getInfoString();

     //Test #10 (Test was a success. Results did change since fuel level was a value between 0-50).
     cout << endl << "Test #10:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setProperties method by setting the fuel level to 30." << endl;
     cout << "Before the test run: Miles: 3000, Fuel: 20, Efficiency: 50" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: ";
     car.setProperties (3000, 30, 50);
     car.getInfoString();

     //Test #11 (Test was a success. Results did not change since miles was a negative value).
     cout << endl << "Test #11:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setProperties method by setting the miles to -100." << endl;
     cout << "Before the test run: Miles: 3000, Fuel: 20, Efficiency: 50" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: " << endl;
     car.setProperties (-100, 30, 50);
     car.getInfoString();

     //Test #12 (Test was a success. Results did change since miles was a positive value).
     cout << endl << "Test #12:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setProperties method by setting the miles to 5000." << endl;
     cout << "Before the test run: Miles: 3000, Fuel: 30, Efficiency: 50" << endl;
     cout << "Method Used: setProperties" << endl;
     cout << "Results: ";
     car.setProperties (5000, 30, 50);
     car.getInfoString();

     //Test #13 (Test was a success. Results did not change since max fuel is 50).
     cout << endl << "Test #13:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setFuel method by setting the fuel to 51." << endl;
     cout << "Before the test run: Miles: 5000, Fuel: 30, Efficiency: 50" << endl;
     cout << "Method Used: setFuel" << endl;
     cout << "Results: " << endl;
     car.setFuel (51);
     car.getInfoString();

     //Test #14 (Test was a success. Results did change because 50 is the max fuel).
     cout << endl << "Test #14:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setFuel method by setting the fuel to 50." << endl;
     cout << "Before the test run: Miles: 5000, Fuel: 30, Efficiency: 50" << endl;
     cout << "Method Used: setFuel" << endl;
     cout << "Results: " << endl;
     car.setFuel (50);
     car.getInfoString();

     //Test #15 (Test was a success. Results did not change since you can not decrease miles).
     cout << endl << "Test #15:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setMiles method by setting the miles to 4999. You can't decrease miles, you can only increase. Miles are at 5000." << endl;
     cout << "Before the test run: Miles: 5000, Fuel: 50, Efficiency: 50" << endl;
     cout << "Method Used: setMiles" << endl;
     cout << "Results: " << endl;
     car.setMiles (4999);
     car.getInfoString();

     //Test #16 (Test was a success. Results did change since the miles increased with the min being 5000).
     cout << endl << "Test #16:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setMiles method by setting the miles to 5001. You can't decrease miles, you can only increase. Miles are at 5000." << endl;
     cout << "Before the test run: Miles: 5000, Fuel: 50, Efficiency: 50" << endl;
     cout << "Method Used: setMiles" << endl;
     cout << "Results: ";
     car.setMiles (5001);
     car.getInfoString();

     //Test #17 (Test was a success. Results did change since fuel efficiency is above 0).
     cout << endl << "Test #17:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the setfuelEfficiency method by setting the fuel efficiency to 51." << endl;
     cout << "Before the test run: Miles: 5001, Fuel: 50, Efficiency: 50" << endl;
     cout << "Method Used: setfuelEfficiency" << endl;
     cout << "Results: ";
     car.setfuelEfficiency (51);
     car.getInfoString();
     
     //Test #18 (Test was a success. The max fuel was printed).
     cout << endl << "Test #18:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the getmaxFuel method. Max fuel can not be changed so no need for a setmaxFuel method." << endl;
     cout << "Before the test run: Miles: 5001, Fuel: 50, Efficiency: 51" << endl;
     cout << "Method Used: getmaxFuel" << endl;
     cout << "Results: ";
     cout << car.getmaxFuel () << endl;

     //Test #19 (Test was a success. The current fuel level was printed).
     cout << endl << "Test #19:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the getFuel method." << endl;
     cout << "Before the test run: Miles: 5001, Fuel: 50, Efficiency: 51" << endl;
     cout << "Method Used: getFuel" << endl;
     cout << "Results: ";
     cout << car.getFuel () << endl;

     //Test #20 (Test was a success. The current miles was printed).
     cout << endl << "Test #20:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the getMiles method." << endl;
     cout << "Before the test run: Miles: 5001, Fuel: 50, Efficiency: 51" << endl;
     cout << "Method Used: getMiles" << endl;
     cout << "Results: ";
     cout << car.getMiles () << endl;

     //Test #21 (Test was a success. The current fuel efficiency was printed).
     cout << endl << "Test #21:" << endl;
     cout << "---------" << endl;
     cout << "Purpose: Test the getfuelEfficiency method." << endl;
     cout << "Before the test run: Miles: 5001, Fuel: 50, Efficiency: 51" << endl;
     cout << "Method Used: getfuelEfficiency" << endl;
     cout << "Results: ";
     cout << car.getfuelEfficiency () << endl;

     return 0;
}
