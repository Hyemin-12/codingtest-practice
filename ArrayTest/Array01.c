#include <stdio.h>

int main(void) {
	int arr[10];
	printf_s("arr�迭�� ũ��: %d bytes \n", sizeof(arr));  //4byte * 10 = 40
	printf_s("arr�迭 ����� ũ��: %d bytes \n", sizeof(arr[0])); //4
	printf_s("arr�迭�� ����: %d \n", sizeof(arr) / sizeof(arr[0])); //40 / 4 =10

	//�ʱ�ȭ�� ���� ������ �����Ⱚ�� ����.
	for (int i = 0; i < 10; i++) {
		printf("%d \n", arr[i]);
	}

	return 0;
}