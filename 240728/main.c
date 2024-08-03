// math operator
// addition +
// subtraction -
// multiplication x
// division /
// remaider %
// increment ++
// decrement --
// type conversion
#include <stdio.h>

int main()
{
	int x = 12;
	// int result = x+1;
	// printf("%d\n", x+3);
	printf("%d\n", x);
	// printf("%d\n", ++x);
	// printf("%d\n", x);
	printf("%d\n", --x);
	printf("%d\n", x);
	printf("\n");
	x = 12;
	printf("%d\n", x);
	printf("%d\n", x--);
	printf("%d\n", x);

	printf("\n");
	printf("%d\n", 5 % 3);
	printf("%d\n", 5 % 2);

	double a = 5.67;
	int b = 9;
	double result = a + b;
	printf("%.2f\n", result);
	return 0;
}