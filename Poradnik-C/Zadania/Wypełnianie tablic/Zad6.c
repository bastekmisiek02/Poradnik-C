#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_INDEX 5

int main()
{
	int matrix[MAX_INDEX][MAX_INDEX];

	int value = 1;

	for (int i = 0; i < MAX_INDEX; i++)
	{
		for (int j = 0; j < MAX_INDEX; j++)
			matrix[i][j] = 0;
	}

	for (int i = 0; i < MAX_INDEX; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < MAX_INDEX; j++)
			{
				matrix[j][i] = value;
				value++;
			}
		}
		else
		{
			for (int j = MAX_INDEX-1; j > -1; j--)
			{
				matrix[j][i] = value;
				value++;
			}
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