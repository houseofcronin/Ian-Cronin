/*
	02-01-08
	"C Strings" - Intro

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	
	
	printf("\n02-01-08\n\n");
	
	int score = 100;
	printf("score is %i\n", score);

	float pi = 3.14;
	printf("pi is %f\n", pi);

	char aLetter = 'a'; // decimal 97 ASCII Table
	// 0 1 1 0 0 0 0 1 --> binary for 97 --> ASCII dec for 'a';
	printf("aLetter = %c\n", aLetter);

	// na array (aka list) of characters to store "hello"
	char message[] = "hello";
	printf("message = %s\n", message);

	char name[] = "Casey Diya";
	printf("name = %s\n", name);

	char userid[] = "player01";
	printf("userid = %s\n", userid);

	char sum[] = "1 + 2";
	printf("sum = %s\n", sum); // output: 1 + 2

	int n1 = 1;
	int n2 = 2;
	printf("%d + %d = %d\n", n1, n2, n1 + n2);

	char word1[12] = "hello";
	printf("word1 = %s\n", word1);

	char word2[] = " world";
	printf("word2 = %s\n", word2);

	// How to add two strings.
	// Concatenation
	// strcat(s1, s2) function

	
	strcat(word1, word2);
	printf("str(word1, word2) = %s\n\n", word1);

	char firstName[20] = "Casey";
	char lastName[] = " Diya";
	strcat(firstName, lastName);
	printf("Hello, %s\n", firstName);

	char text[] = "gjdshjhgjhjshdgfdsaghfdlkgf";
	int len = strlen(text);
	printf("Length of text is %i characters\n", len);

	// sizeof operator (C) / var, data type / how much memory is needed
	printf("text requires %i bytes of memory\n", sizeof(text));
	printf("a single char requires %i btye(s) of memory\n", sizeof(char));


	return 0;

}