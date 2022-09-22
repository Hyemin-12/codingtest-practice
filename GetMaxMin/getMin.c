#include<stdio.h>
int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = arr[0]; //초기화 값은 배열의 첫번재 요소를 한다. 
	int temp;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		if (arr[i] <= min) {
			min = arr[i];
			temp = i;
		}
	}
	printf("최소값은 %d이고 최소값의 위치는 arr[%d]입니다.", min, temp);

	return 0;
}