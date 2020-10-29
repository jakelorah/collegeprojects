//Name: Jake Lorah
//Date: 8/29/19
//File name: bills.c
//Desc: This is Lab 2 where we are computing the profit from a yard sale based off the number and 
//      type of bills the user inputs.



#include <stdio.h>

int main (void)
{
     //Creating variables for each type of bill.
     int bills1 = 0;
     int bills5 = 0;
     int bills10 = 0;
     int bills20 = 0;

     //Prompting the user to enter the quantity of each type of bill.
     printf("Enter the number of $1 bills: ");
     scanf("%i", &bills1);
     printf("Enter the number of $5 bills: ");
     scanf("%i", &bills5);
     printf("Enter the number of $10 bills: ");
     scanf("%i", &bills10);
     printf("Enter the number of $20 bills: ");
     scanf("%i", &bills20);

     //Creating variables for each type of bill so that we can multiply the bill quantity by the value of the bill.
     int b1 = bills1 * 1;
     int b5 = bills5 * 5;
     int b10 = bills10 * 10;
     int b20 = bills20 * 20;

     //Creating a variable named profit which adds all of the values from each type of bill.
     int profit = b1 + b5 + b10 + b20;
     printf("The total profit is: %i\n", profit);

     return 0;
}
