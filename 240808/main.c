// std library in c
#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main() {
	int num = 24;
	printf("Square root of %d is %.3f\n", num, sqrt(num));
	char alpha = 'e';
	char upper = toupper(alpha);
	printf("%c\n", upper);
	char lower = tolower(upper);
	printf("%c\n", lower);
	return 0;
}