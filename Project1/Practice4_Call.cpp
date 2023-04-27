
/*1.C++������ Ŭ���� ����
* 
* C����� ����ü���� �̸��� �� �ٲ�� �̰����� ����ٰ� �����ϴ°� ����
* 
* ����: class Ŭ������{
*	��� ����(����), ��� �Լ�(�ൿ)
* };
* 
* 2.Ŭ���� ������ �Լ� ����
* 
* ���� : ��ȯŸ��(����Ÿ��)�� �Լ���(�Ű�����)
* => ex. void get(string name, string tel); / int getAge(int a, int b){return a;}
* void�� ���ϰ� x, ������ ��ȯŸ���� �� �ʿ���
* 
* 3.Ŭ������ ������
* 
* ���� : Ŭ������(){}
* => ex. class Student��� �Ѵٸ� �����ڴ� Student(){}
* �ϴ� ������ SetInfo�Լ��� ����
* ��ü ������ ȣ��Ǵ� �����ڿ��� ���ڸ� �Ѱ� �ʱ�ȭ
* �����ڵ� �Լ� �� �ϳ��̴� �Լ� �����ε� ����
* �����ڸ� �������� ������ C++�����Ϸ����� Ŭ���� �׿� ����Ʈ �����ڸ� ����
* 
* 4.�Լ� �����ε�
* 
* �Լ����� ������ ������ �ڷ����̳� ���� �ٸ� �Լ��� ������ ���
* C���� ���� C++�� �ִ� ����
* 
* ���� �����ϸ� 'void abc(int a, int b)'��� �Լ���
* 'void abc(double a, double b)'��� �Լ� �� �߿�
* ��ȣ�ȿ� �Ű������� ���� �Ը���ȣ ȣ�� �̸� ���Ƶ���
* 
* �����ε� ����>
* 1) �Լ����� ���ƾ���
* 2) �Ű������� ���� �ٸ��ų�, �Ű������� ���� ���� �ڷ����� Ʋ�����Ѵ�.
* 3) 1,2�� ���� �� ���� Ÿ���� ���̴� �����ε��� ����X
* 
*/

#include<iostream>
#include<string>	// std::string Ŭ���� �ҷ�����

using namespace std;

class Person {
	string name, tel, jumin;	// ��� ����
	int age;					// ��� ����

public:		// ���� ������(C++������ �⺻ ���� �����ڰ� private: �̱� ������ private�� ������ ����)
	Person();	//�⺻ ������
	string getName() { return name; }	// ��� �Լ�
	string getTel() { return tel; }	// ��� �Լ�
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
	PersonManager(int n); // ������
	void show(); // ��� ���� ��� ��� �Լ�
	void search(); // �̸����� ��ȭ��ȣ ã�� �Լ�
};

PersonManager::PersonManager(int n) {
	p = new Person[n]; // �����Ҵ����� ��ü�迭 ����
	// �̸��� ��ȭ��ȣ �Է¹ޱ�
	size = n;
	string name, tel;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ��� ����: ";
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
			cout << irum << "���� ��ȭ��ȣ = " << p[i].getTel() << endl;
		}
	}
}

int main() {
	cout << "����� ��� ��: ";
	int n;
	cin >> n;
	PersonManager pm(n); // ������: �̸�, ��ȭ��ȣ �Է�
	pm.show(); // ��� ������ ��� ���
	pm.search(); // �̸��� �Է¹޾� ��ȭ��ȣ ã��

	return 0;
}