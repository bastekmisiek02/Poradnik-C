#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <math.h>

void Najmniejsza()
{
	float a = 0.0f, b = 0.0f, c = 0.0f;
	float min = 0.0f;

	printf("Wpisz a: \n");
	scanf("%f", &a);

	min = a;

	printf("Wpisz b: \n");
	scanf("%f", &b);

	if (b < min)
		min = b;

	printf("Wpisz c: \n");
	scanf("%f", &c);

	if (c < min)
		min = c;

	printf("Najmniejsza liczba to: %f", min);
}

void RownanieKwadratowe()
{
	float a = 0.0f, b = 0.0f, c = 0.0f;

	printf("Wpisz a: \n");
	scanf("%f", &a);

	printf("Wpisz b: \n");
	scanf("%f", &b);

	printf("Wpisz c: \n");
	scanf("%f", &c);

	float delta = (b * b) - 4 * a * c;

	if (delta < 0)
		printf("Nie ma rozwiazania");
	else if (delta == 0)
	{
		float x0 = -b / (2.0f * a);
		printf("x0 = %f", x0);
	}
	else
	{
		float x1 = (-b - sqrt(delta)) / (2.0f * a);
		float x2 = (-b - sqrt(delta)) / (2.0f * a);

		printf("x1 = %f\nx2 = %f", x1, x2);
	}
}

void Trojkat()
{
	float a = 0.0f, b = 0.0f, c = 0.0f;

	printf("Wpisz a: \n");
	scanf("%f", &a);

	printf("Wpisz b: \n");
	scanf("%f", &b);

	printf("Wpisz c: \n");
	scanf("%f", &c);

	if ((a + b) > c && (a + c) > b && (b + c) > a)
		printf("Mozna zbudowac trojkat");
	else
		printf("Nie mozna zbudowac trojkata");
}

void TrojkatProstokatny()
{
	float a = 0.0f, b = 0.0f, c = 0.0f;

	printf("Wpisz a: \n");
	scanf("%f", &a);

	printf("Wpisz b: \n");
	scanf("%f", &b);

	printf("Wpisz c: \n");
	scanf("%f", &c);

	if ((a * a) + (b * b) == (c * c))
		printf("Jest to trojkat prostokatny");
	else
		printf("Nie jest to trojkat prostokatny");
}

void Srodkowa()
{
	float a = 0.0f, b = 0.0f, c = 0.0f;
	float mid = 0.0f;

	printf("Wpisz a: \n");
	scanf("%f", &a);

	mid = a;

	printf("Wpisz b: \n");
	scanf("%f", &b);

	if (b > mid)
		mid = b;

	printf("Wpisz c: \n");
	scanf("%f", &c);

	if (c < mid && c > a)
		mid = c;

	printf("Srodkowa liczba to: %f", mid);
}

void Matma()
{
	char choice = 0;

	int a = 0;
	int b = 0;

	printf("Wpisz pierwsza liczbe\n");
	scanf("%i", &a);

	printf("Wpisz druga liczbe\n");
	scanf("%i", &b);

	printf("Wybierz zadanie\n");
	printf("1. Suma\n");
	printf("2. Roznica\n");
	printf("3. Iloczyn\n");
	printf("4. Iloraz\n");
	printf("5. Reszta z dzielenia\n");

	scanf("%s", &choice);

	switch (choice)
	{
		case 'S':
		{
			printf("a + b = %i", a + b);
			break;
		}
		case 'R':
		{
			printf("a - b = %i", a - b);
			break;
		}
		case 'I':
		{
			printf("a * b = %i", a * b);
			break;
		}
		case 'L':
		{
			if (b == 0)
				printf("Nie mozna dzielic przez 0");
			else
				printf("a / b = %i", a / b);

			break;
		}
		case 'M':
		{
			printf("a % b = %i", a % b);
			break;
		}
		default:
		{
			printf("Wprowadzono niepoprawna operacje");
			break;
		}
	}
}

void Pelnoletni()
{
	unsigned int wiek = 0;

	printf("Wpisz swoj wiek: \n");
	scanf("%u", &wiek);

	if (wiek < 18)
		printf("Jestes niepelnoletni");
	else
		printf("Jestes pelnoletni");
}

void Najwieksza()
{
	float a = 0.0f, b = 0.0f, c = 0.0f, d = 0.0f, e = 0.0f;
	float max = 0.0f;

	printf("Wpisz a: \n");
	scanf("%f", &a);

	max = a;

	printf("Wpisz b: \n");
	scanf("%f", &b);

	if (b > max)
		max = b;

	printf("Wpisz c: \n");
	scanf("%f", &c);

	if (c > max)
		max = c;

	printf("Wpisz d: \n");
	scanf("%f", &d);

	if (d > max)
		max = d;

	printf("Wpisz e: \n");
	scanf("%f", &e);

	if (e > max)
		max = e;

	printf("Najwieksza liczba to: %f", max);
}

int main()
{
	int choice = 0;

	printf("Wybierz zadanie\n");
	printf("1. Najmniejsza\n");
	printf("2. Rownanie kwadratowe\n");
	printf("3. Trojkat\n");
	printf("4. Trojkat prostokatny\n");
	printf("5. Srodkowa\n");
	printf("6. Matma\n");
	printf("7. Pelnoletni\n");
	printf("8. Najwieksza\n");

	scanf("%i", &choice);
	
	switch (choice)
	{
		case 1:
		{
			Najmniejsza();
			break;
		}
		case 2:
		{
			RownanieKwadratowe();
			break;
		}
		case 3:
		{
			Trojkat();
			break;
		}
		case 4:
		{
			TrojkatProstokatny();
			break;
		}
		case 5:
		{
			Srodkowa();
			break;
		}
		case 6:
		{
			Matma();
			break;
		}
		case 7:
		{
			Pelnoletni();
			break;
		}
		case 8:
		{
			Najwieksza();
			break;
		}
		default:
		{
			printf("Wprowadzono niepoprawna operacje");
			break;
		}
	}

	return 0;
}