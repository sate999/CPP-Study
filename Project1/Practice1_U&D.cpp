#include<iostream>		// ����� 
#include<ctime>			// time�Լ� �ҷ����� �������
#include<cstdlib>		// rand�Լ� �ҷ����� �������

using namespace std;

int main() {
	cout << "===< UP & DOWN GAME >===" << endl;

	// ���� �ʱ�ȭ
	srand((unsigned)time(0));	// rand()�� seed���� �ο�
	int sol(rand() % 100);		// 100������ ���� ���� ����

	int answer = 0;	// �Է� ���� ��
	int tries = 0;	// �õ� Ƚ��
	int hintUp = 0, hintDown = 100;
	while (answer != sol)	// ���� ������ Ʋ�� ��
	{
		cout << "1~100������ �� �Է� : ";
		cin >> answer;

		if (answer < sol)
		{
			cout << "UP!!!!" << endl;
			hintUp = answer + 1;
			cout << "(��Ʈ :" << hintUp << "~" << hintDown << ")\n";
		}
		else if (answer > sol)
		{
			cout << "DOWN~~~" << endl;
			hintDown = answer - 1;
			cout << "(��Ʈ :" << hintUp << "~" << hintDown << ")\n";
		}
		tries++;	// �õ� Ƚ�� ī��Ʈ
	}
	if (answer == sol)
	{
		cout << "���߼̽��ϴ�~" << endl;
		cout << tries << "�� ���� �����ϼ̽��ϴ�." << endl;

	}

	return 0;
}