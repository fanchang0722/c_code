// Get user input in c programming
// scanf function example
#include <stdio.h>

int main()
{
	int age;
	printf("Input an integer: ");
	scanf("%d", &age);
	printf("Age = %d\n", age);

	double number;
	printf("Input a double: ");
	scanf("%lf", &number);
	printf("double number = %.3lf", number);
	return 0;
}