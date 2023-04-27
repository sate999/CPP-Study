
/*1.C++에서의 클래스 구조
* 
* C언어의 구조체에서 이름이 좀 바뀌고 이것저거 생겼다고 생각하는게 편함
* 
* 형태: class 클래스명{
*	멤버 변수(상태), 멤버 함수(행동)
* };
* 
* 2.클래스 내부의 함수 구조
* 
* 형태 : 반환타입(리턴타입)명 함수명(매개변수)
* => ex. void get(string name, string tel); / int getAge(int a, int b){return a;}
* void는 리턴값 x, 나머지 반환타입은 꼭 필요함
* 
* 3.클래스의 생성자
* 
* 형태 : 클래스명(){}
* => ex. class Student라고 한다면 생성자는 Student(){}
* 하는 역할은 SetInfo함수와 동일
* 객체 생성시 호출되는 생성자에게 인자를 넘겨 초기화
* 생성자도 함수 중 하나이니 함수 오버로딩 가능
* 생성자를 구현하지 않으면 C++컴파일러에서 클래스 네에 디폴트 생성자를 삽입
* 
* 4.함수 오버로딩
* 
* 함수명은 같으나 인자의 자료형이나 수가 다른 함수의 선언을 허용
* C에는 없고 C++에 있는 개념
* 
* 쉽게 생각하면 'void abc(int a, int b)'라는 함수랑
* 'void abc(double a, double b)'라는 함수 둘 중에
* 괄호안에 매개변수에 따라 입맛대호 호출 이름 같아도됨
* 
* 오버로딩 정리>
* 1) 함수명은 같아야함
* 2) 매개변수의 수가 다르거나, 매개변수의 수가 같고 자료형이 틀려야한다.
* 3) 1,2번 만족 시 리턴 타입의 차이는 오버로딩에 영향X
* 
*/

#include<iostream>
#include<string>	// std::string 클래스 불러오기

using namespace std;

class Person {
	string name, tel, jumin;	// 멤버 변수
	int age;					// 멤버 변수

public:		// 접근 지정자(C++에서는 기본 접근 지정자가 private: 이기 때문에 private는 생략이 가능)
	Person();	//기본 생성자
	string getName() { return name; }	// 멤버 함수
	string getTel() { return tel; }	// 멤버 함수
	int getage() { return age; }
	void set(string naem, string tel);
};
Person::Person() {
	this->name = ""; this->tel = "";
	this->jumin = ""; this->age = 0;
}

void Person::set(string name, string tel) {
	this->name = name; this->tel = tel;
}

class PersonManager {
	Person* p; int size;
public:
	PersonManager(int n); // 생성자
	void show(); // 모든 직원 명단 출력 함수
	void search(); // 이름으로 전화번호 찾는 함수
};

PersonManager::PersonManager(int n) {
	p = new Person[n]; // 동적할당으로 객체배열 생성
	// 이름과 전화번호 입력받기
	size = n;
	string name, tel;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 사원 정보: ";
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
	cout << "===< 전화번호 검색 새작 >===" << endl;
	cout << "이름 입력: ";
	cin >> irum;
	for (int i = 0; i < size; i++) {
		if (irum == p[i].getName()) {
			cout << irum << "님의 전화번호 = " << p[i].getTel() << endl;
		}
	}
}

int main() {
	cout << "등록할 사원 수: ";
	int n;
	cin >> n;
	PersonManager pm(n); // 생성자: 이름, 전화번호 입력
	pm.show(); // 모든 직원의 명단 출력
	pm.search(); // 이름을 입력받아 전화번호 찾기

	return 0;
}