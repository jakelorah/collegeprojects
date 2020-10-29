#include <stdio.h>

void foo()
{
    int a = 10;
	static int static_a = 10;

	a += 5;
	static_a += 5;

	printf("a = %d, static_a = %d\n", a, static_a);
}

int main()
{

    int i;

	for (i = 0; i <10; i++) {
	
	    foo();
	}
}
