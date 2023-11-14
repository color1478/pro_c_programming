#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int my_strcmp(char *arr1, char *arr2)
{
	int k = strcmp(arr1, arr2);
	return k;
	
}

int my_strcat(char *arr1,char *arr2)
{
	strcat(arr1, arr2);
	return arr1;
}

int my_strcpy(char* arr2, char* s1)
{
	strcpy(s1, arr2);
}

void main()
{
	char arr1[10];
	char arr2[10];
	char s1[6];

	printf("5글자 이내 영단어 입력\n");
	printf("문자열 1: ");
	scanf("%s", arr1);
	printf("문자열 2: ");
	scanf("%s", arr2);

	int k = my_strcmp(&arr1, &arr2);
	printf("my_strcmp 결과 값 : %d\n", k);
	my_strcat(&arr1, &arr2);
	printf("my_strcat 결과 값 :");
	puts(arr1);
	printf("my_strcpy 결과 값 :");
	my_strcpy(&arr2, &s1);
	puts(arr2);
}