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

	cout << "ù��° ���ڸ� �Է��Ͻÿ� : ";
	cin >> answer[0];
	
	cout << "�ι�° ���ڸ� �Է��Ͻÿ� : ";
	cin >> answer[1];

	cout << "����° ���ڸ� �Է��Ͻÿ� : ";
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
		cout << "1���̽ʴϴ� 1�� ��� ��" << prize << "�Դϴ� ���ϵ帳�ϴ�" << endl;
	}
	else if (match == 2) {
		prize = 50000000;
		cout << "2���̽ʴϴ� 2�� ��� ��" << prize << "�Դϴ� ���ϵ帳�ϴ�" << endl;
	}
	else if (match == 1) {
		prize = 10000000;
		cout << "3���̽ʴϴ� 3�� ��� ��" << prize << "�Դϴ� ���ϵ帳�ϴ�" << endl;
	}
	else
		cout << "�̹� ȸ�� ��ȣ : " << lotto[0] << "\t" << lotto[1] << "\t" << lotto[2] << " �Դϴ�. ���߽� ��ȣ�� �����ϴ�. ���� ��ȸ��..." << endl;

	return 0;
}