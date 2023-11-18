#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning (disable: 4996)

void switch_str(char* p, int len);

void main()
{
	char* p[2];
	char tmp[100];

	for (int i = 0; i < 2; i++)
	{
		printf("[%d]문자열 입력 : ", i + 1);
		scanf("%s", tmp);

		int len = strlen(tmp);
		
		p[i] = (char*)malloc((sizeof(char) * len) + 1);
		strcpy(p[i], tmp);
		switch_str(p[i], len);
	}

	if ((strcmp(p[0], p[1])) == 0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
	free(p[0]);
	free(p[1]);
}

void switch_str(char*p, int len)
{
		for (int j = 0; j <= len; j++)
		{
			if (p[j] >= 97 && p[j] <= 122)
			{
				p[j] = p[j] - 32;
			}
		}

	return p;
}