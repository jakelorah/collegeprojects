//Name: Jake Lorah
//Date: 10/5/19
//Class: CSC-1710-02
//Professor: Dr. Pittman
//Program: Lorah-HomeLoanCalc.c
//Directory Path: /home/students/jlorah/csc1710/Programs/Program2/Lorah-HomeLoanCalc.c
//Desc: This program creates a typical amortization table for a home mortgage.

#include <stdio.h>

int main (void)

{
     //Declaring the variables I will be using as floats and integers.
     float prinpay = 0;
     float prinbal = 0;
     float purchprice;
     float intrate;
     float monthpay;
     float monthpayamount;
     int j, z;
     float intpay1 = 0;
     float total;
   
     //Asks the user to input a purchase price without any special characters. It stores that value in the variable purchprice (float variable).
     printf("Please enter the purchase price (without the dollar sign or comma): ");
     scanf("%f", &purchprice);

     //Asks the user to input an annual interest rate without the percent sign. It stores that value in the variable intrate (float variable).
     printf("Please enter the annual interest rate (without the percent sign): ");
     scanf("%f", &intrate);

     //Asks the user to input a number of monthly payments. It stores that value in the variable monthpay (float variable).
     printf("Please enter the number of monthly payments: ");
     scanf("%f", &monthpay);

     //Asks the user to input a monthly payment amount without the dollar sign or comma. It stores that value in the variable monthpayamount (float variable).
     printf("Please enter the monthly payment amount (without the dollar sign or comma): ");
     scanf("%f", &monthpayamount);
     printf (" \n");

     //Prints the title for the table. The variable x is declared and used in the while loop which creates the dashes under the title.
     printf("Home Loan Calculator\n");
     int x=0;
     while(x<20) {
        printf("-");
        x++;
     }

     //Skips a line
     printf (" \n");

     //Prints the column names with a dash under each character (organization purposes).
     printf("\n Payment Number       Interest Payment       Principal Payment       Principal balance    \n");
     printf(" --------------       ----------------       -----------------       -----------------       \n");

     //This for loop does all of the calculations for calculating the values. Then, the final results are printed in the table under the designated column. Also, the values are organized to be aligned on the right so that the digits can increase and still be under the column title.
     prinbal = purchprice;
     intrate = intrate/100;
     j  = 1;
     total = monthpay*monthpayamount;

     for(z = 1; z <= monthpay; z+=j)
     {
        do
        {
           prinbal = prinbal - (prinpay);
           intpay1 = (intrate/12) * prinbal;
           prinpay = (monthpayamount) - intpay1;   
        }         
        while (z == monthpay + 1);

        printf("            %3i                %7.2f                 %7.2f               %9.2f\n", z, intpay1, prinpay, prinbal);
     }
                               
     return 0;
}

