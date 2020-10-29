//Name: Jake Lorah
//Date: 9/19/19
//Program: Lorah-ForLoops.c
//Desc: This program calculates the factorial, double factorial, and fraction factorial.

#include <stdio.h>

int main (void)
{

     //Declare variables for first part of lab (factorial).
     int x = 0;
     int y = 0;
     long factorial = 1;
 
     //Asks the user to input a number below 40 and stores that value to the variable y.
     printf("Enter a number that is below 40 to calculate its factorial: ");
     scanf("%i", &y);
 
     //For Loop that calculates the factorial.
     for (x = 1; x <= y; x++)
     {
        factorial = factorial * x;
        //Prints the factorial of the number that the user inputs.
        printf("The factorial of %i is %ld\n", y, factorial);
     }


     //Declare variables for second part of lab (double factorial).
     long factorial2;
     int y2;
     long sum = 1;
    
     //Asks the user to input a number below 40 and stores that value to the variable y2.
     printf("Enter a number that is below 40 to calculate its double factorial: ");
     scanf("%i", &y2);

     //For Loop that calculates the double factorial.
     for (x = 1; x <= y2; x++)
     {
	factorial2 = 2*x-1;
        sum  = sum * factorial2;
        //Prints the double factorial of the number that the user inputs.
        printf("The double factorial of %i is %ld\n", y2, sum);
     }


     //Declare variables for third part of lab (fraction factorial).
     float start3 = 1;
     int y3;
     float fracvar = 1;
     float fractot = 0;

     //Asks the user to input a number and stores that value to the variable y3.
     printf("Enter the fraction factorial: ");
     scanf("%i", &y3);

     //For Loop that calculates the fraction factorial.
     for (x = 1; x <= y3; x++)
     {
         start3 = .5;
         fracvar = fracvar * start3;
         fractot = fractot + fracvar;
         //Prints the fraction factorial of the number that the user inputs.
         printf("The fraction factorial of %i is %f\n", y3, fractot);
     }
 
     return 0;

}
