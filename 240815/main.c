//  #24, c pointer and array in c program 
#include <stdio.h>

int main() {
	int numbers[5] = { 1, 3, 5, 7, 9};
	printf("size of integer is %d\n", sizeof(int));
	for (int i = 0; i < 5; ++i) {
		printf("number is %d, address is %p\n", numbers[i], &numbers[i]);
	}
	return 0;
}