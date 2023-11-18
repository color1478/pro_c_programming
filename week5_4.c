#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning(disable:4996)

void ro_num(num);
void appendchar(char** result, char roman, int* strLen);

void main()
{
	int num;
	printf("숫자 입력 (1000까지) : ");
	scanf("%d", &num);
	if (num <= 0 || num > 1000)
	{
		printf("범위 오류.\n");
		return 0;
	}
	ro_num(num);
}

void ro_num(int num)
{
	int arabic[] = { 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 }; //숫자 1차원
	char* roman[] = { "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" }; //문자 2차원 배열(포인터 배열)
	char* result = (char*)malloc(sizeof(char) * 20); //결과 값 배열 문자 1차원 배열 (포인터 배열)

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
	printf("로마 숫자: %s\n", result);
	printf("문자열 길이: %d\n", resultLen);

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