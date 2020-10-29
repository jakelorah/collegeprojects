//Name: Jake Lorah
//Date: 11/07/19
//Program: arraylib.h
//File Path: /home/students/jlorah/csc1710/Labs/Lab11/arraylib.h
//Professor: Dr. Pittman
//Desc: This program requires the student to construct functions from the code written in Lab 10 to load, print, sort, and search an array.

//The #include Statements.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Only the function prototypes are in this program.
int LoadArray(char name[][16]);

void PrintArray(char name[][16], int number);

void SortArray(char name[][16], int number);

void ReadChar(char name[][16], int number);

int main (void);
