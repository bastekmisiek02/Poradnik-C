#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Display(int* numbers)
{
	int count = 0;
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int index = i * 3 + j;

			printf("%i ", numbers[index]);

			if (numbers[index] % 2 == 0)
			{
				sum += numbers[index];
				count++;
			}
		}

		printf("\n");
	}
	
	printf("\n");

	printf("Wprowadzono %i liczb parzystych\n", count);
	printf("Suma liczb parzystych wynosi: %i", sum);
}

int main()
{
	int numbers[12];

	printf("Wprowadz 12 liczb\n");

	for (int i = 0; i < 12; i++)
		scanf("%i", &numbers[i]);

	printf("\n");

	Display(numbers);

	return 0;
}