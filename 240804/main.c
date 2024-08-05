// for loop in c
#include <stdio.h>

int main() {
	int sum = 0;
	for(int i = 0; i<=100; i++) {
		// printf("number is %d\n", i);
		sum += i;
	}
	printf("%d", sum);
	return 0;
}