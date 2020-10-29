//Name: Jake Lorah
//Date: 10/17/19
//Program: Lorah-ImageConverter.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab8/Lorah-ImageConverter.c
//Professor: Dr. Pittman
//Desc: This program converts a color image to black and white using fscanf's and fprintf's.


#include <stdio.h>

int main (void)
{

     //Declaring imageType and comment character arrays to hold strings of text.
     //Declaring newlinechar to hold the line return.
     char imageType[3];
     char comment[256];
     char newlinechar;

     //Declaring all of the variables I will be using in the rest of my program as intigers.
     int red, green, blue, width, height, bits, total, grey, x;

     //Using the fscanf statement to take input and assign it to newlinechar.
     fscanf(stdin, "%[^\n]%c", imageType, &newlinechar);
     fscanf(stdin, "%[^\n]%c", comment, &newlinechar);

     //Using the fscanf statement to take input and assign it to width, height, and bits variables. 
     fscanf(stdin, "%i", &width);
     fscanf(stdin, "%i", &height);
     fscanf(stdin, "%i", &bits);

     //Using the fprintf statement to print the results of the inputs.
     fprintf(stdout, "P2\n");
     fprintf(stdout, "%s\n", comment);
     fprintf(stdout, "%i %i\n", width, height);
     fprintf(stdout, "%i\n", bits);

     //Assigning the variable total to the result of the width value times the height value.
     total = width*height;

     //Creating a for loop to keep asking the user to input the red, green, and blue values and assigning them to the variables red, green, and blue.
     for(x=0; x<total; x++)
     {
          fscanf(stdin, "\n%i", &red);
          fscanf(stdin, "\n%i", &blue);
          fscanf(stdin, "\n%i", &green);

          //Assigning the variable grey to the result of the red value times its pixel number, plus the green value times its pixel number, plus the blue value times its pixel number.
          grey = (int) ((red*0.35) + (green*0.5) + (blue*0.15));

          //Using the fprintf statement to print out the result of the variable grey.
          fprintf(stdout, "%i\n", grey);
     }
} 
