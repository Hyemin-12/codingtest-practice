#include<stdio.h>

int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int max = arr[0]; //�ʱ�ȭ �� ������ ������� �ƴ� �迭�� ù���� ��Ҹ� �ش�.
	int temp;
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++) {
		if (arr[i] >= max) {
			max = arr[i];
			temp = i;
		}
	}
	printf("�ִ밪�� : %d �̰� �ִ밪�� ��ġ�� arr[%d]�̴�.. ", max,temp);

	return 0;
}