#include <stdio.h>
#include <malloc.h>
#pragma warning(disable:4996)



void main()
{
	int sum=0,num,i = 0;
	int* p;
	p = (int*)malloc(1);
	while(1)
	{
		printf("���� �Է� : ");
		scanf("%d", &num);

		if (num != 0)
		{
			if (num % 2 == 0)
			{
				sum += num;
				i++;
			}
		}
		else
		{
			p = (int*)realloc(p, sizeof(int) * i);
			break;
		}
	}
	printf("�Է��� ¦�� �� ==> %d", sum);
	free(p);
}