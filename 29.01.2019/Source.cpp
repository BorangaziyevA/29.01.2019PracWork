#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task8()
{
	int A[4][3] = { 0 }, B[4] = { 0 };

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			A[i][j] = 0 + rand() % 10;
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			B[i] = B[i] + A[i][j];
		}

	}
}

void task7()
{
	int A[4] = { 0 };

	for (size_t i = 0; i < 4; i++)
	{
		A[i] = 0 + rand() % 255;
		printf("%d.", A[i]);
	}
	printf("\n");
}

void task6()
{
	int A[10], x, s = 10, a = 1, count = 0;

	printf("Введите число для разбиения = ");
	scanf_s("%d", &x);

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = (x % s)/a;
		s = s * 10;
		a = a * 10;
	}

	
	do
	{
		x = x / 10;
		count++;
	} while (x != 0);

	printf("\n");

	for (size_t i = 0; i < count; i++)
	{
		if (A[i]>-1)
		{
			printf("%d  ", A[i]);
		}
	}
}

void task5()
{
	int A[5] = { 0 }, B[5], X[10] = { 0 }, G = 0, x;

	for (size_t i = 0; i < 5; i++)
	{
		A[i] = -5 + rand() % 10;
		B[i] = -5 + rand() % 10;
		printf("%d\t",A[i]);
	}

	printf("\n");

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\t", B[i]);
	}

	printf("\n");

	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			X[i] = A[i];
		}
		else if (i > 4)
		{
			X[i] = B[G];
			G++;
		}
	}

	for (size_t i = 1; i < 10; i++)
	{
		for (size_t j = 1; j < 10; j++)
		{
			if (X[j] > X[j-1])
			{
				x = X[j];
				X[j] = X[j - 1];
				X[j - 1] = x;
			}

		}

	}

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\t", X[i]);
	}
}

void task4()
{
	int A[10] = { 0 }, flag = 0, ind,O,sum = 0;
	float st;

	printf("Оценки:\n");

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 2 + rand() % 3;
		printf("%d  ", A[i]);
		sum = sum + A[i];
	}
	printf("\n\n\n");


	do
	{
		printf("Введите индекс массива = ");
		scanf_s("%d", &ind);

		printf("Введите оценку:");
		scanf_s("%d", &O);

		A[ind] = O;

		printf("Хотите продолжить?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);

	printf("Оценки:\n");

	sum = 0;

	for (size_t i = 0; i < 10; i++)
	{
		printf("%d  ", A[i]);
		sum = sum + A[i];
	}
	printf("\n\n\n");

	st = (float)sum / 10;

	printf("\nСредняя оценка = %f\n", st);

	if (st >= 3 )
	{
		printf("\nСтипендия выдается\n");
	}
	else
		printf("\nСтипендия не выдается\n");
}

void task3()
{
	int A[12][2] = { 0 }, month = 1, MaxM = 0, MinM = 0, Max = 0, Min = 10000;

	for (size_t i = 0; i < 12; i++)
	{

		for (size_t j = 0; j < 2; j++)
		{
			if (month == 13)
			{
				month = 1;
			}
				A[i][0] = month;
				A[i][1] = 0 + rand() % 10000;

				if (Max < A[i][1])
				{
					Max = A[i][1];
					MaxM = month;
				}

				if (Min > A[i][1])
				{
					Min = A[i][1];
					MinM = month;
				}
				printf("%d\t", A[i][j]);
			

		}
		printf("\n");
		month++;

	}

	printf("\nМаксимальная прибыль %d была в %d месяце\n", Max, MaxM);
	printf("\nМинимальная прибыль %d была в %d месяце\n", Min, MinM);
}

void task2()
{
	int A[10] = { 0 }, x = 9, y;

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("A[%d] = %d\n", i, A[i]);
	}

	for (size_t i = 0; i < 5; i++)
	{
		y = A[i];
		A[i] = A[x];
		A[x] = y;
		x--;
	}

	printf("\n\n");

	for (size_t i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}
}

void task1()
{
	int A[6][2] = { 0 };
	int month = 10, pr = 0;

	for (size_t i = 0; i < 6; i++)
	{

		month++;

		for (size_t j = 0; j < 2; j++)
		{
			if (month == 13)
				month = 1;
			A[i][0] = month;
			A[i][1] = 1 + rand() % 10000;
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}