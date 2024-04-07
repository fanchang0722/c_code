#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	/* my first program in c */
	printf("Hello world! \n");
	printf("storage size for int : %d\n", sizeof(int));
	printf("storage size for float: %d\n", sizeof(float));
	printf("Minimum float positive value %E\n", FLT_MIN);
	printf("Maximum float positive value %E\n", FLT_MAX);
	printf("Precision value %d\n", FLT_DIG);
	return 0;
}