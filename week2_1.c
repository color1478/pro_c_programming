#include <stdio.h>
#pragma warning (disable:4996)

void value_swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("After value swap(in function), A:%d, B:%d\n", a, b);
}

void refernece_swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("After value swap(in function), A:%d, B:%d\n", *a,* b);
}

void main()
{
	int a, b;
	printf("2개 숫자 입력 : ");
	scanf("%d %d", &a, &b);
	printf("Before swap, A:%d, B:%d\n", a, b);
	value_swap(a, b);
	printf("After value swap(in main), A:%d, B:%d\n", a, b);
	refernece_swap(&a, &b);
	printf("Reference value swap(in main), A:%d, B:%d\n", a, b);

}