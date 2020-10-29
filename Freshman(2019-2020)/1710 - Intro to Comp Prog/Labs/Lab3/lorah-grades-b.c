//Name: Jake Lorah
//Date: 9/5/19
//Program: lorah-grades-b.c
//Desc: This program generates your weighted average from the grades that you input.

#include <stdio.h>

int main (void)
{
  //Creating variables and assigning them to the decimal percentage depending on how much they weigh.
  float labweightfactor = .1;
  float quizweightfactor = .1;
  float programweightfactor = .3;
  float testweightfactor = .3;

  //Creating variables and assigning them to 0 just for declaration purposes.
  float lab1 = 0;
  float lab2 = 0;
  float lab3 = 0;
  float lab4 = 0;
  float quiz1 = 0;
  float quiz2 = 0;
  float quiz3 = 0;
  float prog1 = 0;
  float test1 = 0;
  float labavg = 0;
  float labavg2 = 0;
  float labweight = 0;
  float TotalAverage = 0;

  //Creating inputs for the user to input each grade seperately and assigning that value to a variable.
  //printf("Enter the grade for Lab #1: ");
  //scanf("%f", &lab1);
  //printf("Enter the grade for Lab #2: ");
  //scanf("%f", &lab2);
  //printf("Enter the grade for Lab #3: ");
  //scanf("%f", &lab3);
  //printf("Enter the grade for Lab #4: ");
  //scanf("%f", &lab4);
  //printf("Enter the grade for Quiz #1: ");
  //scanf("%f", &quiz1);
  //printf("Enter the grade for Quiz #2: ");
  //scanf("%f", &quiz2);
  //printf("Enter the grade for Quiz #3: ");
  //scanf("%f", &quiz3);
  //printf("Enter the grade for Program #1: ");
  //scanf("%f", &prog1);
  //printf("Enter the grade for Test #1: ");
  //scanf("%f", &test1);

  //Creating all of the calculations.
  labavg = ((lab1+lab2+lab3+lab4)/4)*10;
  labweight = labavg*labweightfactor;
  float  quizavg = ((quiz1+quiz2+quiz3)/3)*10;
  float  quizweight = quizavg*quizweightfactor;
  float progweight = prog1 * programweightfactor;
  float  testweight = test1 * testweightfactor;
  float  sumweightaverage = labweight+quizweight+progweight+testweight;
  float   sumweightfactor = labweightfactor+quizweightfactor+programweightfactor+testweightfactor;

  //Creating the variable 'TotalAverage' and calculating the final weighted average.
  TotalAverage = sumweightaverage/sumweightfactor;

  //Printing your weighted average.
  printf("Your weighted average is: %f%%\n", TotalAverage);
}
