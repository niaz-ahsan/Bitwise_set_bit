/*
 Set 4th and 7th bit to 1 of the user input
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
	int32_t number, masked = 144, result;
	printf("Enter the number: ");
	scanf("%d", &number);

	// To set a bit regardless of what bit it is bit wise OR is required.
	// Bit masked number is 144

	result = number | masked;

	printf("Result is: %d\n", result);

	return 0;

}
