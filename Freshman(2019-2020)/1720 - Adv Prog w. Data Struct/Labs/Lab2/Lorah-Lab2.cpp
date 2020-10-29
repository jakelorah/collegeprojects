//Name: Jake Lorah
//Date: 1/23/20
//Professor: Dr. Titus
//Program: Lorah-Lab2.cpp
//File Path: /home/students/jlorah/csc1720/Labs/Lab2/Lorah-Lab2.cpp
//Description: This lab is program exercise #1 on page 181.

//Multiple include statements needed.
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

//Main program:
int main ()
{
    //String variables.
    string firstName, lastName, dept;
    
    //Double variables.
    double salary, bonus, taxes, distance, time, cost, speed, sales;

    //Coffee is an int because it is a whole number.
    int coffee;

    //Opens the input and output file.
    ifstream inFile;
    ofstream outFile;

    //Opens file called 'inData.txt' and prints out the file called 'outData.txt'.
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    //Fixes the decimal precision.
    outFile << fixed << showpoint;
    outFile << setprecision(2);

    //Grabs the data from the data file and puts it into seperate variables.
    inFile >> firstName >> lastName >> dept >> salary >> bonus >> taxes >> distance >> time >> coffee >> cost >> speed >> sales;

    //Prints out the name and department from the data file all in one line.
    outFile << "Name: " << firstName << " " << lastName << ", Department: " << dept << endl;

    //Prints out monthly gross salary, monthly bonus, and taxes all in one line.
    outFile << "Monthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "%" << endl;

    //Bonus calculation.
    bonus = (bonus/100) * salary;

    //Taxes calculation.
    taxes = 100 - taxes;

    taxes = taxes / 100;

    //Prints paycheck and calculation.
    outFile << "Paycheck: $" << salary + bonus * taxes << endl;

    //Prints distance traveled, miles, traveling time, and hours all in one line.
    outFile << "Distance traveled: " << distance << " miles, Traveling Time: " << time << " hours" << endl;

    //Prints average speed and miles per hour all in one line.
    outFile << "Average Speed: " << distance/time << " miles per hour" << endl;

    //Prints number of coffee cups sold and cost all in one line.
    outFile << "Number of Coffee Cups Sold: " << coffee << ", Cost: $" << cost << " per cup" << endl;

    //Prints sales amount in one line.
    outFile << "Sales Amount = $" << coffee*cost << endl;

    //Closes files.
    inFile.close();
    outFile.close();

return 0;

}  
