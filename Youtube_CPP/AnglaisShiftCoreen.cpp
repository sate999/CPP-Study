#include<iostream>

using namespace std;

int main() {
	string eng[5] = { "apple", "love", "school", "milk", "zoo" };
	string kor[5] = { "���", "���", "�б�", "����", "������" };
	// �迭 ũ�⸸ŭ �Է¹޾� �����ϱ�
	
	cout << "$$$ ���ѻ��� �˻� ���α׷� $$$" << endl;
	while (true) {
		cout << "�˻��� ���ܾ� �Է� : " << endl;
		string search;
		cin >> search;
		if (search == "exit") {
			cout << "���α׷� ����.\n";
			break;
		}
		int check = 0; // ���ܾ� �迭�� �ִ� ���, 1�� ����

		for (int i = 0; i < eng->length(); i++) {
			if (search == eng[i]) {
				check = 1;
				cout << eng[i] << "->" << kor[i] << "\n";
			}
		}
		if (check == 0) {
			cout << search <<"���� �ܾ��Դϴ�."<<endl;
		}
	}
}