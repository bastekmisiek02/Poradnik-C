#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 1;

	int kwadrat = 0;
	int szescian = 0;

	for (int i = 0; i < 10; i++)
	{
		kwadrat = N * N;
		szescian = N * N * N;

		printf("Liczba: %i\nKwadrat: %i\nSzescian: %i\n\n", N, kwadrat, szescian);
		N++;
	}

	return 0;
}