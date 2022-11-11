#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 1;

	int i = 0;

	while (i < 10)
	{
		printf("Liczba: %i\nKwadrat: %i\nSzescian: %i\n\n", N, N * N, N * N * N);
		N++;

		i++;
	}

	return 0;
}