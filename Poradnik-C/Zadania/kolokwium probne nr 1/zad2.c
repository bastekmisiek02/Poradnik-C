#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Sprawdz(int a, int b, int c)
{
	int a2 = a * a;
	int b2 = b * b;
	int c2 = c * c;

	return (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2);
}

int main()
{
	int a = 0, b = 0, c = 0;

	printf("Wpisz dlugosc a: ");
	scanf("%i", &a);

	printf("Wpisz dlugosc b: ");
	scanf("%i", &b);

	printf("Wpisz dlugosc c: ");
	scanf("%i", &c);

	if (Sprawdz(a, b, c))
		printf("Z podanych dlugosci a, b i c mozna zbudowac trojkat prostokatny");
	else							
		printf("Z podanych dlugosci a, b i c nie mozna zbudowac trojkata prostokatnego");

	return 0;
}