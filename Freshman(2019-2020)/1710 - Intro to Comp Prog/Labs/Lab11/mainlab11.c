//Name: Jake Lorah
//Date: 11/07/19
//Program: mainlab11.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab11/mainlab11.c
//Professor: Dr. Pittman
//Desc: This program requires the student to construct functions from the code written in Lab 10 to load, print, sort, and search an array.

//The #include Statements.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "arraylib.h"

//This is main only. It consists of declaring a lot of variables and printing the titles and results of all the functions.
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
