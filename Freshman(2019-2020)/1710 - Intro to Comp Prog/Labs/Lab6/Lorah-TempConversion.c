//Name: Jake Lorah
//Date: 9/26/19
//Class: CSC-1710-02
//Professor: Dr. Pittman
//Program: Lorah-TempConversion.c
//Directory Path: /home/students/jlorah/csc1710/Labs/Lab6/Lorah-TempConversion.c
//Desc: This program creates a table that converts the temperature in F, C, and K using loops.

#include <stdio.h>

int main (void)

{
     //Declaring the variables I will be using as floats.
     float sf;
     float ef;
     float incf;
     float fahrenheit;
     float celsius;
     float kelvin;
     float i;
   
     //Asks the user to input a starting degree in Fahrenheit that is below the ending value. It stores that value in the variable 'sf'.
     printf("Please enter the starting value of degrees in Fahrenheit (Must be a value below the ending value): ");
     scanf("%f", &sf);

     //Asks the user to input an ending degree in Fahrenheit that is above the starting value. It stores that value in the variable 'ef'.
     printf("Please enter the ending value of degrees in Fahrenheit (Must be a value above the starting value): ");
     scanf("%f", &ef);

     //This if statement returns a message back to the user if the user inputs an ending degree that is below the starting degree. After the message, it promps the user again.
     if (ef <= sf)
       {
          printf("Invalid repsonse. Must enter number greater than starting value.\n");
          printf("Please enter the ending value of degrees in Fahrenheit (Must be a value above the starting value): ");
          scanf("%f", &ef);
       }

     //Asks the user to input an increment for the values. It stores that value in the variable 'incf'.
     printf("Please enter the increment between values: ");
     scanf("%f", &incf);
     printf (" \n");

     //Prints the title for the table. The variable x is declared and used in the while loop which creates the dashes under the title.
     printf("Temperature Conversion Table\n");
     int x=0;
     while(x<28) {
        printf("-");
        x++;
     }

     //Skips a line
     printf (" \n");

     //Prints the column names with a dash under each character (organization purposes).
     printf("\n Fahrenheit       Celsius       Kelvin\n");
     printf(" ----------       -------       ------\n");

     //This for loop does all of the calculations for converting the Fahrenheit value into Celsius and Kelvin. Then, the final results are printed in the table under the designated column. Also, the values are restricted to 3 decimal points and are organized to be aligned on the left.
     for (fahrenheit = sf; fahrenheit<=ef; fahrenheit += incf)
     {
        celsius = (fahrenheit-32) * 5/9; 
        kelvin = (celsius + 273.15);
        printf("%7.3f%17.3f%15.3f\n", fahrenheit, celsius, kelvin);
     }

     return 0;
}

