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

	printf("5���� �̳� ���ܾ� �Է�\n");
	printf("���ڿ� 1: ");
	scanf("%s", arr1);
	printf("���ڿ� 2: ");
	scanf("%s", arr2);

	int k = my_strcmp(&arr1, &arr2);
	printf("my_strcmp ��� �� : %d\n", k);
	my_strcat(&arr1, &arr2);
	printf("my_strcat ��� �� :");
	puts(arr1);
	printf("my_strcpy ��� �� :");
	my_strcpy(&arr2, &s1);
	puts(arr2);
}