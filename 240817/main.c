// c pointer and function in c program #25
#include <stdio.h>

void findValue(int* num) {
	*num = 39;
}

void findSquare(int* num) {
	int square = *num * *num;
	*num= square;
}

int* addNumbers(int* num1, int* num2) {
	int* sum;
	*sum = *num1 + *num2;
	return sum;
}

int main() {
	int number = 21;
	findSquare(&number);
	printf("Number is %d\n", number);
	int num1 = 3;
	int num2 = 4;
	// int sum;
	// int sum = addNumbers(&num1, &num2);
	int* result = addNumbers(&num1, &num2);
	// printf("sum is %d\n", sum);
	printf("sum is %d\n", *result);
	return 0;
}