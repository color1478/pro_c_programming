#include <stdio.h>
#include <malloc.h>
#include <string.h>
#pragma warning(disable:4996)
#define MAX_LINES_A 5
#define MAX_LINES_B 20
#define MAX_WORD_LEN 50

void sort_Ascending();
void sort_Descending();
void write_result_to_file(char* filename);


void main()
{
	FILE* file = fopen("data.txt", "r");
	char* arr_A[MAX_LINES_A];
	char* arr_B[MAX_LINES_B];

	for (int i = 0; i < MAX_LINES_A; i++)
	{
		arr_A[i] = (char*)malloc(MAX_WORD_LEN);
	}
	for (int i = 0; i < MAX_LINES_B; i++)
	{
		arr_B[i] = (char*)malloc(MAX_WORD_LEN);
	}

	while (fgets(arr_A, 100, file) != NULL)
	{
		
		printf("%s", arr_A);
	}


	fclose(file);
}

void sort_Ascending()
{

}
void sort_Descending()
{

}

void write_result_to_file(char *filename)
{
	FILE* file = fopen(filename, "w");

	fprintf(file, "=======sorting Result=======\n");

	fclose(file);
}