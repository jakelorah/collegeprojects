#include <stdio.h>

int main(void)
{
    int num = 5;

    while (num > 0)
    {
        if (num == 3)
	    break;

	printf("%i\n", num);

	num--;
    }

}
