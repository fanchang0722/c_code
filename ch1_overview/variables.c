#include <stdio.h>

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
	printf("value of c is %d\n", c);
	printf("value of f is %.3f\n", f);

	int i = func();
	return 0;
}

int func()
{
	return 0;
}