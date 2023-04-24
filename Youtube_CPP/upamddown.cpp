#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
	cout << "=====< Up & Down Game >=====" << endl;

	srand((unsigned)time(0));
	
	int sol = (rand() % 100) + 1;

	int answer = 0; // 입력받은 수
	int tries = 0; // 시도 횟수
	int hintUp = 0, hintDown = 100;
	while (answer != sol) {
		cout << " 1~ 100 사이의 수 입력 : ";
		cin >> answer;

		if (answer < sol) {
			cout << "UP!" << endl;
			hintUp = answer + 1;
			cout << "(힌트 : " << hintUp << "~" << hintDown << ")\n";
		}
		else if(answer > sol){
			cout << "DOWN~" << endl;
			hintDown = answer - 1;
			cout << "(힌트 : " << hintUp << "~" << hintDown << ")\n";
		}
		tries++;
	}
	if (answer == sol) {
		cout << "Correct Answer." << endl;
		cout << tries << "번만에 성공하셨습니다." << endl;
	}
	return 0;
}