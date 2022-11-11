#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number = 0;

	printf("Wpisz liczbe\n");
	scanf("%i", &number);

	for (int i = 0; i < number; i += 2)
		printf("%i ", i);

	return 0;
}