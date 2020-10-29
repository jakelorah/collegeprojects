//Name: Jake Lorah
//Date: 10/3/19
//Program: lab7-versionA.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab7/lab7-versionA.c
//Professor: Dr. Pittman
//Desc: This program takes input from a user and the appropiate English words are printed out for the digits.

#include <stdio.h>
int main (void)
{
     //Declaring the int variable.
     int int1 = 0;

     //Asks the user to enter a single numerical digit as an integer, and stores that value to the variable int1.
     printf("Please enter a single numerical digit as an integer: ");
     scanf("%i", &int1);

     //This switch statement prints the word for the number entered.
     switch (int1)
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

        //If the user inputs something other than a number between 1 and 9, an error message will pop up.
        default :
           printf("Please enter a single integer ONLY!\n");
           break;
     }

     return 0;
}


