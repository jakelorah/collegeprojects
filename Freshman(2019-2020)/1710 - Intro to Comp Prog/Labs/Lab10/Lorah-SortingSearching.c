//Name: Jake Lorah
//Date: 10/31/19
//Program: Lorah-SortingSearching.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab10/Lorah-SortingSearching.c
//Professor: Dr. Pittman
//Desc: This program provides practice in using the sort and search code discussed in class to sort and search a 2-dimensional array of names.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (void)
{
     //Declaring all of the int, char, and bool variables.
     int test = 0;
     int i,j,n=5;
     int position;
     int number;
     char name[10][16];
     char part1[16];
     char val;
     char m;
     bool isPresent = false;

//Original Array:

     //Read in the number from names.c file.
     scanf("%i", &number);
     printf("%i\n", number);

     //This while loop reads the info.
     while (test < 6)
     {
        scanf("%s", &name[test]);
        test++;
     }

     //Assigns the variable test to the value 0.
     test = 0;

     printf("Original Array: \n");

     //This while loop prints the info.
     while (test < 6)
     {
        printf("name[%i] = %s\n", test, name[test]);
        test++;
     }

//Sorted Array:

     printf("\n\nSorted Array: \n");

     //Calculations for the sorted array.
     for (i = 0; i < number - 1; i++)
     {
        position = i;

        for(j = position + 1; j < number; j++)
        {
           if (strcmp (name[j], name[position]) < 0)
           {
               position = j;
           }
        }
      
        if (i != position)
        {
           strcpy (part1, name[position]);
           strcpy (name[position], name[i]);
           strcpy (name[i], part1);
        }
     }

     test = 0;

     //Prints out the sorted array.
     while(test < 6)
     {
        printf("name[%i] = %s\n", test, name[test]);
        test++;
     } 

//Searched Array:

     printf("\n\nSearched Array: \n");    

     int l = 0;
     int r = number - 1; 

     scanf("%c", &val);
     scanf("%c", &val);
     printf("Name that we are searching for starts with: %c", val);

     //Calculations for the searched array.
     while (!isPresent && l <= r)
     {
        m = (l + r)/2;
        if (val == name[m][0])
           isPresent = true;
        else if (val > name[m][0])
           l = m + l;
        else
           r = m - l;
     }

     //Prints out the searched array.
     if (isPresent == true)
        printf("\nNames starting with %c: %s\n", val, name[m]);
     else
        printf("No name starts with %c", val);

     return 0;
}
