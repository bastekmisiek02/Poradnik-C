#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0;

	printf("Wpisz liczbe N\n");
	scanf("%i", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int wynik = i * j;
			printf("%i * %i = %i\n", i, j, wynik);
		}

		printf("\n");
	}

	return 0;
}