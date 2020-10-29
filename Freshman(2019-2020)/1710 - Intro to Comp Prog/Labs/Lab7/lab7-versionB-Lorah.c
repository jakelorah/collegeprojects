//Name: Jake Lorah
//Date: 10/3/19
//Program: lab7-versionB-Lorah.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab7/lab7-versionB-Lorah.c
//Professor: Dr. Pittman
//Desc: This program takes input from a user and the appropiate English words are printed out for the digits.

#include <stdio.h>
//The math.h library is needed for 'log10'.
#include <math.h>

int main (void)
{
     //Declaring the int variables.
     int int1 = 0;
     int word1 = 0;
     int digits;

     //Asks the user to enter a positive 4 digit integer, and stores that value to the variable int1. Then the variable digits is set equal to the calculation to retrieve the seperate digits.
     printf("Please enter a positive 4 digit integer: \n");
     scanf("%i", &int1);
     digits = (int)log10(int1) + 1;

     //This while loop makes sure that the inputs don't equal 0. Then the variable word1 is assigned to the calculation to retrieve the first number of the set, and then divide it by 10.
     while (int1 != 0)
     {
        word1 = (word1 * 10) + (int1 % 10);
        int1 /= 10;
     }

     //This while loop has a switch statement inside of it. The while loop confirms that the variable digits is greater than 0.
     while (digits > 0)
     {
        //This switch statement prints the words for the numbers entered.
        switch (word1 % 10)
        { 
           case 1 :
             printf("One\n");
             break;

           case 2 :
             printf("Two\n");
             break;

           case 3 :
             printf("Three\n");
             break;

           case 4 :
             printf("Four\n");
             break;

           case 5 :
             printf("Five\n");
             break;

           case 6 :
             printf("Six\n");
             break;

           case 7 :
             printf("Seven\n");
             break;

          case 8 :
             printf("Eight\n");
             break;

           case 9 :
             printf("Nine\n");
             break;

           //If the user inputs something other than a positive 4 digit integer, an error message will pop up.
           default :
             printf("Invalid format!\n");
             break;
          }
 
     //This section of code is needed to move onto the next word for the 4 digit integer. If this was not here, the word of the first digit would keep printing out.
     digits--;
        word1 = word1 /10;

     } 

     return 0;
}


