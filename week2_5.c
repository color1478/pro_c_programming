#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void sort_Ascending(int *arr);
void sort_Descending(int* arr);
void arr_print(int* arr);


void sort_Ascending(int *arr) //오름차순
{
	for (int i = 0; i < 100; i++)
	{
		int tmp = 0;
		for (int j = 0; j < 100; j++)
		{
			if (arr[j] > arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}

	}
	arr_print(arr);
}

void sort_Descending(int *arr) //내림차순
{
	for (int i = 0; i < 100; i++)
	{
		int tmp = 0;
		for (int j = 0; j < 100; j++)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	arr_print(arr);
}

void arr_print(int *arr)
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%2d ", arr[i]);
	}
	printf("\n\n");
}


void main()
{
	int arr[100] = {0, };
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 99 +1;
	}

	printf("before : ");
	arr_print(&arr);
	printf("sort_Ascending : ");
	sort_Ascending(&arr);
	printf("sort_Descending : ");
	sort_Descending(&arr);
	
}