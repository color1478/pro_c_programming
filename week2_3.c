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
	printf("넓이 / 둘레를 구할 원의 반지름을 입력하시오 : ");
	scanf("%d", &r);
	s = S(&r);
	l = L(&r);
	printf("원의 넓이는 %f\n", s);
	printf("원의 둘레는 %f", l);

}