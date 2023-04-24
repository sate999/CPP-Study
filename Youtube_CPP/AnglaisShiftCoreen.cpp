#include<iostream>

using namespace std;

int main() {
	string eng[5] = { "apple", "love", "school", "milk", "zoo" };
	string kor[5] = { "사과", "사랑", "학교", "우유", "동물원" };
	// 배열 크기만큼 입력받아 저장하기
	
	cout << "$$$ 영한사전 검색 프로그램 $$$" << endl;
	while (true) {
		cout << "검색할 영단어 입력 : " << endl;
		string search;
		cin >> search;
		if (search == "exit") {
			cout << "프로그램 종료.\n";
			break;
		}
		int check = 0; // 영단어 배열에 있는 경우, 1로 변경

		for (int i = 0; i < eng->length(); i++) {
			if (search == eng[i]) {
				check = 1;
				cout << eng[i] << "->" << kor[i] << "\n";
			}
		}
		if (check == 0) {
			cout << search <<"없는 단어입니다."<<endl;
		}
	}
}