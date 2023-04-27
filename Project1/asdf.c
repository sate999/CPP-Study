#include<stdio.h>

int main(void) {

	int i;

	for (i = 1; i <= 100; i++) {	// i+=2 입력할 필요 없음
		if (i % 2 == 0) {		// 나머지가 1이나오는 숫자 => 홀수
			continue;
		}
		printf("%d\t", i);	// 그냥 이렇게만 해도 되는 이유는 위에 이미 홀수는 제외시켰기 때문에 \t쓰는이유는 가독성이유
	}

	return 0;
}