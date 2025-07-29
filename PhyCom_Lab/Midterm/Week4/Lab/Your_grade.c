#include "stdio.h"

int main() {
	char t;

	scanf("%c", &t);

	switch (t) {
		case 'A' | 'a': printf("Genius");
				  break;
		case 'B' | 'b': printf("Good");
				  break;
		case 'C' | 'c': printf("Try Harder");
				  break;
		case 'D' | 'd': printf("Very Bad");
				  break;
		case 'F' | 'f': printf("Fail");
				  break;
		default: printf("Invalid Input");
	}

	return 0;
}
