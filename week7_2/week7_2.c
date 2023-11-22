#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

void main()
{
    FILE* infile;
    FILE* outfile;
    infile = fopen("in.txt", "r");
    outfile = fopen("output2.txt", "w");

    char tmp[100];
    char* p[4];
    int i = 0, str_len;

    while (fgets(tmp, 100, infile) != NULL)
    {
        str_len = strlen(tmp);
        p[i] = (char*)malloc(sizeof(char) * str_len + 1);

        for (int j = 0; j < str_len; j++)
        {
            p[i][str_len - j - 1] = tmp[j];
        }

        p[i][str_len] = '\0';
        i++;
    }

    for (i = 0; i < 4; i++)
    {
        fputs(p[i], outfile);
        free(p[i]);

    }
    fclose(outfile);
    fclose(infile);
}
