// c pointer in c program
#include <stdio.h>

int main() {
	int age =25;
	printf("%p\n", &age);

	scanf("%d", &age);
	printf("%d\n", age);

	int* ptr = &age;
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	return 0;
}