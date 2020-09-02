/*
	02-01-06
	Example: Use a for loop to print even numbers
			 contained in a series of numbers.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("02-01-06\n\n");

	// Loop through each number in the range 0-100
	for (int i = 0; i <= 100; i++)
	{
		// Determine if the number is an even number
		// The 'modulus operator (%) returns the remainder
		// of a division.
		// Ex: 10 % 2 = 0
		//	   11 % 2 = 1

		if (i % 2 == 0)
		{
			// Output message to user
			printf("%i is even\n\n", i);
		}
	}
	return 0;
}