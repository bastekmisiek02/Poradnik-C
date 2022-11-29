#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Konwertuj(int H)
{
	int minut = H * 60;
	int sekund = H * 3600;

	printf("%i godzin to %i minut\n", H, minut);
	printf("%i godzin to %i sekund", H, sekund);
}

int main()
{
	int H = 0;

	printf("Wpisz liczbe godzin: ");
	scanf("%i", &H);

	Konwertuj(H);

	return 0;
}