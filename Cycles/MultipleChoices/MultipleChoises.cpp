#include <stdio.h>

int main() {
	float first;
	float second;
	int operator;

	printf("Enter first operand: ");
	scanf("%f", &first);
	printf("Enter 1 for +, 2 for -, 3 for *, 4 for / operations: ");
	scanf("%d", &operator);
	if (operator==4) {
		do {
			printf("Enter second operand: ");
			scanf("%f", &second);
		} while (second == 0);
	}
	else {
		printf("Enter second operand: ");
		scanf("%f", &second);
	}

	float result;
	char c;
	 
	switch (operator) {
	case 1:
		c = '+';
		result = first + second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	case 2:
		c = '-';
		result = first - second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	case 3:
		c = '*';
		result = first * second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	case 4:
		c = '/';
		result = first / second;
		printf("%f %c %f = %f", first, c, second, result);
		break;
	default:
		printf("Unknown operaiton!");
	}


	return 0;
}