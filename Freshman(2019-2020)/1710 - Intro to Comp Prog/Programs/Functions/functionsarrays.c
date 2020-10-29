#include <stdio.h>

int findLarger(int array[]);
int findSmaller(int a, int b);

int main (void)
{
     int array[] = {10, 11};
     int n;
   
     printf("\n");   

     n = findLarger(array);
     printf("Larger: %i\n", n);

     printf("\n");

     /*
     n = findSmaller(FindLarger(array), FindLarger(array));
     printf("Smaller: %i\n", n);
     */
}

int  findLarger(array)
{
     int larger;
     if (a > b)
     {
        larger = a;
     }
     else
     {
        larger = b;
     }
     return larger;
}

int  findSmaller(int a, int b)
{
     int smaller;
     if (a < b)
     {
        smaller = a;
     }
     else
     {
        smaller = b;
     }
     return smaller;
}

