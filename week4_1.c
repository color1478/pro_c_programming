#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)

void main()
{
	int num;
	int* p;
	int sum = 0;
	printf("�Է��� ������? ");
	scanf("%d", &num);
	p = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
	{
		printf("%d��° ���� : ", i+1);
		scanf("%d", p+i);
		if (*(p + i) % 2 == 0)
		{
			sum = sum + *(p + i);
		}
	}
	printf("�Է��� ¦�� �� ==> %d", sum);

	free(p);
}