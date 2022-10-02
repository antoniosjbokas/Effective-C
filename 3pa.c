/* 3pa.c (three-pointer array) | Antonios J. Bokas | Array of pointers to functions */

/*Libraries */

#include <stdio.h>
#include <stdbool.h>

/* Function prototypes */

void eggs(void);
void bacon(void);
void waffles(void);
void (*options[3])(void) = {eggs, bacon, waffles};

/* Main */

int main(void) {
	
	puts("\nHow long does it take to cook...\n");
	puts("Eggs?\t\t(e)");
	puts("Bacon?\t\t(b)");
	puts("Waffles?\t(w)\n");
	
	bool input_good = false;
	
	while (input_good == false) {
		
		printf("%s", "Enter e, b, or w: ");
		char favorite;
		scanf(" %1c", &favorite);
		
		switch(favorite) {
			case 'e':
				input_good = true;
				(*options[0])();
				break;
			case 'b':
				input_good = true;
				(*options[1])();
				break;
			case 'w':
				input_good = true;
				(*options[2])();
				break;
		}
	}
	
	return 0;
}

/* Function definitions */

void eggs(void) {
	puts("\n60 seconds for eggs!");
}

void bacon(void) {
	puts("\n5 minutes for bacon!");
}

void waffles(void) {
	puts("\n6 minutes for waffles!");
}
