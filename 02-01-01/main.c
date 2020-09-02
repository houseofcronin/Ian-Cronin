/*
	02-01-01
	2020-08-25
	A simple C program to test
	our programming tools.
*/

#include <stdio.h>

int main()
{
	// In C, printf is used to send output
	// to the standard console.
	printf("02-01-01\n\n");
	printf("Hello, friends....\n\n");
	printf("My name is Ian Cronin.\n");
	printf("I am 17 years old and my birthday is January 13th\n");
	printf("I enjoy watching anime and playing video games.\n");
	printf("My favourite meal is Mac n' Cheese\n\n");

	// Use a loop to repeat something
	// in our program
	for (int i = 0; i < 100; i++) {
		printf("Hello, friend %i!\n", i);

	}

	return 0;
}