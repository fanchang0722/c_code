// file handling in c program #29
#include <stdio.h>

int main() {
	FILE* fptr;

	char content[1000];
	fptr = fopen("test.txt", "r");
	if (fptr != NULL) {
		printf("File open succcessful\n");
		while(fgets(content, 1000, fptr)){
			printf("%s\n", content);	
		}
	}
	else {
		printf("File open unsucccessful\n");
	}
	fclose(fptr);

	FILE* fptr2;
	fptr2 = fopen("newtext.txt", "w");
	fputs("I love c\n", fptr2);
	fputs("I love program\n", fptr2);
	fclose(fptr2);
	return 0;

}