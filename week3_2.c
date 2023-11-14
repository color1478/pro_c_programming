#include <stdio.h>
#pragma warning(disable:4996)

void mat_pointer(int a[4][8])
{
	for (int i = 0; i < 8; i ++)
	{
		for (int i = 0; i < 4; i++)
		{
			*(*(a + 1) + 2 * i) = *(*(a + 0) + 2 * i) + *(*(a + 0) + (2 * i + 1));
		}
		for (int i = 0; i < 2; i++)
		{
			*(*(a + 2) + 4 * i) = *(*(a + 1) + 4 * i) + *(*(a + 1) + (4 * i + 2));
		}
		*(*(a + 3) + 0) = *(*(a + 2) + 0) + *(*(a + 2) + 4);
	}
}

void arr_printf(int arr[4][8])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int arr[4][8] = { 0 };

	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[0][i]);
	}
	mat_pointer(arr);
	arr_printf(arr);

}