#include <stdio.h>

int main (void)
{
     int n, sum = 0;

     printf("My table is as follows\n\n");

     printf(" n    Sum of even integer from 2 to 2*n\n");
     printf("---   ---------------------------------\n");

     for (n = 1; n <= 10; n++)
     {
        sum += 2 * n;
        printf(" %3i    %5i\n", n, sum);
     }
}
