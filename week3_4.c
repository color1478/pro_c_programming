#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


void reservation_hotel(int re_num, char* room);
void vip_check(num);
void normal_check(num);

void main() //����ڿ��� ���� ��û�� �ް�, �� ����� ���
{
	int re_num;
	char room[10];
	for (int i = 0; i < 5; i++)
	{
		printf("\n[%d��]\n", i+1);
		printf("���� �ο� : ");
		scanf("%d", &re_num);
		printf("���� Ÿ��(vip, normal) : ");
		scanf("%s", room);
		reservation_hotel(re_num, &room);
	}
}

void reservation_hotel(int re_num, char *room) //���� ��û ����� �������� ���� ���� ���ο� ���� ���� �� �� ��ȣ�� ��ȯ
{
	int vip_num=0, normal_num=0;

	if (strcmp(room, "vip") == 0)
	{
		if (0 < re_num && re_num <= 4)
		{
			vip_num++;
			vip_check(vip_num);
		}
		else
		{
			printf("�����ο��� ���� Ÿ���� ���� ����\n");
		}
	}
	else if (strcmp(room, "normal") == 0)
	{
		if (0 < re_num && re_num <= 2)
		{
			normal_num++;
			normal_check(normal_num);
		}
		else
		{
			printf("�����ο��� ���� Ÿ���� ���� ����\n");
		}
	}
	else
	{
		printf("�߸� �Է���.\n");
	}
	
	//printf("%d\n", re_num);
	//puts(room);

}

void vip_check(num) //VIP�� ���� ���� ó�� ���
{
	char* vip_room[3] = { "301", "302", "303"};

	if (num < 4)
	{
		printf("%sȣ", vip_room[num]);
	}
	else
	{
		printf("���� ����\n");
	}
	
}

void normal_check(num) //�Ϲݷ� ���� ���� ó�� ���
{
	char *normal_room[5] = {"201", "202", "203", "204", "205"};

	if (num < 6)
	{
		printf("%sȣ", normal_room[num]);
	}
	else
	{
		printf("���� ����\n");
	}
	
}