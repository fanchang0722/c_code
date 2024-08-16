//  #24, c pointer and array in c program 
#include <stdio.h>

int main() {
	int numbers[5] = { 1, 3, 5, 7, 9};
	printf("size of integer is %d\n", sizeof(int));
	for (int i = 0; i < 5; ++i) {
		printf("number is %d, address is %p\n", numbers[i], &numbers[i]);
	}
	printf("Array address: %p\n", numbers);
	printf("number is : %d\n", *(numbers+1));

	int arr[] = {100, 12, 21, 54, 48};
	int largest = *arr;
	for (int i = 1; i < 5; ++i) {
		if (largest < *(arr+i)){
			largest = *(arr+i);
		}
	}
	printf("the larget number is %d\n", largest);
	return 0;
}