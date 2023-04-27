#include<iostream>

using namespace std;

int main() 
{
	cout << "평균을 구할 숫자의 개수는? ";
	int n;
	cin >> n;

	if (n <= 0)
	{
		cout << "잘못된 입력이므로 종료합니다." << endl;
		return 0;
	}
	// 동적 배열 생성
	int* avg = new int[n];

	// 동적 할당 성공여부 판단하기
	if (!avg) {
		cout << "메모리 부족" << endl;
		return 0;
	}
	
	// 배열 개수만큼 정수 입력받아 저장
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "번째 수 입력 : ";
		cin >> avg[i];
	}
	int sum = 0;
	
	// 총합계 구하기
	for (int i = 0; i < n; i++)
	{
		sum += avg[i];
	}

	cout << n << "개 숫자의 평균 = " << sum / n << endl;
	delete[] avg;

}