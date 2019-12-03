#include "Terms.h"
#include <stdio.h>

int main(int argc, const char* argv[]) {
	char answer;
	printf("Do you want me to salute you? (y/n)");

	int res = scanf("%c", &answer);
	if (answer == 'y') {
		printf("Hello, user!");
	}
	else if (answer == 'n') {
		printf("I didn't want to salute you anyway!");
	}
	else {
		printf("I can't understand you input!");
	}

	printf("\n");
	int x = 7;
	if ((x >= 0) && (x <= 10)) {
		printf("X Fits!");
	}

	return 0;
}