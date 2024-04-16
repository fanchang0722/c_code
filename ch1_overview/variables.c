#include <stdio.h>
#include <float.h>
//Variable declaration
extern int a, b;
extern int c;
extern float f;
int func();


int main()
{
	int a, b, c;
	float f;
	a=10;
	b=20;
	c=a+b;
	f=70./3.;
	printf("value of c is %d \n", c);
	printf("value of f is %.3f \n", f);
	printf("size of int is %d \n", sizeof(int));
	printf("size of float is %d \n", sizeof(float));
	printf("size of double is %d \n", sizeof(double));
	printf("size of long double is %d \n", sizeof(long double));
	printf("size of long double is %E \n", FLT_MIN);
	printf("size of long double is %E \n", FLT_MAX);
	int i = func();
	
	return 0;
}

int func()
{
	return 0;
}
