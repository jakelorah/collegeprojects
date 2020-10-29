#include <stdio.h>

int main (void)
{
     int num;

     printf("Hey friend! Please enter a number: ");
     scanf("%i", &num);

     if (num >= 1 && num <= 20)
     {
        printf("Your number is in range! Good Job :)\n");
     }
     else
     {
        printf("Your number is not in range! You stink.\n");
     }
}
