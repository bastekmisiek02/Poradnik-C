#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1 FOR
	int p = 0;
	scanf("%i", &p);
	
	/*FOR
		Og�lna budowa:
		for(Definicja zmiennej "steruj�cej"; Warunek p�tli; dzia�anie na zmiennej)
		{
			Kod kt�ry ma si� powtarza�
		}
	
		Kolejno�� dzia�ania p�tli:

		for	(1; 2, 5...; 4...)
		{
			3, 6...
		}
	*/

	for (/*Definicja zmiennej "steruj�cej"*/ float i = p; /*Warunek p�tli (je�eli jest prawdziwy wykonuj p�tle dalej je�li nie wyjd� z p�tli)*/ i <= 100; /*dzia�anie na zmiennej*/ i++)
	{
		printf("%f\n", i);
	}

	//2 WHILE
	int i = 0;
	
	/*WHILE
		Og�lna budowa:
		while(Warunek p�tli)
		{
			Kod kt�ry ma si� powtarza�
		}

		Kolejno�� dzia�ania p�tli:

		while (1, 3...)
		{
			2, 4...
		}
	*/

	while (/*Warunek p�tli*/ i <= 100)
	{
		printf("%i\n", i);
	
		i++;
	}

	//3 DO...WHILE
	int j = 0;
	
	/*DO...WHILE
		Og�lna budowa:
		do
		{
			Kod kt�ry ma si� powtarza�
		}while(Warunek p�tli);

		Kolejno�� dzia�ania p�tli:

		do
		{
			1, 3 ...
		}while (2, 4 ...);
	*/

	do
	{
		printf("%i\n", j);
	
		j++;
	} while (j <= 100);

	return 0;
}