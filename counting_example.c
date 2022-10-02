/* counting_example.c | Antonios J. Bokas | Uses pointers to increment count and print value */

/*Libraries */

#include <stdio.h>

/* Function prototypes */

void increment(int *incremented_count);
void retrieve(int retrieved_count);

/* Main function */

int main(void) {
	puts("\nPointer Practice with a Counting Example\n");
	
	// Loop five times
	for (int i = 0; i < 5; i++) {
		
		// Initialize count with block scope
		static int count = 0; // Initialize once and maintain storage
		increment(&count); // Ampersand provides address
		retrieve(count); // Calls updated count
	}
	
	return 0;
}

/* Local functions */

void increment(int *incremented_count) {
	
	// Point to count and increment its value
	(*incremented_count)++;
}

void retrieve(int retrieved_count) {
	
	// Retrieve and print count
	printf("Current value of count: %d\n", retrieved_count);
}