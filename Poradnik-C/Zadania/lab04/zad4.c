#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 1;

	for (int i = 0; i < 10; i++)
	{
		printf("Liczba: %i\nKwadrat: %i\nSzescian: %i\n\n", N, N * N, N * N * N);
		N++;
	}

	return 0;
}