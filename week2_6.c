#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void func_sort(char* arr, char* by_to, int r);
void arr_print(int *arr);
void input_char();


void func_sort(char *arr, char *by_to, int r)
{
	char by[2][10] = { "AEC", "DESC" };

	if (strcmp(by_to, by[1]) == 0)
	{
		for (int i = 0; i < r; i++)//��������
		{
			int tmp = 0;
			for (int j = 0; j < r; j++)
			{
				if (arr[j] > arr[i])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}

		}
	}
	else if (strcmp(by_to, by[0]) == 0)
	{
		for (int i = 0; i < r; i++) //��������
		{
			int tmp = 0;
			for (int j = 0; j < r; j++)
			{
				if (arr[j] < arr[i])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
	}
	else
	{
		printf("�߸��� �Է�");
		return 0;
	}
	arr_print(arr);
}


void input_char()
{
	char arr[100];
	char by_to[10];
	int r;

	printf("100�� �̳� ���ڿ� �ۼ� : ");
	scanf("%s", arr);
	printf("���� ���� ���(AEC, DESC) : ");
	scanf("%s", by_to);
	r = strlen(arr);
	arr[r] = '\0';

	printf("before : ");
	arr_print(arr);
	printf("sorting : ");
	func_sort(&arr, &by_to, r);
}

void arr_print(int *arr)
{
	puts(arr);
}


void main()
{
	input_char();
}