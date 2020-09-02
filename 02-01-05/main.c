/*
	02-01-05
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("\n 02-01-05\n\n");

	

	int input;
	do {
		printf("1 - Do item 1\n");
		printf("2 - Do item 2\n");
		printf("3 - Do item 3\n");
		printf("0 - Exit\n");


		scanf("%i", &input);

		switch (input)
		{
		case 1:
			printf("You chose the first option\n\n");
			break;
		case 2:
			printf("You chose the second option\n\n");
			break;
		case 3:
			printf("You chose the third option\n\n");
			break;
		case 0:
			break;
		default:
			printf("You chose an invalid option: %d\n", input);
			break;
		}

	} while (input != 0);

	return 0;

}