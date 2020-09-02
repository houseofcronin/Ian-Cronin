/*
	02-01-03
	C Three Looing Constructs
	The for Loop
	The while Loop
	The do Loop
*/
#include <stdio.h>

int main()
{
	printf("02-01-03\n\n");

	//The for Loop
	//When to use:
	// Use when you know how many times
	// the loop needs to run.
	for (int i = 0; i < 100; i++)
	{
		//whatever is here will be repeated
		printf("i = %i\n\n", i);
	}

	for (int j = 0; j <= 100; j += 10)
	{
		printf("j = %i\n\n", j);
	}

	// The while loop
	// When to Use:
	//  Use when you don't know the number
	//  of times the should repeat
	//  AND you want to check a condition
	//  before the loop.
	int k = 0;
	while (k < 100)
	{
		printf("k = %i\n\n", k);
		k++;
	}

	// The do Loop
	// When to Use:
	//  Use when you don't know the number
	//  of times the code3 should repeat
	//  AND you wnat the code to run at 
	//  least one time.
	int l = 0;
	do
	{
		printf("l = %i\n\n", l);
		l++;
	} while (l < 100);


	return 0;
}



