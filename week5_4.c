#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning(disable:4996)

void ro_num(num);
void appendchar(char** result, char roman, int* strLen);

void main()
{
	int num;
	printf("���� �Է� (1000����) : ");
	scanf("%d", &num);
	if (num <= 0 || num > 1000)
	{
		printf("���� ����.\n");
		return 0;
	}
	ro_num(num);
}

void ro_num(int num)
{
	int arabic[] = { 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 }; //���� 1����
	char* roman[] = { "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" }; //���� 2���� �迭(������ �迭)
	char* result = (char*)malloc(sizeof(char) * 20); //��� �� �迭 ���� 1���� �迭 (������ �迭)

	int resultLen = 0;
	
	
	for (int i = 0; num > 0; i++)
	{
		while (num >= arabic[i])
		{
			num -= arabic[i];
			for (int j = 0; roman[i][j] != '\0'; j++) 
			{
				appendchar(&result, roman[i][j], &resultLen);
			}
		}
	}
	printf("�θ� ����: %s\n", result);
	printf("���ڿ� ����: %d\n", resultLen);

	free(result);
}

void appendchar(char **result, char roman, int* strLen)
{
	int resultSize = 20;
	if (*strLen + 1 >= resultSize)
	{
		*result = (char*)realloc(*result, (resultSize)*2);
	}
	(*result)[(*strLen)++] = roman;
	(*result)[*strLen] = '\0';
}