#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
	cout << "=====< Up & Down Game >=====" << endl;

	srand((unsigned)time(0));
	
	int sol = (rand() % 100) + 1;

	int answer = 0; // �Է¹��� ��
	int tries = 0; // �õ� Ƚ��
	int hintUp = 0, hintDown = 100;
	while (answer != sol) {
		cout << " 1~ 100 ������ �� �Է� : ";
		cin >> answer;

		if (answer < sol) {
			cout << "UP!" << endl;
			hintUp = answer + 1;
			cout << "(��Ʈ : " << hintUp << "~" << hintDown << ")\n";
		}
		else if(answer > sol){
			cout << "DOWN~" << endl;
			hintDown = answer - 1;
			cout << "(��Ʈ : " << hintUp << "~" << hintDown << ")\n";
		}
		tries++;
	}
	if (answer == sol) {
		cout << "Correct Answer." << endl;
		cout << tries << "������ �����ϼ̽��ϴ�." << endl;
	}
	return 0;
}