// c pointer and function in c program #25
#include <stdio.h>

void findValue(int* num) {
	*num = 39;
}

void findSquare(int* num) {
	int square = *num * *num;
	*num= square;
}

int addNumbers(int* num1, int* num2) {
	int sum;
	sum = *num1 + *num2;
	// printf("product is %d\n", *sum);
	return sum;
}

int main() {
	int number = 21;
	findValue(&number);
	findSquare(&number);
	printf("Number is %d\n", number);
	int num1 = 3;
	int num2 = 4;
	int sum;
	sum = addNumbers(&num1, &num2);
	// addNumbers(&num1, &num2, &sum);
	// printf("sum is %d\n", sum);
	printf("sum is %d\n", sum);
	printf("sum is %p\n", &sum);
	return 0;
	return 0;
}