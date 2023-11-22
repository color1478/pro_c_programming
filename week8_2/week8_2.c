#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* file;

    file = fopen("grade.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1; 
    }

    char sub[200][200];
    int num;
    char alp[5];
    float gr;
    float number = 0;
    int sum = 0;
    int entryCounter = 0; 

    for (int i = 0; ; i++)
    {
        if (feof(file))
        {
            break;
        }
        fscanf(file, "%s\t%d\t%s\n", sub[i], &num, alp);

        if (entryCounter >= 3)
        {
            switch (alp[0])
            {
            case 'A':
                if (alp[1] == '+')
                {
                    gr = 4.5;
                }
                else
                    gr = 4.0;
                break;
            case 'B':
                if (alp[1] == '+')
                {
                    gr = 3.5;
                }
                else
                    gr = 3.0;
                break;
            case 'C':
                if (alp[1] == '+')
                {
                    gr = 2.5;
                }
                else
                    gr = 2.0;
                break;
            case 'D':
                if (alp[1] == '+')
                {
                    gr = 1.5;
                }
                else
                    gr = 1.0;
                break;
            default:
                gr = 0;
                break;
            }
            printf("%s¿« ∆Ú¡°: %.2f\n", sub[i], num * gr);
            number += num * gr;
            sum += num;
        }
        entryCounter++;
    }

    printf("√—¡°:%.2f\n", number);
    printf("√—∆Ú¡°:%.2f\n", number / sum); 

    fclose(file); 
    return 0;
}