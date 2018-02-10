#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

void fillArr(int *mas, int length);
void printArr(int arr, int countE1);

enum typeSort{decreasing, increasing};
void main()
{
	int mas[10] = { 0 };

	printArr(mas, 10);
	
}

void sortArr(int * arr, int *countE1, typeSort typeS)
{
	
	for (int j = *countE1 - 1; j > 1; j--)
	{
		if (arr[j] < arr[j - 1])
		{
			switch (typeS)
			{
			case decreasing:
				sortL(&arr[j]);
				break;
			case increasing:
				sortH(&arr[j]);
				break;
			}
			arr++;
		}
	}
}

void sortArr(int * arr, int countE1)
{
	int temp;
	for (int j = countE1 - 1; j > 1; j--)
	{
		if (arr[j] < arr[j - 1])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
	}
}


void sortL(int * arr)
{
	int temp;
	if (*arr < *(arr - 1))
	{
		temp = *arr;
		*arr = *(arr-1);
		*(arr-1) = temp;
	}
}

void sortH(int * arr)
{
	int temp;
	if (*arr > *(arr - 1))
	{
		temp = *arr;
		*arr = *(arr - 1);
		*(arr - 1) = temp;
	}
}

void fillArr(int *mas, int length)
{
	srand(time(NULL));

	for (int i = 0; i < length; i++)
	{
		mas[i] = 1 + rand() % 100;
	}
		
}

void printArr(int arr, int countE1)
{
	for (int i = 0; countE1, i++)
	{
		cout << arr << "\t";
	}
}
void printMatrixArr(int (* arr)[4], int countE1)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < countE1; j++)
		{
			cout << arr[i][j] << "\t";
		}
	}
}