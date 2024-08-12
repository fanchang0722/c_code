// c strings in c program
#include <stdio.h>

int main() {
	char str[]="Programiz";
	printf("%s\n", str);
	printf("%c\n", str[1]);
	str[1]='R';
	printf("%s\n", str);
	// printf("Please input your name: ");
	// char name[20];
	// // scanf("%s", name);
	// fgets(name, sizeof(name), stdin);
	// printf("My name is %s\n", name);
	return 0;
}