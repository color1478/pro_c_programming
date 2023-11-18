#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning (disable:4996)

void main()
{
	char* p[3];
	char input_str[100];
	int len, len_sum = 0;
	
	for (int i = 0; i < 2; i++)
	{
		printf("%d번째 문자열 입력 : ", i+1);
		gets(input_str);

		len = strlen(input_str);
		p[i] = (char*)malloc(sizeof(char) * len+1);
		strcpy(p[i], input_str);
		len_sum += len;
	}
	p[2] = (char*)malloc(sizeof(char) * len_sum+1);
	strcpy(p[2], p[0]);
	strcat(p[2], p[1]);

	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 문자열 : %s\n", i+1, p[i]);
		free(p[i]);
	}
	return 0;
}