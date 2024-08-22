// preprocessor and macros in c program #30
#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main() {
	int number = 36;
	double squareRoot = sqrt(number);
	printf("%.2lf\n", squareRoot);

	double val2 = cbrt(125);
	printf("%.2lf\n", val2);

	printf("PI is %.4f\n", PI);
	return 0;
}