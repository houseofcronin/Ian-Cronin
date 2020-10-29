/*
	02-02-02

	1) Variables (managing data)
	2) Decision Construct (e.g. if/else, switch)
	3) Repeating Construct (e.g. for, while, do) LOOPS
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	printf("\n02-02-02\n\n");

	int age = 17;
	float pi = 3.14;
	char c = 'S';

	printf("age = %i\n", age);
	printf("pi = %2f\n", pi);
	printf("c = %c\n", c);

	if (age >= 16)
	{
		printf("\nYou're old enough to drive\n");
	}
	else
	{
		printf("You're not old enough to drive\n");
	}

	char grade = 'A';
	switch (grade)
	{
	case 'A':
	case 'a':
		printf("100 - 93\n");
		break;
	case 'B':
	case 'b':
		printf("92 - 85\n");
		break;
	case 'C':
	case 'c':
		printf("84 - 75\n");
		break;
	case 'D':
	case 'd':
		printf("74 - 70\n");
		break;
	case 'F':
	case'f':
		printf("69 - 0\n");
		break;
	default:
		printf("ERR: Bad Grade Letter! '%c'\n", grade);
		break;
	}


	//I want to eat Macaroni and cheese with ketchup.
	//I also want chicken tenders with ranch dressing.
	//I would like a chocolate milk to drink.

	return 0;
}