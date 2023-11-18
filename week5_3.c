#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning(disable:4996)

void main()
{
	int num, max_len = 0;
	char** p;
	char tmp[100];

	printf("입력 받을 문자열 개수 : ");
	scanf("%d", &num);
	p = (char**)malloc(sizeof(char*) * num);
	for (int i = 0; i < num; i++)
	{
		printf("[%d] : ", i+1);
		scanf("%s", tmp);

		int len = strlen(tmp);
		
		if (len > max_len)
		{
			max_len = len;
		}

		p[i] = (char*)malloc(sizeof(char) * len + 1);
		strcpy(p[i], tmp);
	}
	
	for (int j = 0; j < max_len; j++)
	{
		for (int i = 0; i < num; i++)
		{
			printf("%c", p[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < num; i++)
	{
		free(p[i]);
	}
}