#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning (disable: 4996)

void main()
{
	char* p;
	char tmp[100];

	printf("���ڿ� �Է� : ");
	gets(tmp);
	
	int len = strlen(tmp) +1;

	p = (char*)malloc(sizeof(char) * len);

	strcpy(p, tmp);

	for (int i = 0; i < len - 1; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	}
	printf("�빮�� : %s\n", p);
	for (int i = 0; i < len - 1; i++)
	{
		if (p[i] >= 65 && p[i] <= 90)
		{
			p[i] = p[i] + 32;
		}
	}
	printf("�ҹ��� : %s", p);
	free(p);
}