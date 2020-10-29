//Name: Jake Lorah
//Date: 11/23/19
//Program: Lorah-BotFighter.c
//File Path: /home/students/jlorah/csc1710/Programs/Program4/Lorah-BotFighter.c
//Professor: Dr. Pittman
//Desc: This program will allow you to exercise functions and structs as discussed in class. To that end, youwill be creating a simple fighter game consisting of a smallarenaand two characters. The characters willfight each other without user control or input. 

//Importing the libraries.
#include <stdio.h>
#include <stdbool.h>
#include "randomNumber.h"
#include <string.h>
#include <unistd.h>
#include <time.h>

//Define the struct fighter which contains variables.
struct fighter{
    int hp;
    int wins;
    char name[30];
};

//Define the function Attack.
int Attack (void){
    int push;
    push = getRandomNumber (1, 6);
    sleep(1);
    if (push % 2 == 0)
       return 0;
    else
       return 1;}

//Define the function RunAway.
int RunAway (void){
    int flee;
    flee = getRandomNumber (0, 1);
    sleep(1);
    return flee;}

//Define the function Punch.
int Punch (void){
    int bam;
    bam = getRandomNumber (1, 4);
    sleep(1);
    return bam;}

//Define the function Kick.
int Kick (void){
    int bam;
    bam = getRandomNumber (2, 5);
    sleep(1);
    return bam;}

