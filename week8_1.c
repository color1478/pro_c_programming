#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

char filename[20];

int file_open(char num[20]);
int str_to_int(char* str);

int main()
{
    char num[20];

    printf("출력하고 싶은 단을 입력 : ");
    scanf("%s", num);
    file_open(num);
    FILE* file = fopen(filename, "w");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int dan = str_to_int(num);

    if (dan == -1)
    {
        printf("올바른 숫자를 입력하세요.\n");
        fclose(file);
        return 1;
    }

    for (int i = 1; i < 10; i++)
    {
        fprintf(file, "%d X %d = %d\n", dan, i, dan * i);
    }

    fclose(file);
    printf("파일이 성공적으로 생성되었습니다.\n");

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