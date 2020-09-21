/*
	02-01-10
	C Arrays

	Arrays are used to store a group
	of variables of the SAME data type.

	> Single-Dimesnsional Array
	  Used to store data in a single dimension (one column)

	> Multi-Dimensional Array
	  Used to store data in multiple dimensions (multiples columns)


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Return an average when given an array of doubles
double getAverage(double *arr, int items)
{
	double sum = 0.0;

	for (int i = 0; i < items; i++)
	{
		sum += arr[i];
	}


	return sum / items;
}

// Return an average when given an array of integers
double getAverageA(int *arr, int items)
{
	double sum = 0.0;

	for (int i = 0; i < items; i++)
	{
		sum += arr[i];
	}

	return sum / items;
}

int main()
{
	printf("\n02-01-10\n\n");

	// DECLARED and INITIALIZED 5 interger variables
	double grades[5];
	grades[0] = 100.0;
	grades[1] = 92.4;
	grades[2] = 84.5;
	grades[3] = 99.9;
	grades[4] = 64.5;
	double average = 0;
	double sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += grades[i];
		printf("grades[%i] = %.2f\n", i, grades[i]);
	}

	average = sum / 5;
	printf("\naverage is %.2f\n", average);

	printf("\n\n\n\n\n");
	printf("AVG = %.2f\n\n", getAverage(grades, 5));

	double points[3];
	points[0] = 100.0;
	points[1] = 75.0;
	points[2] = 45.0;
	printf("AVG points = %.2f\n\n", getAverage(points, 3));

	// USE getAverage(int *)
	int scores[4];
	scores[0] = 80;
	scores[1] = 75;
	scores[2] = 100;
	scores[3] = 100;
	printf("AVG scores is %.2f\n", getAverageA(scores, 4));

	// Multi-Dimensional Arrays in C
	int table[5][4] =
	{
		{10, 11, 12, 13},
		{20, 21, 22, 23},
		{30, 31, 32, 33},
		{40, 41, 42, 43},
		{50, 51, 52, 53}
	};
	printf("\n\n");

	// Use nested for oops to iterate through the MD array
	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			printf("\t%i", table[r][c]);
		}
		printf("\n\n");
	}

	return 0;
}

/* 
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;
	int num5 = 50;

	printf("num1 =%i\n", num1);
	printf("num2 =%i\n", num2);
	printf("num3 =%i\n", num3);
	printf("num4 =%i\n", num4);
	printf("num5 =%i\n", num5);
*/