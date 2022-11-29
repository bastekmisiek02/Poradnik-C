#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number = 0;

	printf("Wpisz liczbe\n");
	scanf("%i", &number);

	int i = 0;

	while (i < number)
	{
		printf("%i ", i);
		i += 2;
	}

	return 0;
}