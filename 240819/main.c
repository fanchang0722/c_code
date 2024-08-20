// dynamic memory allocation in c program #28
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 4;
	int* ptr;
	int num[n];
	ptr = (int*) malloc(n * sizeof(int));
	if (ptr == NULL) {
		printf("Memory cannot be allocated");
		return 0;
	}
	// printf("%p\n", ptr);
	for(int i=0; i<n; i++) {
		printf("input %d value\n", i);
		scanf("%d", ptr+i);
		num[i] = * (ptr + i);
		// printf("%d\n", *(ptr + i));
	}
	for (int i=0; i<n; i++) {
		printf("num[%d]=%d\n", i, num[i]);
	}


	printf("Allcated Memory\n");
	for (int i = 0; i < n; ++i) {
		printf("%p\n", ptr + i);
	}

	n = 6;
	ptr = realloc(ptr, n * sizeof(int));
	printf("New allcated Memory\n");
	for (int i = 0; i < n; ++i) {
		printf("%p\n", ptr + i);
	}

	free(ptr);
	return 0;
}