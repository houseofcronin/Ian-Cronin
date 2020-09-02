/*
	02-01-04
	Loop Examples
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	printf("02-01-04\n\n");

	char input; // initialize a char variable

	// Use a do Loop to ger user input until
	// the user types a capital Q.
	do
	{
		printf("Character? ");
		scanf(" %c", &input);
		printf("%c\n\n", input);
	} while(input != 'Q');
	
	return 0;
}