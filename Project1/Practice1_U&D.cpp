#include<iostream>		// 입출력 
#include<ctime>			// time함수 불러오는 헤더파일
#include<cstdlib>		// rand함수 불러오는 헤더파일

using namespace std;

int main() {
	cout << "===< UP & DOWN GAME >===" << endl;

	// 난수 초기화
	srand((unsigned)time(0));	// rand()에 seed값을 부여
	int sol(rand() % 100);		// 100안쪽의 숫자 랜덤 생성

	int answer = 0;	// 입력 받은 수
	int tries = 0;	// 시도 횟수
	int hintUp = 0, hintDown = 100;
	while (answer != sol)	// 대답과 정답이 틀릴 때
	{
		cout << "1~100사이의 수 입력 : ";
		cin >> answer;

		if (answer < sol)
		{
			cout << "UP!!!!" << endl;
			hintUp = answer + 1;
			cout << "(힌트 :" << hintUp << "~" << hintDown << ")\n";
		}
		else if (answer > sol)
		{
			cout << "DOWN~~~" << endl;
			hintDown = answer - 1;
			cout << "(힌트 :" << hintUp << "~" << hintDown << ")\n";
		}
		tries++;	// 시도 횟수 카운트
	}
	if (answer == sol)
	{
		cout << "맞추셨습니다~" << endl;
		cout << tries << "번 만에 성공하셨습니다." << endl;

	}

	return 0;
}