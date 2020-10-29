/*
	02-02-03


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int * n1, int * n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main()
{
	printf("\n02-02-03\n\n");

	int num1;
	int num2;
	printf("Num1? ");
	scanf("%i", &num1);

	printf("\nNum2? ");
	scanf("%i", &num2);

	printf("\nnum1 = %i\n", num1);
	printf("num2 = %i\n\n", num2);

	swap(&num1, &num2);

	printf("num1 = %i\n", num1);
	printf("num2 = %i\n\n", num2);

	return 0;
}