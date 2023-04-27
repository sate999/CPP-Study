#include<stdio.h>

int main(void) {

	int i; // 돈은 0원에서 시작

	for (i = 1; i <= 360; i++) {		// 30년은 360개월
		cash += 100;	// 100원씩 들어가는거
	}

	printf("30년 후 계좌에 들어있는 돈은 %d원입니다.", cash);
	int cash = 0;

	return 0;
}