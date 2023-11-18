#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)

void main()
{
	int num;
	int* p;
	int sum = 0;
	printf("입력할 개수는? ");
	scanf("%d", &num);
	p = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 숫자 : ", i+1);
		scanf("%d", p+i);
		if (*(p + i) % 2 == 0)
		{
			sum = sum + *(p + i);
		}
	}
	printf("입력한 짝수 합 ==> %d", sum);

	free(p);
}