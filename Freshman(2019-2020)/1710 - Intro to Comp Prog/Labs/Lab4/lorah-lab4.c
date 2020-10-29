//Name: Jake Lorah
//Date: 9/12/19
//Program: lorah-lab4.c
//Desc: This program investigates the output of arithmetic operations using int and float variable types.

#include <stdio.h>

int main (void)
{
     //Declaring the int and float variables that were stated in the lab directions.
     int p = 17, q = 4, r = 3;
     float j = 3.00, k = 5.0;

     //Creating the variables for each expression and its result.
     float expression1 = p-q*r;
     float expression2 = p/r;
     float expression3 = p%r;
     float expression4 = p/q/r;
     float expression5 = q+r%p;
     float expression6 = q*j/p;
     float expression7 = p/q/j;
     float expression8 = p/j/q;
     float expression9 = k /=r/q;
     float expression10 = j/-q;
     float expression11 = p*r/2;

     //Creating the print statements to display the math problem with its result.
     printf("17-4*3 is equal to %f\n\n", expression1);
     printf("17/3 is equal to %f\n\n", expression2);
     printf("17remainder3 is equal to %f\n\n", expression3);
     printf("17/4/3 is equal to %f\n\n", expression4);
     printf("4+3remainder17 is equal to %f\n\n", expression5);
     printf("4*3.00/17 is equal to %f\n\n", expression6);
     printf("17/4/3.00 is equal to %f\n\n", expression7);
     printf("17/3.00/4 is equal to %f\n\n", expression8);
     printf("5.0/=3/4 is equal to %f\n\n", expression9);
     printf("j/-q is equal to %f\n\n", expression10);
     printf("p*r/2 is equal to %f\n\n", expression11);
     
     return 0;
}
