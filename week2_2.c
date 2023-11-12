#include <stdio.h>
#pragma warning (disable:4996)

void swap(int arr[2])
{
	int tmp;
	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
	printf("Swap by index : %d %d", arr[0], arr[1]);
}

void pointer_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("Swap by Pointer : %d %d", *a, *b);
}

void main()
{
	int arr[2] = {0};
	printf("2개의 숫자 입력 : ");
	scanf("%d %d", &arr[0], &arr[1]);
	printf("before Swap: %d %d\n", arr[0], arr[1]);
	swap(arr);

	printf("\n2개의 숫자 입력 : ");
	scanf("%d %d", &arr[0], &arr[1]);
	printf("before Swap: %d %d\n", arr[0], arr[1]);
	pointer_swap(&arr[0], &arr[1]);
	

}