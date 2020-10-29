#include <stdio.h>

int main(void)
{

	/*
	 * if ( expression )
	 * {
	 *		do something
	 * }
         */

         int x,y;

         printf("Please enter the value for x: \n");
         scanf("%i", &x);

         printf("Please enter the value y: \n");
         scanf("%i", &y);

         //if (x != y) - not equal
         //if (x > y)
         if (x == y)
         {
             printf("It is true.\n");
         }
         else
         {
             printf("It is false.\n");
         }
}
