#include <stdio.h>
int arr1[10]; //�������� => �Լ����� �����ϴ� ���� => �ʱ�ȭ ���ص���.

int main(void) {
	//int num = 10;
	//int arr[num];

	int arr2[10] = {1,2,3,4,5,6,7,8,9,10};  // main ������ �����ϴ� �������� => �ʱ�ȭ

	for (int i = 0; i < 10; i++) {
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("arr1[%d] = %d\n", i, arr1[i]);  //���������� �ʱ�ȭ ���� x �����Ⱚ�� �ȵ�.
	}

	return 0;
}