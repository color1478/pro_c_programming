#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


void reservation_hotel(int re_num, char* room);
void vip_check();
void normal_check();

int vip_num = 0;
int normal_num = 0;

void main() //사용자에게 예약 요청을 받고, 그 결과를 출력
{
	int re_num;
	char room[10];
	for (int i = 0; i < 5; i++)
	{
		printf("\n[%d번]\n", i + 1);
		printf("예약 인원 : ");
		scanf("%d", &re_num);
		printf("객실 타입(vip, normal) : ");
		scanf("%s", room);
		reservation_hotel(re_num, &room);
	}
}

void reservation_hotel(int re_num, char* room) //예약 요청 결과를 바탕으로 예약 가능 여부와 예약 가능 시 룸 번호를 반환
{
	if (strcmp(room, "vip") == 0) {
		if (0 < re_num && re_num <= 4) {
			vip_check();
			return;
		}
		printf("예약인원과 객실 타입이 맞지 않음\n");
		return;
	}

	if (strcmp(room, "normal") == 0) {
		if (0 < re_num && re_num <= 2) {
			normal_check();
			return;
		}
		printf("예약인원과 객실 타입이 맞지 않음\n");
		return;
	}

	printf("잘못 입력함.\n");
	return;
}

void vip_check() //VIP룸 예약 관련 처리 담당
{
	char* vip_room[3] = { "301", "302", "303" };

	if (vip_num >= 3) {
		printf("방이 꽉참\n");
		return;
	}
	printf("%s호", vip_room[vip_num]);
	vip_num++;

	return;
}

void normal_check() //일반룸 예약 관련 처리 담당
{
	char* normal_room[5] = { "201", "202", "203", "204", "205" };

	if (normal_num >= 5) {
		printf("방이 꽉참\n");
		return;
	}

	printf("%s호", normal_room[normal_num]);
	normal_num++;

	return;
}