/*
	PROJECT-02-01-01
	Cronin, Ian
	2020-09-02
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("PROJECT-02-01-01\n");
	printf("Cronin, Ian\n");
	printf("2020-09-02\n\n");

	int input1;
	int input2;
	do
	{
		printf("Please type integers to multiply.\n");
		printf("Type '0' for either or both inputs to exit.\n\n");

		scanf(" %i %i", &input1, &input2);
		int product = (input1 * input2);

		if (input1 == 0 || input2 == 0)
			break;
		else
			printf("%i * %i = %i\n\n", input1, input2, product);
	} while (input1 != 0 || input2 != 0);
	
	



	return 0;
}