//Name: Jake Lorah
//Date: 11/07/19
//Program: Lorah-Functions.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab11/Lorah-Functions.c
//Professor: Dr. Pittman
//Desc: This program requires the student to construct functions from the code written in Lab 10 to load, print, sort, and search an array.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int LoadArray(char name[][16]) {

    int number;
    int x;

    scanf("%i", &number);
    //printf("%i\n", number);

    for(x = 0; x < number; x++)
        scanf("%s", name[x]);
    
    return number;
}




void PrintArray(char name[][16], int number){
   
    int test = 0;

    while (test < number)
    {
        printf("name[%i] = %s\n", test, name[test]);
        test++;
    }
}




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

    number = LoadArray(name);
   
    printf("Original Array: \n");
    PrintArray(name,number);

    printf("\nAlphabetized Array: \n");
    SortArray(name,number);
    PrintArray(name,number);

    printf("\nSearch Results: \n");
    ReadChar(name,number);   
}
