/*1. C언어의 malloc, free
* malloc : Heap 메모리에 공간을 할당할 수 있게 도와주는 함수
* free : malloc 함수 호출 시 할당되었던 메모리 공간 해제 시키는 함수
* 
*=> malloc으로 동적할당 하고, free로 동적할당된 메모리 해제 시켜줬음
* 근데 이걸 C++에서는 new와 delete가 대신하는거임
* 
* 2. new 연산자
* ex. C언어 => studentScore = (int *)malloc(sizeof(int)* studentNum);
*	  C++ = > studentScore = new int[studentNum];
* 
* new 연산자는 단일 객체를 동적 할당 하고 싶을때 'new 자료형'
* 객체의 배열에 동적 할당을 하고 싶을 때 'new 자료형[길이]'
* 
* ex. int* ptr1 = new int(3);
*  => 소괄호 안에 숫자는 new 연산자로 메모리 공간에 할당하고 그 값을 3으로 초기화 한다는 뜻
* 
* 3. delete 연산자
* 'delete 포인터'형태로 사용되며 포인터는 할당을 해제할 객체를 가리키는 포인터 의미
* 객체 배열을 가리키고 있는경우 'delete []포인터' 형태
*/
//C언어 예시
/*#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int studentNum, totalScore=0;
    int* studentScore;
    int i;
    
    printf("학생 수를 입력하세요: "); 
    scanf("%d", &studentNum);
    studentScore = (int *)malloc(sizeof(int) * studentNum);
    
    for(i=0; i<studentNum; i++) {
     printf("%d번 학생의 점수: ", i + 1);
     scanf("%d", &studentScore[i]);
     totalScore += studentScore[i];
    }
    
    printf("모든 학생의 평균: %d\n", totalScore / studentNum);
    free(studentScore);
    return 0;
}
*/
// 위에 C언어 코드는 malloc(), 그리고 free()를 썼는데 C++로 바꾸면
#include<iostream>

using namespace std;
int main()
{
    int studentNum;
    int totalScore = 0;
    int* studentScore;  // 포인터 변수를 다른 자료형으로 하면 바뀜 char형 포인터 변수를 만들었으면 char형 배열이 되는거임
    int i;

    cout << "학생 수를 입력하세요 : ";
    cin >> studentNum;
    studentScore = new int[studentNum];

    for (i = 0; i < studentNum; i++)
    {
        cout << i + 1 << "번 학생의 점수 : ";
        cin >> studentScore[i];
        totalScore += studentScore[i];
    }

    cout << "모든 학생의 평균 : " << totalScore / studentNum << endl;
    delete[]studentScore;
    
    return 0;

}
/* 정적할당과 동적할당
* 정적 할당은 우리가 지역변수를 선언한 시점부터 컴파일타임에서 크기가 결정됨
* 동적 할당은 런타임 중에 메모리를 할당 받는것
* 
* RAM의 영역별 메모리에
* static, heap, stack 메모리가 있음
* 
* 동적할당을 하는 이유는 일시적으로 많은 메모리를 잡아야할 때 사용
* 이건 이번 중간고사때는 솔직히 이정도까지만 알면되는 개념
* 
* 그리고 꼭 new와 delete는 같이 쌍으로 맞춰서 사용해야함
* 일부만 해제되는 문제 발생 
*/