// variable scope in c
#include <stdio.h>

int addNumbers(int num1, int num2) {
	return num1 + num2;
}

int main() {
	int sum = addNumbers(5, 6);
	printf("sum is %d\n", sum);
	return 0;
}