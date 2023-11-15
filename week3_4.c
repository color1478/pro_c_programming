#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


void reservation_hotel(int re_num, char* room);
void vip_check();
void normal_check();

int vip_num = 0;
int normal_num = 0;

void main() //����ڿ��� ���� ��û�� �ް�, �� ����� ���
{
	int re_num;
	char room[10];
	for (int i = 0; i < 5; i++)
	{
		printf("\n[%d��]\n", i + 1);
		printf("���� �ο� : ");
		scanf("%d", &re_num);
		printf("���� Ÿ��(vip, normal) : ");
		scanf("%s", room);
		reservation_hotel(re_num, &room);
	}
}

void reservation_hotel(int re_num, char* room) //���� ��û ����� �������� ���� ���� ���ο� ���� ���� �� �� ��ȣ�� ��ȯ
{
	if (strcmp(room, "vip") == 0) {
		if (0 < re_num && re_num <= 4) {
			vip_check();
			return;
		}
		printf("�����ο��� ���� Ÿ���� ���� ����\n");
		return;
	}

	if (strcmp(room, "normal") == 0) {
		if (0 < re_num && re_num <= 2) {
			normal_check();
			return;
		}
		printf("�����ο��� ���� Ÿ���� ���� ����\n");
		return;
	}

	printf("�߸� �Է���.\n");
	return;
}

void vip_check() //VIP�� ���� ���� ó�� ���
{
	char* vip_room[3] = { "301", "302", "303" };

	if (vip_num >= 3) {
		printf("���� ����\n");
		return;
	}
	printf("%sȣ", vip_room[vip_num]);
	vip_num++;

	return;
}

void normal_check() //�Ϲݷ� ���� ���� ó�� ���
{
	char* normal_room[5] = { "201", "202", "203", "204", "205" };

	if (normal_num >= 5) {
		printf("���� ����\n");
		return;
	}

	printf("%sȣ", normal_room[normal_num]);
	normal_num++;

	return;
}