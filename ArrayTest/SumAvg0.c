/*1. �迭(���� 10)�� ������ ����(rand()�Լ� ���)�� �����ϰ�
* �� �հ� ����� ���ϴ� �ڵ带 �ۼ��غ���. (sumAvg.c)
* 2. �� �� ������ ������ 1~100�� ������ �����Ѵ�.
* 3. ����/ �հ�/ ����� ���ϴ� ������ �и��Ͽ� �ڵ��ϴ� ������ �⸣��.
* 4. 1~100:  rand()%100 + 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
	int arr[10] = { 0 };  //�ʱ�ȭ ����!
	int sum = 0;
	double avg = 0;
	srand(time(NULL));  //���� ���� 
	//����
	for (int i = 0; i < 10; i++) {
		arr[i] = (rand() % 100) + 1;  //1~100����
		printf("%d\n", arr[i]);
	}

	//�հ�
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}

	//���
	int len = sizeof(arr) / sizeof(arr[0]);  //�迭�� ����
	avg = (double)sum / len; //����ȯ.

	//���
	printf("\n");
	printf("�հ�: %d\n", sum);
	printf("���: %.1lf\n", avg);
}