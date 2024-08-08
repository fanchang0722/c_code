// function call example in c
#include <stdio.h>

void greet() {
	printf("Good monring.\n");
}

void calculateSquare(int number) {
	int square = number * number;
	printf("Square of %d is %d\n", number, square);
}

int addNumbers(int num1, int num2) {
	return num1+num2;
}

int main() {
	greet();
	// greet();
	calculateSquare(5);
	int sum = addNumbers(3, 4);
	printf("sum is %d\n", sum);
	printf("After function call.\n");
	return 0;
}
