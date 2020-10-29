//Name: Jake Lorah
//Date: 10/24/19
//Program: Lorah-IntroArrays.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab9/Lorah-IntroArrays.c
//Professor: Dr. Pittman
//Desc: This program initializes, prints, and reverses an int type array. Then use a multi-dimensional array to store and print a group of names.

#include <stdio.h>

int main (void)
{
     //Declaring all of the int and char variables.
     int numb[100];
     int counter = 0;
     int hold, hold2, hold3;
     int test = 0;
     int number;
     int i = 0;
     char name[10][16];

     //Read in the number from names.c file.
     scanf("%i", &number);
     printf("%i\n", number);

     //This while loop reads the info.
     while (test < number)
     {
        scanf("%s", &name[test]);
        test++;
     }

     //Assigns the variable test to the value 0.
     test = 0;

     //This while loop prints the info.
     while (test < number)
     {
        printf("%s\n", name[test]);
        test++;
     }

     //This for loop scans in the numbers and counts how many numbers there are for the index.
     for (i = 0; i <= 5; i++)
     {
        scanf("%i", &numb[i]);
        counter++;
     }

     //This prints the text Original Array and displays the info under it.
     printf("Original Array: \n");

     //This for loop prints out the array.
     for (i = 0; i <= 5; i++)
     {
        printf("x[%d] = %d\n", i, numb[i]);
     }

     //Reverses the first and last number.
     hold = numb[0];
     numb[0] = numb[counter-1];
     numb[counter-1] = hold;

     //This prints the text Swapping the first and last elements and displays info under it.
     printf("Swapping the first and last elements: \n");

     //This for loop prints the results of the reverse.
     for(i = 0; i <= 5; i++)
     {
        printf("x[%i] = %d\n", i, numb[i]);
     }

     //Reverses the whole array.
     hold2 = numb[1];
     numb[1] = numb[counter-2];
     numb[counter-2] = hold2;

     //Needed to switch other two numbers.
     hold3 = numb[2];
     numb[2] = numb[counter-3];
     numb[counter-3] = hold3;
     
     //This prints the text The Reversed Array and displays info under it. 
     printf("The Reversed Array: \n");

     //This for loop prints the results of the reversed array.
     for(i = 0; i <= 5; i++)
     {
        printf("x[%d] = %d\n", i, numb[i]);
     }

     return 0;
}
