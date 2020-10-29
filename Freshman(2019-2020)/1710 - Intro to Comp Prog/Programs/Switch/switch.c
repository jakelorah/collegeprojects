#include <stdio.h>

int main (void)
{

     int num1 = 0;
     int num2 = 0;
     char oper;

     printf("Hey user, give me a number, an operator, and a number: ");
     scanf("%i %c %i", &num1, &oper, &num2);

     switch ( oper )
     {
        case '+':
             printf("The result is: /n", num1 + num2);
             break;
        case '-':
             printf("The result is: /n", num1 - num2);
             break;
        default:
             printf("Invalid");
             break;
     }

     return 0;

]
