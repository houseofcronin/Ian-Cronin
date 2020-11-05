/*
	02-02-04


*/

#define _CRT_SECRURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Card
{
	char suit; // H, D, S, C
	int rank; // 1, K
};

//function that prints ANY card
//that's given to it
void print_card(struct Card card)
{
	printf("suit: %c\n", card.suit);
	printf("rank: %i\n\n", card.rank);
}

void compare_cards(struct Card card1, struct Card card2) 
{
	if (card1.rank > card2.rank)
	{
		printf("card1 is greater than card2\n");
	}
	else if (card1.rank < card2.rank)
	{
		printf("card1 is less than card2\n");
	}
	else
	{
		printf("card1 and card2 are equal");
	}
}

int main()
{
	printf("\n02-02-04\n\n");

	// A structure is used to store items ofdifferent types

	struct Card card_1; // declared a variable of the Card data types
	card_1.suit = 'S';
	card_1.rank = 1;

	print_card(card_1);

	// TODO: Create card and then print it to the screen

	struct Card my_card;
	my_card.suit = 'H';
	my_card.rank = 11;
		
	print_card(my_card);

	// Create a deck of cards

	struct Card card_2; // declared a variable of the Card data types
	card_2.suit = 'S';
	card_2.rank = 2;

	print_card(card_2);

	struct Card card_3; // declared a variable of the Card data types
	card_3.suit = 'S';
	card_3.rank = 3;

	print_card(card_3);

	struct Card card_4; // declared a variable of the Card data types
	card_4.suit = 'S';
	card_4.rank = 4;

	print_card(card_4);

	struct Card card_5; // declared a variable of the Card data types
	card_5.suit = 'S';
	card_5.rank = 5;

	print_card(card_4);

	struct Card deck[52];

	deck[0] = card_1;
	deck[1] = card_2;
	deck[2] = card_3;
	deck[3] = card_4;

	compare_cards(card_1, card_4);
	compare_cards(card_2, card_3);
	compare_cards(my_card, card_5);

	int score = 100;
	char letter = 'a';
	float pi = 3.14;

	int evenNumbers[10];
	evenNumbers[0] = 2;
	evenNumbers[1] = 4;
	evenNumbers[2] = 6;
	evenNumbers[3] = 8;

	return 0;
}