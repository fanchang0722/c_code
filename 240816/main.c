// c struct in c program #26
#include <stdio.h>

typedef struct Person {
	int age;
	double salary;
} person;

typedef struct Complex {
	double real;
	double imaginary;
} complex;

int main() {
	person person1;
	person1.age = 25;
	person1.salary = 4321.78;
	printf("person's age is %d\n", person1.age);
	printf("person's salary is %.2f\n", person1.salary);
	complex c1 = {.real=21.87, .imaginary=30};
	complex c2 = {.real=13.34, .imaginary=112.23};
	complex sum;
	sum.real = c1.real + c2.real;
	sum.imaginary = c1.imaginary + c2.imaginary;
	printf("sum complex is %.2f+%.2fi\n", sum.real, sum.imaginary);
	return 0;
}