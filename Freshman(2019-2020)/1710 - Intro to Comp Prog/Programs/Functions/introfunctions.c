#include <stdio.h>

int  addNumbers(int x, int y)
{
     int sum;
     sum = x + y;
     return sum;
}

int main (void)
{
     int a, b, sum;

     printf("Please enter two values: \n");
     scanf("%i %i", &a, &b);

     sum = addNumbers(a,b);

     printf("%i\n", sum);
}
