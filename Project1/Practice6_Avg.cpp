#include<iostream>

using namespace std;

int main() 
{
	cout << "����� ���� ������ ������? ";
	int n;
	cin >> n;

	if (n <= 0)
	{
		cout << "�߸��� �Է��̹Ƿ� �����մϴ�." << endl;
		return 0;
	}
	// ���� �迭 ����
	int* avg = new int[n];

	// ���� �Ҵ� �������� �Ǵ��ϱ�
	if (!avg) {
		cout << "�޸� ����" << endl;
		return 0;
	}
	
	// �迭 ������ŭ ���� �Է¹޾� ����
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "��° �� �Է� : ";
		cin >> avg[i];
	}
	int sum = 0;
	
	// ���հ� ���ϱ�
	for (int i = 0; i < n; i++)
	{
		sum += avg[i];
	}

	cout << n << "�� ������ ��� = " << sum / n << endl;
	delete[] avg;

}