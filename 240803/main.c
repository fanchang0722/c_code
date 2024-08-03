// while loop in c program
// do while loop in c program
#include <stdio.h>

int main() {
	int count = 0;
	while (count < 5) {
		printf("while loop in C.\n");	
		count += 1;
		printf("count is %d\n", count);
	}
	printf("\n");
	count = 0;
	do {
		printf("%d\n", count);
		count += 1;
	} while(count < 5);
	return 0;
}