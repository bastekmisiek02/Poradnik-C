#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0, M = 0;

	printf("Wpisz liczbe N\n");
	scanf("%i", &N);

	printf("Wpisz liczbe M\n");
	scanf("%i", &M);

	int sum = 0;

	if (M % 2 == 0)
		M++;

	for (int i = 0; i < N; i++)
	{
		sum += M;
		M += 2;
	}

	printf("%i", sum);

	return 0;
}