#include<stdio.h>
#include<stdbool.h>

int main()
{
	int number;
	printf("Input a number: ");
	scanf("%d", &number);
	if (number == 0)
	{
		printf("The number is zero.\n");
	}
	else if (number >0)
	{
		printf("The number is positive.\n");
	}
	else
	{
		printf("The number is negative.\n");
	}
	return 0;
}