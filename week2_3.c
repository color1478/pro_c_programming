#include <stdio.h>
#pragma warning (disable:4996)
#define PI 3.14

float S(int *r)
{
	float s = PI * (*r) * (*r);
	return s;
}

float L(int *r)
{
	float l = PI * 2 * (*r);
	return l;
}

void main()
{
	int r;
	float s, l;
	printf("���� / �ѷ��� ���� ���� �������� �Է��Ͻÿ� : ");
	scanf("%d", &r);
	s = S(&r);
	l = L(&r);
	printf("���� ���̴� %f\n", s);
	printf("���� �ѷ��� %f", l);

}