#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0, M = 0;

	printf("Wpisz liczbe N\n");
	scanf("%i", &N);

	printf("Wpisz liczbe M\n");
	scanf("%i", &M);

	int suma = 0;

	for (int i = 0; i < N;)
	{
		if (M % 2 == 1)
		{
			suma += M;
			i++;
		}

		M++;
	}

	printf("%i", suma);

	return 0;
}