//This is where the main function begins.
int main (void){
    int x=0;
    int cont=1;
    int temphealth1=0;
    int temphealth2=0;
    int attackType, damage, breakPoint;

    char z[2], quit[1]={'Q'}, winner[30];
    struct fighter challenger1;
    struct fighter challenger2;

    //Determines hit points of first two fighters.
    fprintf(stderr, "Please enter the name of the new chalenger: \n");
    fscanf(stdin, "%s", challenger1.name);
    challenger1.hp = getRandomNumber (25, 30);
    temphealth1 = challenger1.hp;
    sleep(1);

    fprintf(stderr, "Please enter the name of the new chalenger: \n");
    fscanf(stdin, "%s", challenger2.name);
    challenger2.hp = getRandomNumber (25, 30);
    temphealth2 = challenger2.hp;
    sleep(1);

    //This is a loop that determines the winner of the two fighters.
    while (x < 10){
       if (temphealth1 <= (0.25 * challenger1.hp))
          breakPoint = RunAway();

       if (breakPoint == 1){
          fprintf(stderr, "%s flees and %s wins!\n", challenger1.name, challenger2.name);
          memcpy(winner, challenger2.name, sizeof(winner));
          break;}

       //Determines type of attack and damage from challenger1.
       attackType = Attack();
       sleep(1);

       if (attackType == 0)
          damage = Punch();
       else
          damage = Kick();

       //Determines the damage performed and prints the result.
       temphealth2 = temphealth2 - damage;
       if (temphealth2 < 0)
          temphealth2 = 0;
       else
          temphealth2 = temphealth2;

       if (attackType == 0)
          fprintf(stderr, "%s punches %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);
       else
          fprintf(stderr, "%s kicks %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);

       if (temphealth2 <= 0){
          memcpy(winner, challenger1.name, sizeof(winner));
          break;}

       //Determines if challenger2 fights or flees.
       if (temphealth2 <= (0.25 * challenger2.hp))
          breakPoint = RunAway();

       if (breakPoint == 1){
          fprintf(stderr, "%s flees and %s wins!\n", challenger2.name, challenger1.name);
          memcpy(winner, challenger1.name, sizeof(winner));
          break;}

       //Determines type of attack and damage from challenger2.
       attackType = Attack();
       sleep(1);

       if (attackType == 0)
          damage = Punch();
       else
          damage = Kick();

       //Determines the damage performed and prints the result.
       temphealth1 = temphealth1 - damage;
       if (temphealth1 < 0)
          temphealth1 = 0;
       else
          temphealth1 = temphealth1;

       if (attackType == 0)
          fprintf(stderr, "%s gets punched by %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);
       else
          fprintf(stderr, "%s gets kicked by %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);

       if (temphealth1 <= 0){
          memcpy(winner, challenger2.name, sizeof(winner));
          break;}
       x++;}

       //Create and open the victor file.
       FILE *victor;
       victor = fopen("/home/students/jlorah/csc1710/Programs/Program4", "w");

       //Determines the initial victor.
       if (strcmp (challenger1.name, winner) == 0){
          fprintf(victor, "%s", challenger1.name);
          fprintf(victor, "\n%i", challenger1.hp);}

       if (strcmp (challenger2.name, winner) == 0){
          fprintf(victor, "%s", challenger2.name);
          fprintf(victor, "\n%i", challenger2.hp);}

       //Closes the file.
       fclose(victor);

       //Asks the user if they want to keep playing.
       fprintf(stderr, "Would you like to continue playing? If so, type any single character. If you want to quit, type Q: \n");
       fscanf(stdin, "%ls", z);

       if(z[0] == quit[0])
          cont = 0;
       else
          cont = 1;

       //This loop keeps the game running until the user types Q.
       while (cont != 0){
          x = 0;
          breakPoint = 0;

       //Import data to fighter 1.
       victor = fopen("/home/students/jlorah/csc1710/Programs/Program4", "r");

       fscanf(victor, "%s", &challenger1.name);
       fscanf(victor, "\n%i", &challenger1.hp);
       temphealth1 = challenger1.hp;

       fclose(victor);

       //Ask user to name the new fighter with hit points.
       fprintf(stderr, "Please enter the name of the new chalenger: \n");
       fscanf(stdin, "%s", challenger2.name);
       challenger2.hp = getRandomNumber (25, 30);
       temphealth2 = challenger2.hp;
       sleep(1);


//This whole section is a duplicate of the above code because we have to reinitiate the combat loop

       
       //This is a loop that determines the winner of the two fighters.
       while (x < 10){
         if (temphealth1 <= (0.25 * challenger1.hp))
            breakPoint = RunAway();

         if (breakPoint == 1){
            fprintf(stderr, "%s flees and %s wins!\n", challenger1.name, challenger2.name);
            memcpy(winner, challenger2.name, sizeof(winner));
            break;}

       //Determines type of attack and damage from challenger1.
       attackType = Attack();
       sleep(1);

       if (attackType == 0)
          damage = Punch();
       else
          damage = Kick();

       //Determines the damage performed and prints the result.
       temphealth2 = temphealth2 - damage;
       
       if (temphealth2 < 0)
          temphealth2 = 0;
       else
          temphealth2 = temphealth2;

       if (attackType == 0)
          fprintf(stderr, "%s punches %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);
       else
          fprintf(stderr, "%s kicks %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);

       if (temphealth2 <= 0){
          memcpy(winner, challenger1.name, sizeof(winner));
          break;}

       //Determines if challenger2 fights or flees.
       if (temphealth2 <= (0.25 * challenger2.hp))
          breakPoint = RunAway();

       if (breakPoint == 1){
          fprintf(stderr, "%s flees and %s wins!\n", challenger2.name, challenger1.name);
          memcpy(winner, challenger1.name, sizeof(winner));
          break;}

       //Determines type of attack and damage from challenger2.
       attackType = Attack();
       sleep(1);

       if (attackType == 0)
          damage = Punch();
       else
          damage = Kick();

       //Determines the damage performed and prints the result.
       temphealth1 = temphealth1 - damage;
       if (temphealth1 < 0)
          temphealth1 = 0;
       else
          temphealth1 = temphealth1;

       if (attackType == 0)
          fprintf(stderr, "%s gets punched by %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);
       else
          fprintf(stderr, "%s gets kicked by %s %i %i\n", challenger1.name, challenger2.name, temphealth1, temphealth2);

       if (temphealth1 <= 0){
          memcpy(winner, challenger2.name, sizeof(winner));
          break;}
       x++;}

       //Re-opens the victor file.
       victor = fopen("/home/students/jlorah/csc1710/Programs/Program4", "w");

       //Determines the initial victor.
       if (strcmp (challenger1.name, winner) == 0){
          fprintf(victor, "%s", challenger1.name);
          fprintf(victor, "\n%i", challenger1.hp);}

       if (strcmp (challenger2.name, winner) == 0){
          fprintf(victor, "%s", challenger2.name);
          fprintf(victor, "\n%i", challenger2.hp);}

       //Closes the file.
       fclose(victor);

       //Asks the user if they want to keep playing.
       fprintf(stderr, "Would you like to continue playing? If so, type any single character. If you want to quit, type Q: \n");
       fscanf(stdin, "%ls", z);

       if(z[0] == quit[0])
          cont = 0;
       else
          cont = 1;
}

return 0;
}   
