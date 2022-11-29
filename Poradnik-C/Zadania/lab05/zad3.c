#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0;
	int wynik = 0;

	printf("Wpisz liczbe N\n");
	scanf("%i", &N);

	int i = 1;

	while (i <= N)
	{
		int j = 1;

		while (j <= N)
		{
			wynik = i * j;
			printf("%i * %i = %i\n", i, j, i * j);
			j++;
		}

		printf("\n");
		i++;
	}

	return 0;
}