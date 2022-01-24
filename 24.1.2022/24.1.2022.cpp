#include <stdio.h>

int main()
{
	int minule = 0, predminule = 1 , fibonacci;
	for (int i = 0; i < 30; i++) {
		fibonacci = minule + predminule;
		printf("Fibonacci (%2d) = %4d\n", i, fibonacci);
		predminule = minule;
		minule = fibonacci;
	}
}
