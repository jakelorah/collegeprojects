//Name: Jake Lorah 
//Date: 4/25/20
//Professor: Dr. Titus
//Program: LorahProgram4List.cpp
//File Path: /home/students/jlorah/csc1720/Programs/Program4/LorahProgram4/LorahProgram4List.cpp
//Description: My test program that converts a decimal number into an equivalent binary number.

#include <iostream>
#include "linkedStack.h"

using namespace std;

void dtbConv (int dec); //prototype - decimal to binary conversion.

void dtbConv (int dec) //body of the function.
{
     int bits; //holds bits.
   
     linkedStackType<int> bitConvert; //creates stack to hold bits.

     while (dec > 0)
     {
          //calculation for conversion.
          bits = dec % 2;
          dec = dec / 2;
      
          bitConvert.push(bits); //places bit in stack.
     }

     while (!bitConvert.isEmptyStack()) //while stack is not empty, print stack.
     {
          cout << bitConvert.top(); //prints out binary value.
          bitConvert.pop(); //gets rid of top value.
     }
}

int main (void) //main function.
{
     int decimal = 0; //variable for user input which will be a decimal value.

     int check = 0; //variable to check for errors.

     while (check == 0) //ask user to enter a decimal value, check to make sure it is valid, and then perform the conversion.
     {
          cout << "-----------------------------------" << endl;
          cout << "Jake's decimal to binary conversion" << endl;
          cout << "-----------------------------------" << endl << endl;
          cout << "Please enter an integer that is greater than zero (can't be negative): ";
          cin >> decimal;

          if (decimal > 0) //if input is greater than 0, move on. If not, display an error.
               check = 1;
          else
               cout << endl << "Error: That is not an integer. Please enter a new number." << endl << endl;
     }

     cout << endl << "Based on the decimal number you entered, the binary form is: ";

     dtbConv(decimal); //conversion.

     cout << endl << endl;

     return 0;
}
