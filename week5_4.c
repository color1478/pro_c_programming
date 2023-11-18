#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning(disable:4996)

void ro_num(num);
int appendchar(char** result, char roman);
int resultLen = 0;
int resultSize = 20;


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
	
	for (int i = 0; num > 0; i++)
	{
		while (num >= arabic[i])
		{
			num -= arabic[i];
			for (int j = 0; roman[i][j] != '\0'; j++) 
			{
				appendchar(&result, roman[i][j]);
			}
		}
	}
	printf("�θ� ����: %s\n", result);
	printf("���ڿ� ����: %d\n", resultLen);

	free(result);
}

int appendchar(char **result, char roman)
{
	if (resultLen + 1 >= resultSize)
	{
		*result = (char*)realloc(*result, (resultSize)*2);
	}
	(*result)[resultLen++] = roman;
	(*result)[resultLen] = '\0';

	return resultLen;
}