#include <stdio.h>

void swap(int, int); // defined in Listing 2-2

int main(void) {
	int a = 21;
	int b = 17;
	
	swap(a, b);
	printf("main function: a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	printf("swap function: a = %d, b = %d\n", a, b);
}