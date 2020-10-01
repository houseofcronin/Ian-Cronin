/*
	PROJECT-02-01-02

	Reversing An Integer

	Quotient   >   the quantity proiduced by the division of two numbers
	           >   the '/' operator in C can be used to obtain the quotient

	Remainder  >   teh amount left over after a division
			   >   the '%' operator in C can be used to obtain the rightmost digit

	Math Fact:
		The raminder of any number divided by 10 will be the rightmost digit
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("PROJECT-02-01-02\n");
	printf("Reversing An Integer\n\n");

	int n;
	printf("Number: ");
	scanf("%i", &n);

	int quotient = n;

	// loop through each digit in the number
	while (quotient > 0)
	{
		int remainder = quotient % 10;
		printf("%i", remainder);
		quotient /= 10; // quotient = quotient / 10
	}

	printf("\n");

	return 0;
}