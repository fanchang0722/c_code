// tenary operator in c
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int num1 = 8;
	int num2 = 7;
	char operator = '+';

	int result = (operator == '+') ? 
	(num1 + num2): 
	(num1 - num2);
	printf("result is %d\n", result);
	return 0;
}