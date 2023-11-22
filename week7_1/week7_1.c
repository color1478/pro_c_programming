#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning (disable: 4996)

void main()
{
	FILE* file;
	file = fopen("output1.txt","w");

	char* p[3];
	char tmp[100];
	int r, str_size;
	for (int i = 0; i < 3; i++)
	{
		printf("%d 번째 문자열 : ", i + 1);
		gets(tmp);
		str_size = strlen(tmp);

		p[i] = (char*)malloc((sizeof(char) * str_size) + 1);

		strcpy(p[i], tmp);
	}

	printf("\n --입력과 반대로 출력(포인터) : 글자 순서도 거꾸로-- \n");
	for (int i = 2; i >= 0; i--)
	{
		printf("%d : ", i + 1);

		r = strlen(p[i]);
		for (r; r != 0; r--)
		{
			fprintf(file, "%c", p[i][r - 1]);
			printf("%c", p[i][r - 1]);

		}
		fprintf(file, "\n");
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		free(p[i]);
	}
}