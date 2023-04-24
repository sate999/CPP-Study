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
	PersonManager(int n);	// ������
	void show();			// ��� ���� ��� ��� �Լ�
	void search();			// �̸����� ��ȭ��ȣ ã�� �Լ�
};

PersonManager::PersonManager(int n) {
	p = new Person[n];	// �����Ҵ����� ��ü �迭 ����
	// �̸��� ��ȭ��ȣ �Է¹ޱ�
	size = n;
	string name, tel;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ��� ����";
		cin >> name >> tel;
		p[i].set(name, tel);
	}
}

void PersonManager::show() {
	cout << "\n��� ������ ��� ���" << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t";
		cout << endl;
	}
}

void PersonManager::search() {
	string irum;
	cout << "===< ��ȭ��ȣ �˻� ���� >===" << endl;
	cout << "�̸� �Է�: ";
	cin >> irum;
	for (int i = 0; i < size; i++) {
		if (irum == p[i].getName()) {
			cout << irum << "���� ��ȭ��ȣ : " << p[i].getTel() << endl;
		}
	}
}
int main() {

	cout << "����� ��� �� : ";
	int n;
	cin >> n;
	PersonManager pm(n); // ������ �̸�, ��ȭ��ȣ �Է�
	pm.show();
	pm.search();

	return 0;
}

//01073234422 <- 
//01066294422
//01028468123
//01073234422
