#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1 FOR
	int p = 0;
	scanf("%i", &p);
	
	/*FOR
		Ogólna budowa:
		for(Definicja zmiennej "steruj¹cej"; Warunek pêtli; dzia³anie na zmiennej)
		{
			Kod który ma siê powtarzaæ
		}
	
		Kolejnoœæ dzia³ania pêtli:

		for	(1; 2, 5...; 4...)
		{
			3, 6...
		}
	*/

	for (/*Definicja zmiennej "steruj¹cej"*/ float i = p; /*Warunek pêtli (je¿eli jest prawdziwy wykonuj pêtle dalej jeœli nie wyjdŸ z pêtli)*/ i <= 100; /*dzia³anie na zmiennej*/ i++)
	{
		printf("%f\n", i);
	}

	//2 WHILE
	int i = 0;
	
	/*WHILE
		Ogólna budowa:
		while(Warunek pêtli)
		{
			Kod który ma siê powtarzaæ
		}

		Kolejnoœæ dzia³ania pêtli:

		while (1, 3...)
		{
			2, 4...
		}
	*/

	while (/*Warunek pêtli*/ i <= 100)
	{
		printf("%i\n", i);
	
		i++;
	}

	//3 DO...WHILE
	int j = 0;
	
	/*DO...WHILE
		Ogólna budowa:
		do
		{
			Kod który ma siê powtarzaæ
		}while(Warunek pêtli);

		Kolejnoœæ dzia³ania pêtli:

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