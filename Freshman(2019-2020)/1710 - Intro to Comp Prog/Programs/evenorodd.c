#include <stdio.h>

int main (void)

{

     int x;
     int r;
     printf("Hey friend! Please enter a number: ");
     scanf("%i", &x);

     r = x % 2;

     if (r == 0)
     {
        printf("That number is even.\n");
     }
     else if (r != 0)
     {
        printf("That number is odd.\n");
     }
}
