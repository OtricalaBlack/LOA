#define _CRT_SECURE_NO_WARNINGS
#define width 4
#define height 4
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

int main() 
{
	srand(time(NULL)); // Подключение случайных чисел 

	setlocale(LC_ALL, "RUS"); // Подключение русского языка 

	int mas[width][height];
	int temp = 0;
	int count = 0;

	// Заполнение двумерного массива случайными числами
	for (int i = 0; i < width; i++) 
	{
		for (int j = 0; j < height; j++) 
		{
			temp = 0 + rand() % 2;
			if (temp == 0) {
				*(*(mas + i) + j) = 0;
			}
			else {
				*(*(mas + i) + j) = 1 + rand() % 100;
			}
		}
	}

	printf("\t\tСгенерированный массив\n\n");

	// Вывод сгенерированного массива 
	for (int i = 0; i < width; i++) 
	{
		count = 0;
		for (int j = 0; j < height; j++)
		{
			if (mas[i][j] != 0)
			{
				count++;

			}
			printf("\t%4d", *(*(mas + i) + j));
			
		}
		printf("| %d", count);
		printf("\n");
		
	}

	printf("\n\n");

	//printf("Количество ненулевых элементов: %d", count);


	printf("\n");
	
	return 0;
}