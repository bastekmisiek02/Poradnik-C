#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_INDEX 5

int main()
{
	int matrix[MAX_INDEX][MAX_INDEX];

	for (int j = 0; j < MAX_INDEX; j++)
	{
		for (int i = j; i < MAX_INDEX - j; i++)
		{
			matrix[i][j] = j + 1;
			matrix[i][MAX_INDEX - 1 - j] = j + 1;
		}

		for (int i = j; i < MAX_INDEX - j; i++)
		{
			matrix[j][i] = j + 1;
			matrix[MAX_INDEX - 1 - j][i] = j + 1;
		}
	}

	for (int i = 0; i < MAX_INDEX; i++)
	{
		for (int j = 0; j < MAX_INDEX; j++)
			printf("%i ", matrix[j][i]);

		printf("\n");
	}

	return 0;
}