// enumeration in c program #27
#include <stdio.h>

enum Size {
	Small = 27,
	Medium = 31,
	Large = 35,
	ExtrLarge = 40,
};

int main() {
	enum Size shoeSize;
	shoeSize = ExtrLarge;
	printf("%d\n", shoeSize);
	return 0;
}