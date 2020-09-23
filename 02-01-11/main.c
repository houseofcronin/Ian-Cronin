/*
	02-01-11

	Fahrenheit to Celcius
	0	-17
	100	37.8

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

double f_to_c(double f)
{
	return (f - 32) * 5 / 9;
}

int main()
{
	printf("\n02-10-11\n\n");

	int max = 0;
	int steps = 0;
	int min = 0;

	printf("Min: ");
	scanf("%i", &min);

	printf("\nMax: ");
	scanf("%i", &max);

	printf("\nSteps: ");
	scanf("%i", &steps);

	for (double f = min; f <= max; f += steps)
	{
		printf("%.1f F    \t%.1f C\n", f, f_to_c(f));
	}	

	return 0;
}