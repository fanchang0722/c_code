#include<stdio.h>

int main() {
	// printf("Hello world.\n");
	// int age = 25;
	// printf("Age: %d\n", age);
	// age = 31;
	// printf("New age: %d\n", age);
	// printf("c-programing.\n");
	int firstNumber = 33;
	printf("firstNumber = %d\n", firstNumber);

	int secondNumber = firstNumber;
	printf("secondNumber = %d\n", secondNumber);

	double number = 12.45;
	printf("%.3f\n", number);

	double number2 = 5.5e3;
	printf("%.2f\n", number2);

	char character='z';
	printf("%c\n", character);

	printf("char size = %d\n", sizeof(character));
	printf("int size = %d\n", sizeof(firstNumber));
	printf("double size = %d\n", sizeof(number));
	// printf("int size = %d", sizeof(double));
	return 0;
}