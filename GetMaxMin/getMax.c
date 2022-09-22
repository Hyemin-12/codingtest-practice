#include<stdio.h>

int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int max = arr[0]; //초기화 시 정해진 상수갑이 아닌 배열의 첫번재 요소를 준다.
	int temp;
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++) {
		if (arr[i] >= max) {
			max = arr[i];
			temp = i;
		}
	}
	printf("최대값은 : %d 이고 최대값의 위치는 arr[%d]이다.. ", max,temp);

	return 0;
}