#include<stdio.h>
int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = arr[0]; //�ʱ�ȭ ���� �迭�� ù���� ��Ҹ� �Ѵ�. 
	int temp;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		if (arr[i] <= min) {
			min = arr[i];
			temp = i;
		}
	}
	printf("�ּҰ��� %d�̰� �ּҰ��� ��ġ�� arr[%d]�Դϴ�.", min, temp);

	return 0;
}