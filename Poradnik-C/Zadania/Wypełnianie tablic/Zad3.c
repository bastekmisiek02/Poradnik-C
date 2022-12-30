#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_INDEX 5

int main()
{
	int matrix[MAX_INDEX][MAX_INDEX];

	for (int j = 0; j < MAX_INDEX; j++)
	{
		for (int i = j; i < MAX_INDEX; i++)
			matrix[MAX_INDEX - i - 1][MAX_INDEX - j - 1] = j + 1;
	}

	for (int i = 0; i < MAX_INDEX; i++)
	{
		for (int j = i; j < MAX_INDEX; j++)
			matrix[MAX_INDEX - i - 1][MAX_INDEX - j - 1] = i + 1;
	}

	for (int i = 0; i < MAX_INDEX; i++)
	{
		for (int j = 0; j < MAX_INDEX; j++)
			printf("%i ", matrix[j][i]);

		printf("\n");
	}

	return 0;
}