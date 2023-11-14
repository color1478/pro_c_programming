#include <stdio.h>
#pragma warning(disable:4996)

int swap_print(int x, int y);
void x_axis(int* y);
void y_axis(int* x);
void xy_axis(int* x, int* y);


void main()
{
	int x, y;
	printf("x, y ют╥б(-2, -1, 1, 2) : ");
	scanf("%d %d", &x, &y);
	swap_print(x, y);
	x_axis(&y);
	swap_print(x, y);
	y_axis(&x);
	swap_print(x, y);
	xy_axis(&x, &y);
	swap_print(x, y);
}

int swap_print(int x, int y)
{
	switch (x)
	{
	case -2: x= 0; break;
	case -1: x = 1; break;
	case 1: x = 2; break;
	case 2: x = 3; break;
	default: break;
	}
	
	switch (y)
	{
	case 2: y= 0; break;
	case 1: y = 1; break;
	case -1: y = 2; break;
	case -2: y = 3; break;
	default: break;
	}
	
	char arr[4][4] = { "O" };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == x && i == y)
			{
				printf("X");
			}
			else
			{
				printf("O");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void x_axis(int* y)
{
	*y = -1 * *y;
}

void y_axis(int* x)
{
	*x = -1 * *x;
}

void xy_axis(int* x, int* y)
{
	*y = -1 * *y;
	*x = -1 * *x;
}