/*
	02-01-09

	Character Arrays
	"C Strings"
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("\n02-01-09\n\n\n");

	// Declare and Initailize an Array of Characters
	char firstName[4] = { 'I', 'a', 'n', '\0' }; // firstName = Ian
	printf("firstName is %s\n", firstName);
	printf("%s (%i)\n\n", firstName, strlen(firstName));

	// Declare and Initialize using Array Initialization
	char middleName[] = "McCade";
	printf("middleName is %s\n", middleName);
	printf("%s (%i)\n\n", middleName, strlen(middleName));

	char lastName[] = "Cronin";
	printf("lastName is %s\n", lastName);
	printf("%s (%i)\n\n", lastName, strlen(lastName));
	
	// Concatentaion
	// string.h strcat() function
	char fullName[18] = { 0 };
	strcat(fullName, firstName);	
	strcat(fullName, " ");
	strcat(fullName, middleName);
	strcat(fullName, " ");
	strcat(fullName, lastName);
	printf("fullName = %s\n\n", fullName);
	printf("%s (%i)\n\n", fullName, strlen(fullName));

	// Split a string
	// "1/13/2003"
	// strtok()
	char birthday[] = "1/13/2003";
	const char delimiter[] = "/";
	char * token = strtok(birthday, delimiter);
	printf("My birthday is ");
	while (token != NULL) {
		printf("%s ", token);
		token = strtok(NULL, delimiter);
	}
	
	printf("\n");
	
	return 0;
}