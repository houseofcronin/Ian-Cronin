/*
	Text Based Adventure Test
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char name[50];
	printf("\n\nPlease enter your name: ");
	gets(name);

	printf("\n\nHello, %s\n\n", name);

	printf("Has your day been going good? ");

	char aDay[50];
	do
	{
		gets(aDay);
		switch ('aDay')
		{
		case 'yes':
			printf("\n\nThat is great, I hope you continue to have a great day\n\n");
			break;
		case 'no':
			printf("Well you can find someway to make your day better\n\n");
			break;
		default:
			printf("I do not understand '%s'\n\n", aDay);
			break;




		}
	} while (aDay != 'yes' || aDay != 'no');
	





	return 0;
}