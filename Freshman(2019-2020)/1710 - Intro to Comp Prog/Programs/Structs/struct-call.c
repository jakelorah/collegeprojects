#include <stdio.h>

struct Numbers {
	int a;
	int b;
};

int Add(int a, int b)
{
	int sum;

	sum = a + b;

	return sum;
}

int main() {
	struct Numbers myNumbers;
	myNumbers.a = 10;
	myNumbers.b = 15;

	int sum;
	sum = Add(myNumbers.a, myNumbers.b);
}
