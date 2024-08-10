// recursive function in c
#include <stdio.h>

int sum(int n);

int main() {
	int number, result;
	printf("Enter a positvie value: ");
	scanf("%d", &number);
	result = sum(number);
	printf("The result is %d\n", result);
	return 0;
}

int sum(int n) {
	if (n !=0) {
		return n+sum(n-1);
	}
	else {
		return n;
	}
}