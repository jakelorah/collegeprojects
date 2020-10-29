#include <stdio.h>

int findLarger(int x, int y);
int findSmaller(int x, int y);

int main (void)
{
     int a, b, larger, smaller;

     printf("Please enter two values: \n");
     scanf("%i %i", &a, &b);
   
     printf("\n");   

     larger = findLarger(a,b);
     printf("Larger: %i\n", larger);

     printf("\n");

     smaller = findSmaller(a,b);
     printf("Smaller: %i\n", smaller);
}

int  findLarger(int x, int y)
{
     int larger;
     if (x > y)
     {
        larger = x;
     }
     else
     {
        larger = y;
     }
     return larger;
}

int  findSmaller(int x, int y)
{
     int smaller;
     if (x < y)
     {
        smaller = x;
     }
     else
     {
        smaller = y;
     }
     return smaller;
}

