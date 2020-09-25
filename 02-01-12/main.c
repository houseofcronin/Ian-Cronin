/*
	02-01-12

	File I/O in C
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("\n02-01-12\n\n");

	FILE *pFile = fopen("index.html", "w");

	// Write content to the HTML file
	if (pFile != NULL)
	{
		fputs("<!doctype html>\n", pFile);
		fputs("<html lang=\"en-us\">\n", pFile);
		fputs("  <head>\n", pFile);
		fputs("    <meta charset=\"utf-8\">\n", pFile);
		fputs("    <title>C FILE I/O</title>\n", pFile);
		fputs("    <link rel=\"stylesheet\" href=\"style.css\">\n", pFile);
		fputs("  </head>\n", pFile);
		fputs("  <body>\n", pFile);
		fputs("    <h1>C FILE I/O</h1>\n", pFile);
		fputs("  </body>\n", pFile);
		fputs("</html>\n", pFile);
		fclose(pFile);
	}

	pFile = fopen("style.css", "w");

	// Write content to CSS file
	if (pFile != NULL)
	{
		fputs("body {\n", pFile);
		fputs("  background-color: black;\n", pFile);
		fputs("  color: white;\n", pFile);
		fputs("  font-family: monospace;\n", pFile);
		fputs("  font-size: 1.5em;\n", pFile);
		fputs("}\n", pFile);
		fputs("\n", pFile);
		fputs("h1 {\n", pFile);
		fputs("  background: rgba(0, 0, 0, 0.15);\n", pFile);
		fputs("  padding: 30px;\n", pFile);
		fputs("  text-align: center;\n", pFile);
		fputs("}\n", pFile);
		fclose(pFile);
	}

	system("index.html");

	return 0;
}