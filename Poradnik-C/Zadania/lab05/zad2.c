#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0, M = 0;

	printf("Wpisz liczbe N\n");
	scanf("%i", &N);

	printf("Wpisz liczbe M\n");
	scanf("%i", &M);

	int liczba = M;
	int suma = 0;
	int i = 0;

	while (i < N)
	{
		if (liczba % 2 == 1)
		{
			suma += liczba;
			i++;
		}

		liczba++;
	}

	printf("%i", suma);

	return 0;
}