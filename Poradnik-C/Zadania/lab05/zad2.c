#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0, M = 0;

	printf("Wpisz liczbe N\n");
	scanf("%i", &N);

	printf("Wpisz liczbe M\n");
	scanf("%i", &M);

	int number = M;
	int sum = 0;
	int i = 0;

	if (number % 2 == 0)
		number++;

	while (i < N)
	{
		sum += number;
		number += 2;

		i++;
	}

	printf("%i", sum);

	return 0;
}