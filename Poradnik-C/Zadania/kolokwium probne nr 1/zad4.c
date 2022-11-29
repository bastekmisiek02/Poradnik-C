#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Policz(int* liczby)
{
	int ilosc = 0;
	int suma = 0;

	printf("%i %i %i\n", liczby[0], liczby[1], liczby[2]);
	printf("%i %i %i\n", liczby[3], liczby[4], liczby[5]);
	printf("%i %i %i\n", liczby[6], liczby[7], liczby[8]);
	printf("%i %i %i\n", liczby[9], liczby[10], liczby[11]);

	for (int i = 0; i < 12; i++)
	{
		if (liczby[i] % 2 == 0)
		{
			ilosc++;
			suma += liczby[i];
		}
	}

	printf("Jest %i liczb parzystych\n", ilosc);
	printf("Suma liczb parzystych wynosi: %i", suma);
}

int main()
{
	int liczby[12];

	printf("Wprowadz 12 liczb\n");

	for (int i = 0; i < 12; i++)
		scanf("%i", &liczby[i]);

	printf("\n");

	Policz(liczby);

	return 0;
}