#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	To jest komentarz wieloliniowy
*/

//To jest komentarz jednoliniowy

int main()
{
	int a = -50; //utworzenie zmiennej całkowitoliczbowej o nazwie 'a', z przypisaniem -50
	float b; //zadeklarowanie zmiennej po przecinku o nazwie 'b'
	double c = 20.2; //zadeklarowanie zmiennej zmiennoprzecinkowej 'c', z przypisaniem 20.2
	char d = 'b'; //zadeklarowanie zmiennej znakowej 'd', z przypisaniem b

	unsigned int e = 2;	//zadeklarowanie zmiennej całkowitoliczbowej bez znaku 'e', z przypisaniem 2
	unsigned char f = 'd'; //zadeklarowanie zmiennej znakowej bez znaku 'f', z przypisaniem d

	//Przypisanie 2.5 do zmiennej 'b'
	b = 2.5f;

	//Przypisanie wartości połowy zmiennej 'a' do zmiennej 'a'
	a = a / 2;

	//Wypisanie "Hello world {wartość zmiennej a}, {wartość zmiennej b}, {wartość zmiennej d}"
	printf("Hello world %i, %f, %c", a, b, d);

	//Pobranie danych z klawiatury, następniej przypisanie do zmiennej b
	scanf("%f", &b);

	/*
		Przykładowe zadanie:
		Napisz program obliczający pole prostokąta
	*/
	float x; 
	float y; 
	float total; 
	printf("podaj bok a prostokata:\n"); 
	scanf("%f", &x); 
	printf("podaj bok b prostokata:\n"); 
	scanf("%f", &y);
	total = x * y;
	printf("pole prostokata wynosi %f", total);

	return 0;
}