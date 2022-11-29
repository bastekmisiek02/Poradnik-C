#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Convert(int H)
{
	printf("%i godzin to %i minut\n", H, H * 60);
	printf("%i godzin to %i sekund", H, H * 3600);
}

int main()
{
	int H = 0;

	printf("Wpisz liczbe godzin: ");
	scanf("%i", &H);

	Convert(H);

	return 0;
}