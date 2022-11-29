#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

const float pi = 3.14159265359f;

void Sphere()
{
	float r = 0.0f;

	printf("Wprowadz promien kuli: \n");
	scanf("%f", &r);

	printf("Pole powierzchni kuli wynosi: %f\n", 4.0f * pi * (r * r));
	printf("Objetosc kuli wynosi: %f\n", (4.0f / 3.0f) * pi * (r * r * r));
}

void Cuboid()
{
	float a = 0.0f, b = 0.0f, c = 0.0f;

	printf("Wprowadz krawedz a: \n");
	scanf("%f", &a);

	printf("Wprowadz krawedz b: \n");
	scanf("%f", &b);

	printf("Wprowadz krawedz c: \n");
	scanf("%f", &c);

	printf("Pole powierzchni calkowitej prostopadloscianu wynosi: %f\n", 2.0f * (a * b + a * c + b * c));
	printf("Pole powierzchni bocznej prostopadloscianu wynosi: %f\n", 4.0f * (a * b));
	printf("Objetosc prostopadloscianu wynosi: %f\n", a * b * c);
}

void Cone()
{
	float r = 0.0f;
	float H = 0.0f;

	printf("Wprowadz wysokosc stozka: \n");
	scanf("%f", &H);

	printf("Wprowadz promien podstawy stozka: \n");
	scanf("%f", &r);

	float l = sqrt((H * H) + (r * r));

	printf("Pole powierzchni calkowitej stozka wynosi: %f\n", pi * r * (r + l));
	printf("Pole powierzchni bocznej stozka wynosi: %f\n", pi * r * l);
	printf("Objetosc stozka wynosi: %f\n", ((1.0f / 3.0f) * pi * (r * r)) * H);
}

void Roller()
{
	float w = 0.0f;
	float R = 0.0f;

	printf("Wprowadz wysokosc walca: \n");
	scanf("%f", &w);

	printf("Wprowadz promien podstawy walca: \n");
	scanf("%f", &R);

	printf("Pole powierzchni calkowitej walca wynosi: %f\n", 2.0f * pi * R * (R + w));
	printf("Pole powierzchni bocznej walca wynosi: %f\n", 2.0f * pi * R * w);
	printf("Objetosc walca wynosi: %f\n", pi * (R * R) * w);
}

int main()
{
	int choice = 0;

	printf("Wybierz figure:\n");
	printf("1. Kula\n");
	printf("2. Prostopadloscian\n");
	printf("3. Stozek\n");
	printf("4. Walec\n");

	scanf("%i", &choice);

	printf("\n\n");

	switch (choice)
	{
		case 1:
		{
			Sphere();

			break;
		}
		case 2:
		{
			Cuboid();

			break;
		}
		case 3:
		{
			Cone();

			break;
		}
		case 4:
		{
			Roller();

			break;
		}
		default:
			break;
	}

	return 0;
}