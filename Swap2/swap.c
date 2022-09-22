#include<stdio.h>

void swap(int* pa, int* pb) {
	int a = *pa; //전달받은 주소 a의 값을 복사
	int b = *pb; //전달받은 주소 b의 값을 복사 
	*pa = b;
	*pb = a;
}

int main(void) {
	int a = 5, b = 8;

	swap(&a, &b);
	printf("함수 호출 후 \n");
	printf("a: %d b: %d\n", a, b);

	return 0;
}