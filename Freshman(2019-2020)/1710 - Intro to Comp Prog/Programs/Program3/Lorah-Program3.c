//Name: Jake Lorah
//Date: 11/04/19
//Program: Lorah-Program3.c
//File Path: /home/students/jlorah/csc1710/Programs/Program3/Lorah-Program3.c
//Professor: Dr. Pittman
//Desc: You've been hired for the summer by your local golf course to write a C program to recreate a scorecard for a round of golf played by four golfers. 

#include <stdio.h>

int main (void)
{

//Par Values:
     int parval[18];
     int par = 0;
   
     for(int x = 0; x < 18; x++)
     {
        scanf("%i", &parval[x]);
        par = par + parval[x];
     }



//Names:
     char names[4][8];

     for(int x = 0; x < 4; x++)
     {
        scanf("%s", &names[x]);
     }



//Scores:
     int scores[18][4];

     for(int x = 0; x < 18; x++)
     {
        for(int y = 0; y < 4; y++)
        {
          scanf("%i", &scores[x][y]);
        }   

     }



//Sum:
   int sum[4] = {0};

   for(int x = 0; x < 18; x++)
   {
     sum[0] = sum[0] + scores[x][0];
     sum[1] = sum[1] + scores[x][1];
     sum[2] = sum[2] + scores[x][2];
     sum[3] = sum[3] + scores[x][3];
   }

     for(int x=0; x < 4; x++)
     {
        printf("%8s %i\n", names[x], sum[x]);
     }



printf("\n");



//Winner:
   int winner = 0;
   int temp = sum[0] - par;

   for(int x=1; x < 4; x++)
   {
     if(temp > sum[x] - par) {
        temp = sum[x] - par;
        winner = x;
   }
}

printf(" %s is the winner with a score of  %i.\n", names[winner], temp); 



printf("\n");



//Score Card:      
printf("         ");

  for(int x = 1; x < 19; x++)
      printf("%2i ", x);

printf("  Score\n");

  for(int x = 0; x < 4; x++)
  {
     printf("%8s  ", names[x]);
  
     for(int y = 0; y < 18; y++)
    
        printf("%i  ", scores[y][x]);

     printf("  %i\n", sum[x]);      
  }



printf("\n");



//Difficulty:

//Couldn't get it to work :(


   return 0;
}     
