#include <stdio.h>

int FindLarger(int array[2]);
int FindSmaller(int a, int b);
char commie = 'c';

int main(void) {
	int array[] = {10, 11};
	int n, a=5, b=3;

        printf("%c ", commie);

       /*
	n = FindLarger(array);
	printf("%i\n", n);
       

	
	n = FindSmaller(a,b);
	printf("%i\n", n);
        printf("%i\n", a);	
       */	

}

int FindSmaller(int a, int b) {
	int smaller;

	if (a < b)
		smaller = a;
                a = a + b;

	if (b < a)
		smaller = b;
                a = a - b;
	
	return smaller;
}

int FindLarger(int array[]) {
	int larger;

	if (array[0] > array[1])
		larger = array[0];
                array[0] = larger;

	if (array[0] < array[1])
		larger = array[1];
                array[0] = larger;

	return larger;
}
