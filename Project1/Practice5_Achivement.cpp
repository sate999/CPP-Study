/*1. C����� malloc, free
* malloc : Heap �޸𸮿� ������ �Ҵ��� �� �ְ� �����ִ� �Լ�
* free : malloc �Լ� ȣ�� �� �Ҵ�Ǿ��� �޸� ���� ���� ��Ű�� �Լ�
* 
*=> malloc���� �����Ҵ� �ϰ�, free�� �����Ҵ�� �޸� ���� ��������
* �ٵ� �̰� C++������ new�� delete�� ����ϴ°���
* 
* 2. new ������
* ex. C��� => studentScore = (int *)malloc(sizeof(int)* studentNum);
*	  C++ = > studentScore = new int[studentNum];
* 
* new �����ڴ� ���� ��ü�� ���� �Ҵ� �ϰ� ������ 'new �ڷ���'
* ��ü�� �迭�� ���� �Ҵ��� �ϰ� ���� �� 'new �ڷ���[����]'
* 
* ex. int* ptr1 = new int(3);
*  => �Ұ�ȣ �ȿ� ���ڴ� new �����ڷ� �޸� ������ �Ҵ��ϰ� �� ���� 3���� �ʱ�ȭ �Ѵٴ� ��
* 
* 3. delete ������
* 'delete ������'���·� ���Ǹ� �����ʹ� �Ҵ��� ������ ��ü�� ����Ű�� ������ �ǹ�
* ��ü �迭�� ����Ű�� �ִ°�� 'delete []������' ����
*/
//C��� ����
/*#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int studentNum, totalScore=0;
    int* studentScore;
    int i;
    
    printf("�л� ���� �Է��ϼ���: "); 
    scanf("%d", &studentNum);
    studentScore = (int *)malloc(sizeof(int) * studentNum);
    
    for(i=0; i<studentNum; i++) {
     printf("%d�� �л��� ����: ", i + 1);
     scanf("%d", &studentScore[i]);
     totalScore += studentScore[i];
    }
    
    printf("��� �л��� ���: %d\n", totalScore / studentNum);
    free(studentScore);
    return 0;
}
*/
// ���� C��� �ڵ�� malloc(), �׸��� free()�� ��µ� C++�� �ٲٸ�
#include<iostream>

using namespace std;
int main()
{
    int studentNum;
    int totalScore = 0;
    int* studentScore;  // ������ ������ �ٸ� �ڷ������� �ϸ� �ٲ� char�� ������ ������ ��������� char�� �迭�� �Ǵ°���
    int i;

    cout << "�л� ���� �Է��ϼ��� : ";
    cin >> studentNum;
    studentScore = new int[studentNum];

    for (i = 0; i < studentNum; i++)
    {
        cout << i + 1 << "�� �л��� ���� : ";
        cin >> studentScore[i];
        totalScore += studentScore[i];
    }

    cout << "��� �л��� ��� : " << totalScore / studentNum << endl;
    delete[]studentScore;
    
    return 0;

}
/* �����Ҵ�� �����Ҵ�
* ���� �Ҵ��� �츮�� ���������� ������ �������� ������Ÿ�ӿ��� ũ�Ⱑ ������
* ���� �Ҵ��� ��Ÿ�� �߿� �޸𸮸� �Ҵ� �޴°�
* 
* RAM�� ������ �޸𸮿�
* static, heap, stack �޸𸮰� ����
* 
* �����Ҵ��� �ϴ� ������ �Ͻ������� ���� �޸𸮸� ��ƾ��� �� ���
* �̰� �̹� �߰���綧�� ������ ������������ �˸�Ǵ� ����
* 
* �׸��� �� new�� delete�� ���� ������ ���缭 ����ؾ���
* �Ϻθ� �����Ǵ� ���� �߻� 
*/