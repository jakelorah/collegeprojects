//Name: Jake Lorah
//Date: 12/2/19
//Program: Lorah-Hangman.c
//File Path: /home/students/jlorah/csc1710/Programs/Program5/Lorah-Hangman.c
//Professor: Dr. Pittman
//Desc: This program creates the "Hangman" game from your childhood.

//#Include statements that are needed for the program.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Creating a function called countArray.
int countArray(char a[1][5], char b[1][5]);

//Creating a for loop and an if statement inside the countArray function. 
int countArray(char a[1][5], char b[1][5])
{
     int x;
     int count;
  
     for (x = 0; x < 8; x++)
     {
        if (a[0][x] == b[0][x])
        {
           count += 1;
        }
     }

     return count;
}

//This begins my main function where everything goes down.
int main (void)
{
     //Declaring variables used in main function.
     char word[1][8] = {"computer"};
     char dash[1][8] = {"--------"};
     char gameletter;
     _Bool counterB = 0;
     int i, n, mark;
     int wrong=0;

     //Prints a nice title for the user that is playing the game, letting him/her know that the game has started.
     //Also prints out the number of dashes from the word being guessed.
     printf("Let the games begin.\n\n");
     printf("%s\n\n", dash[0]);

     //While statement that does all the actions if the boolean stays at false.
     while (counterB == 0)
     {
        //Prints out the number of guesses wrong, then asks the user to input a new letter.
        printf("You've gotten %i wrong. Guess a letter: ", wrong);
        scanf(" %c", &gameletter);

        mark = 0;

        for (i = 0; i < 8; i++)
        {
           //This if statement compares the letters that are inputed by the user.
           if (gameletter == word[0][i])
           {
              dash[0][i] = word[0][i];
           }

           //Checks if the letter inputed does not match a letter from the word. If so, the number of marks goes up.
           else if (gameletter != word[0][i])
           {
              mark += 1;
           }
        }

        //Checks to see if there is a match.
        if (mark == 8)
        {
           wrong += 1;
        }

        n = countArray(word, dash);

        //Did the player win?
        if (n == 8)
        {
           printf("You win! Congratulations.\n\n");
           printf("The word was: %s\n\n", word[0]);
           counterB = 1;
        }

        //If not, the following happens.
        else if (wrong == 10)
        {
           printf("\n\nYou loose. I am sorry. Better luck next time!\n\n");
           printf("The word was: %s\n\n", word[0]);
           counterB = 1;
        }

        else
        {
           printf("%s\n\n", dash[0]);
        }
     }
}
