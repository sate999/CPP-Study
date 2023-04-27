#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

int main()
{
	cout << "HAPPY LOTTERY" << endl;

	int i;
	int match = 0;
	int prize = 0;
	int lotto[3];
	int answer[3];

	srand((unsigned)time(0));

	for (i = 0; i < 3; i++)
		lotto[i] = 1 + rand() % 20;

	int sol = lotto[i];

	cout << "첫번째 숫자를 입력하시오 : ";
	cin >> answer[0];
	
	cout << "두번째 숫자를 입력하시오 : ";
	cin >> answer[1];

	cout << "세번째 숫자를 입력하시오 : ";
	cin >> answer[2];

	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (lotto[i] == answer[j]) {
				match++;
			}
		}
	}

	if (match == 3) {
		prize = 100000000;
		cout << "1등이십니다 1등 상금 원" << prize << "입니다 축하드립니다" << endl;
	}
	else if (match == 2) {
		prize = 50000000;
		cout << "2등이십니다 2등 상금 원" << prize << "입니다 축하드립니다" << endl;
	}
	else if (match == 1) {
		prize = 10000000;
		cout << "3등이십니다 3등 상금 원" << prize << "입니다 축하드립니다" << endl;
	}
	else
		cout << "이번 회차 번호 : " << lotto[0] << "\t" << lotto[1] << "\t" << lotto[2] << " 입니다. 맞추신 번호가 없습니다. 다음 기회에..." << endl;

	return 0;
}