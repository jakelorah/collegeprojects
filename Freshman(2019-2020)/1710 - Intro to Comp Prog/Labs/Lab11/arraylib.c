//Name: Jake Lorah
//Date: 11/07/19
//Program: arraylib.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab11/arraylib.c
//Professor: Dr. Pittman
//Desc: This program requires the student to construct functions from the code written in Lab 10 to load, print, sort, and search an array.

//The #include Statements.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Everything but the main function is in this program.




//The LoadArray function loads in the array only.
int LoadArray(char name[][16]) {

    int number;
    int x;

    scanf("%i", &number);
    //printf("%i\n", number);

    for(x = 0; x < number; x++)
        scanf("%s", name[x]);
    
    return number;
}




//The PrintArray function prints the array only.
void PrintArray(char name[][16], int number){
   
    int test = 0;

    while (test < number)
    {
        printf("name[%i] = %s\n", test, name[test]);
        test++;
    }
}




//The SortArray function sorts the array in Alphabetical Order.
void SortArray(char name[][16], int number) {

    int position;
    char part1[16];
    int test = 0;

    for (int i = 0; i < number - 1; i++)
    {
        position = i;

        for(int j = position + 1; j < number; j++)
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

}




//The ReadChar function retrieves the words that begin with the letter specified.
void ReadChar(char name[][16], int number) {

    char val;
    bool isPresent = false;
    char m;
    int l = 0;
    int r = number - 1;

    scanf("%c", &val);
    scanf("%c", &val);

    printf("Name that we are searching for starts with: %c\n", val);

    for(l = 0; l < number; l++)
    {
        if (name[l][0] == val){
        isPresent = true;
        printf("%s\n", name[l]);
        }
    }

    if (isPresent != true)
        printf("No name starts with %c", val);
}
