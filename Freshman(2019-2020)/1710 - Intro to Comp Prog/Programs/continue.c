#include <stdio.h>

int main(void)
{
    int num = 7;

    while (num > 0)
    {
	num--;
	
	if (num == 5)
	{
	    printf("the inner i: %i\n", num);
	    continue;
	}
	printf("%i\n", num);	
    }
}
