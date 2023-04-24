#include<iostream>
#include<string>

using namespace std;

class Person {
	string name, tel, jumin;
	int age;

public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	int getage() { return age; }
	void set(string name, string tel);
};

Person::Person() {
	this->name = ""; this->tel = "";
	this->jumin = ""; this->tel = "";
}

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

class PersonManager {
	Person* p;
	int size;
public:
	PersonManager(int n);	// 생성자
	void show();			// 모든 직원 명단 출력 함수
	void search();			// 이름으로 전화번호 찾는 함수
};

PersonManager::PersonManager(int n) {
	p = new Person[n];	// 동적할당으로 객체 배열 생성
	// 이름과 전화번호 입력받기
	size = n;
	string name, tel;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 사원 정보";
		cin >> name >> tel;
		p[i].set(name, tel);
	}
}

void PersonManager::show() {
	cout << "\n모든 직원의 명단 출력" << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t";
		cout << endl;
	}
}

void PersonManager::search() {
	string irum;
	cout << "===< 전화번호 검색 시작 >===" << endl;
	cout << "이름 입력: ";
	cin >> irum;
	for (int i = 0; i < size; i++) {
		if (irum == p[i].getName()) {
			cout << irum << "님의 전화번호 : " << p[i].getTel() << endl;
		}
	}
}
int main() {

	cout << "등록할 사원 수 : ";
	int n;
	cin >> n;
	PersonManager pm(n); // 생성자 이름, 전화번호 입력
	pm.show();
	pm.search();

	return 0;
}

//01073234422 <- 
//01066294422
//01028468123
//01073234422
