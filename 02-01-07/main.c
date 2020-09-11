/*
	02-01-07
	Conditional Constructs
	How to make decisions in code.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("\n02-01-07\n\n");

	// Decisions?
	// Decisions are tests that your code
	// will use in order to take one of many paths.
	
	int num;
	printf("What is your number? ");
	scanf("%i", &num);

	if (num % 2 == 0)
	{ 
		printf("\nThe num %i is odd! \n\n", num);
	}
	else
	{
		printf("The num %i is even! \n\n", num);
	}
	int i;

	printf("num: %i\n\n", num);
	
	switch (num) 
	{
	case 1:
		printf("One\n");
		break;
	case 2:
		printf("Two\n");
		break;
	case 3:
		printf("Three\n");
		break;
	case 32:
		printf("Thirty-two\n");
		break;
	case 69:
		printf("Nice!\n");
		break;
	case 144:
		printf("One-hundred forty-four\n");
		break;
	case 666:
		printf("Satan is on his way\n");
		break;
	default:
		printf("I don't understand %i\n", num);
		break;
	}
	

	return 0;
}
