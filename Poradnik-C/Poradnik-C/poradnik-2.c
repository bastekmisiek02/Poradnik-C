#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //Biblioteka potrzebna do malloc i free

//Zmienna globalna
float x = 0;

//Przyk³adowa funkcja z returnem
float Sumowanie(float a, float b)
{
	float c = a + b;
	return c;
}

/*
	Tworzenie funkcji:
	TypZwracany NazwaFunkcji(lista argumentów)
	{
		Cia³o funkcji czyli to co funkcja robi
	}
*/
void Wypisz(float a, int b)	//Przyk³adowe tworzenie funkcji
{
	printf("Wypisujemy %f\n", x);
}

int main()
{
	//Zmienne na stacku("stosie")
	int a = 0;

	int b = 2;
	float def;
	
	//Dodatkowe scopy
	{
		int sad = 0;
	}

	{
		int sad = 1;
	}

	//Wywo³anie funckji
	Wypisz(10.0, a);
	
	//Wywo³anie funkcji i przypisanie wyniku do zmiennej
	def = Sumowanie(1, 2.5);

	//Przyk³ad if'a
	if (a == 2)
		printf("%i == 2", a);
	else if (a == 3)
		printf("%i == 3", a);
	else
		printf("%i nie jest\n ", a);

	//Przyk³ad switcha
	switch (b)
	{
		case 2:
		{
			printf("b jest liczba 2\n");
			break;
		}
		case 3:
		{
			printf("b jest liczba 3\n");
			break;
		}
		case 4:
		{
			printf("b jest liczba 4\n");
			break;
		}
		case 54:
		{
			printf("b jest liczba 54\n");
			break;
		}
		default:
		{
			printf("b jest inna liczba\n");
			break;
		}
	}

	//Tworzenie zmiennej na heapie
	void* variable = malloc(sizeof(int)/*sizeof(...) instrukcja zwracaj¹ca wielkoœæ typu albo zmiennej podanej w nawiasie (wielkoœæ typu podana w bajtach)*/);

	//Usuwanie zmiennej z heapu
	free(variable); //Zawsze musimy usuwaæ zmienn¹ z heapu bo inaczej wystêpuje memory leak

	return 0;
}