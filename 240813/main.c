// c string function in c program
#include <stdio.h>
#include <string.h>

int main () {
	// strlen example
	char language[] = "C Programing";
	printf("%s\n", language);
	printf("Length: %d\n", strlen(language));

	// strcpy example
	char food[]="Pizza";
	char bestFood[strlen(food)];
	strcpy(bestFood, food);
	printf("best food is %s\n", bestFood);

	// strcat example
	char text1[]="Hey, ";
	char text2[]="How are you?";
	printf("%s\n", strcat(text1, text2));

	// strcmp exampl
	int result = strcmp(text1, text2);
	printf("%d\n", result);
	return 0;
}