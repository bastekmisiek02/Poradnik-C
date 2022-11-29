#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Display(int w, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			printf("X");
		
		printf("\n");
	}
}

int main()
{
	int w = 0, h = 0;

	printf("Wpisz szerokosc: ");
	scanf("%i", &w);

	printf("Wpisz wysokosc: ");
	scanf("%i", &h);

	printf("\n");

	Display(w, h);

	return 0;
}