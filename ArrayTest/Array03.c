#include <stdio.h>

int main(void) {
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}

	int arr2[3][4] = { 0 };  //12���� �Ѳ����� �ʱ�ȭ��.

	printf("arr2�� ũ��: %d\n", sizeof(arr2)); // 12 * 4(byte) = 48
	printf("arr2[0]�� ũ��: %d\n", sizeof(arr2[0])); //4(��)*4(byte) = 16
	printf("arr2[1]�� ũ��: %d\n", sizeof(arr2[1])); //4(��)*4(byte) = 16
	printf("arr2[2]�� ũ��: %d\n", sizeof(arr2[2])); //4(��)*4(byte) = 16
	printf("arr2[2][3]�� ũ��: %d\n", sizeof(arr2[2][3])); //4byte
	printf("arr2�ϳ��� ũ��: %d\n", sizeof(arr2) / sizeof(arr2[0][0])); //�迭�� ���� 48(byte)/4(byte)
	return 0;
}