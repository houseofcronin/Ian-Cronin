/*
	02-01-02
	C Data
	-- Variables
	-- Data Types
		-- int, float, char
*/

#include <stdio.h>;

int main() 
{
	// Variables and Data Types
	// How to use DATA in your program.

	int a = 100;
	int b = 200;
	int c = a + b;

	// int is used to store whole numbers (w/o decimal)

	float pi = 3.14;
	printf("pi = %f\n", pi);

	// The data type is used to specify the EXACT
	// type of data to be stored in our variable.

	// How would you declare price in your program?
	float price = 5.99;

	// How would you declare tax in your program?

	float taxRate = 0.0975;

	// How would you declare total price in your program?
	float totalPrice = price + (price * taxRate);

	printf("%f + (%f * %f) = %f\n", price, price, taxRate, totalPrice);
	printf("The tax is %f\n", (price * taxRate));
	printf("The total price is %f\n", totalPrice);

	printf("a = %i\n", a);
	printf("b = %i\n", b);
	printf("c = %i\n", c);

	printf("a + b = %i\n", c);

	printf("\n\n\n");

	char letterA = 'A';

	printf("%c\n", letterA);


	// The sizeof operator can be used
	// to determine the size (in bytes)
	// that will be used to store values
	// of a specific type
	printf("\nThe number of bytes used to store a float is %i bytes\n\n", sizeof(float));

	

	return 0;

}