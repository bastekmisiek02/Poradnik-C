#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 1;

	int i = 0;

	int kwadrat = 0;
	int szescian = 0;

	while (i < 10)
	{
		kwadrat = N * N;
		szescian = N * N * N;

		printf("Liczba: %i\nKwadrat: %i\nSzescian: %i\n\n", N, kwadrat,szescian);
		N++;

		i++;
	}

	return 0;
}