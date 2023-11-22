#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

char filename[20];

int file_open(char num[20]);
int str_to_int(char* str);

int main()
{
    char num[20];

    printf("����ϰ� ���� ���� �Է� : ");
    scanf("%s", num);
    file_open(num);
    FILE* file = fopen(filename, "w");

    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    int dan = str_to_int(num);

    if (dan == -1)
    {
        printf("�ùٸ� ���ڸ� �Է��ϼ���.\n");
        fclose(file);
        return 1;
    }

    for (int i = 1; i < 10; i++)
    {
        fprintf(file, "%d X %d = %d\n", dan, i, dan * i);
    }

    fclose(file);
    printf("������ ���������� �����Ǿ����ϴ�.\n");

    return 0;
}

int file_open(char num[20])
{
    strcpy(filename, num);
    strcat(filename, "_dan.txt");
    return 0;
}

int str_to_int(char* str)
{
    int result = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }
        else
        {
            return -1; 
        }
        i++;
    }
    return result;
}