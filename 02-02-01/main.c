/*
	02-02-01

	Review Project
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	printf("\n02-02-01\n\n");

	/*
		rand() -- generate a psuedo-random number
		srand() -- seed the rand function every time we run our program
	*/
	int chances;
	char dif;
	int i = 0;

	printf("Welcome to the random number guesser\n\n");
	
	do
	{
		printf("These are the difficulty options:\n");
		printf("B - Baby\nE - Easy\nN - Normal\nH - Hard\nM - Masochist\n\n");
		printf("Please choose one of the options: ");
		
		scanf(" %c", &dif);
		switch (dif)
		{
		case 'B':
			chances = 100;
			i = 1;
			break;
		case 'E':
			chances = 10;
			i = 1;
			break;
		case 'N':
			chances = 5;
			i = 1;
			break;
		case 'H':
			chances = 3;
			i = 1;
			break;
		case 'M':
			chances = 1;
			i = 1;
			break;
		default:
			printf("\nThat is not and option, please try again\n\n");
			break;
		}
	} while (i != 1);
	
	printf("A secret number between 0 and 99 has been sellected.\n");
	printf("You have %i attempts to guess the secret number.\n\n", chances);

	srand((unsigned int)time(0));

	int random_number = rand();
	int secret_number = random_number % 100;
	
	//printf("The secret number is %i\n", secret_number);

	do {
		int player_number;
		printf(">: ");
		scanf("%i", &player_number);
		
		if (player_number > secret_number) {
			printf("%i is too high!\n", player_number);
		}
		else if (player_number < secret_number) {
			printf("%i is too low!\n", player_number);
		}
		else {
			printf("%i is the secret number\n", player_number);
			for (int i = 0; i < 10000; i++)
			{
				printf("YOU WIN! ");
			}
			break;
		}
		chances--;
	} while (chances > 0);

	if (chances == 0)
	{
		for (int i = 0; i < 10000; i++)
		{
			printf("YOU LOSE! ");
		}
		printf("\n\nThe secret number was %i\n", secret_number);
	}

	return 0;
}