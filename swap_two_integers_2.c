#include <stdio.h>

void swap(int *, int *);

int main(void) {
	
	int a = 21;
	int b = 17;
	int check_a = a;
	int check_b = b;
	
	printf("\nOriginal values:   a = %d, b = %d\n", a, b);
	
	swap(&a, &b);
	printf("Values after swap: a = %d, b = %d\n", a, b);
	
	if (b == check_a) {
		
		if (a == check_b) {
			puts("\nSwap success.");
		}
		
		else {
			puts("\nSwap fail.");
		}	
	}
		
	else {
		puts("\nSwap fail.");
	}
			
	return 0;
}

void swap(int *a, int *b) {
	
	int placeholder = *a;
	*a = *b;
	*b = placeholder;
	return;
}