#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_INDEX 5

int main()
{
	int matrix[MAX_INDEX][MAX_INDEX];

	for (int i = 0; i < MAX_INDEX; i++)
	{
		for (int j = 0; j < MAX_INDEX; j++)
		{
			if (j == i)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
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