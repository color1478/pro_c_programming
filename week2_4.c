#include <stdio.h>

void th(int arr[30])
{
	for (int i = 2; i < 31; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				arr[i - 2] = 0;
			}
		}
	}
}

void main()
{
	int arr[30];
	for (int i = 0; i < 29; i++)
	{
		arr[i] = i + 2;
	}
	th(arr);
	for (int i = 0; i < 29; i++)
	{
		printf("%d ", arr[i]);

	}
}