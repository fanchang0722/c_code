// break and continue example in c
#include <stdio.h>

int main() {

	while(1) {
		int number;
		printf("Please input a number: ");
		scanf("%d", &number);
		if (number<=0)
			break;
		if (number % 2 !=0)
			continue;
		printf("Even number is %d\n", number);
		// if (number % 2 == 0)
		// 	printf("Even number is %d\n", number);
		// else
		// 	continue;
	}
	return 0;
}