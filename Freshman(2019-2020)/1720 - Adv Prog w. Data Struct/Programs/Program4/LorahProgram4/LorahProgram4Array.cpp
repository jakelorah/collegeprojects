//Name: Jake Lorah
//Date: 4/25/20
//Professor: Dr. Titus
//Program: LorahProgram4Array.cpp
//File Path: /home/students/jlorah/csc1720/Programs/Program4/LorahProgram4/LorahProgram4Array.cpp
//Description: My test program that converts a binary number into an equivalent decimal number.

#include <iostream>
#include <cmath>
#include "myStack.h"

using namespace std;

int checkBinary (int num); //prototype - checks if number is binary.

int checkBinary (int num) //body of the function.
{
     int dec; //holds decimals.

     while (num != 0) //A friend of mine that is an upperclassman in Computer Science gave me some help (I had the concept down, couldn't get error fixed) with this binary number check.
     {
          dec = num % 10;
         
          if (dec > 1)
               return 0;
      
          num = num / 10;
     }
   
     return 1;
}

void btdConv(long binary, int& decimal, int& weight); //prototype - binary to decimal conversion.

void btdConv(long binary, int& decimal, int& weight) //body of the function.
{
     int place; //placement variable.

     stackType<int> plcConvert(100); //creates stack to hold the decimal values.

     while (binary > 0)
     {
          //calculation for conversion.
          place = binary % 10;
          decimal = decimal + place * static_cast<int>(pow(2.0, weight));
          binary = binary / 10;
          
          weight++;

          plcConvert.push(decimal); //places decimal value in stack.
     }

     cout << plcConvert.top(); //prints out decimal value.
}

int main (void) //main function.
{
     long binary; //variable for the binary number from user.

     int decimal = 0; //variable for the resulting decimal value.

     int weight = 0; //variable for the weight of the bit.

     int binaryTest = 0; //variable to check if it is binary.

     while (binaryTest == 0) //ask user to enter a binary number, check to make sure it is valid, and then perform the conversion.
     {
          cout << "-----------------------------------" << endl;
          cout << "Jake's binary to decimal conversion" << endl;
          cout << "-----------------------------------" << endl << endl;
          cout << "Please enter a binary number: ";
          cin >> binary;

          binaryTest = checkBinary(binary);
      
          if (binaryTest == 0) //if it is not a binary number, an error is displayed.
               cout << endl << "Error: That is not a binary number. Please enter a new number." << endl << endl;
     }

     cout << endl << "Based on the binary number you entered, the decimal form is: ";

     btdConv(binary, decimal, weight); //conversion.

     cout << endl << endl;
   
     return 0;
} 
