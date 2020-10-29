#include <stdio.h>

int main (void)
{
     char names[4][8];

     for(int i = 0; i <= 13; i++)
     {
        for(int j = 0; j <= 13; j++)
        {
           scanf("%c", &names[i][j]);
           printf("%c", names[i][j]);
        }

        //printf("%c", names[0][8]);
     }
}
