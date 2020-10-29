#include <stdio.h>

int main() {
	int x = 10;
	int *y;
	
	y = &x;

	printf("The address of %d is %d \n", x, &y);

	return 0;

}
