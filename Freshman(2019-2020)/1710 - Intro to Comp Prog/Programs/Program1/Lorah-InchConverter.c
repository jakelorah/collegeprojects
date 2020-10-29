//Name: Jake Lorah
//Date: 9/15/19
//Program: Lorah-InchConverter.c
//Desc: This program asks the user to input a number of inches and it breaks it down into miles, yards, feet, and the remainder inches.

#include <stdio.h>

int main (void)
{
     //Declaring the variables for breaking down the inches.
     //Variable names: inchesinput, miles, milesr, yards, yardsr, feet, and inches.
     int inchesinput = 0;
     int miles = 0;
     int milesr = 0;
     int yards = 0;
     int yardsr = 0;
     int feet = 0;
     int inches = 0;

     //Asks the user to enter a number of inches as a whole number.
     printf("Enter the total number of inches as a whole number: ");
     scanf("%i", &inchesinput);

     //The calculations: Uses the remainder from the previous calculation to generate the new category.
     miles = inchesinput/63360;
     milesr = inchesinput%63360;
     yards = milesr/36;
     yardsr = milesr%36;
     feet = yardsr/12;
     inches = yardsr%12;
    
     //Prints the inches that the user entered at the beginning, with text following it so the user knows that his number corresponds to the following.    
     printf("%d", inchesinput);
     printf(" inches corresponds to: ""\n");
    
     //Prints the results from the calculations with the units after the number.
     printf("%d", miles);
     printf(" miles""\n");
     printf("%d", yards);
     printf(" yards""\n");
     printf("%d", feet);
     printf(" feet""\n");
     printf("%d", inches);
     printf(" inches""\n");

     return 0;
}
