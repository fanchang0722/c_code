// c struct in c program #26
#include <stdio.h>

typedef struct Person {
	int age;
	double salary;
} person;

int main() {
	person person1;
	person1.age = 25;
	person1.salary = 4321.78;
	printf("person's age is %d\n", person1.age);
	printf("person's salary is %.2f\n", person1.salary);
	return 0;
}