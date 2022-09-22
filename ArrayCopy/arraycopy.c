#include<stdio.h>
int main(void) {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 0 };
	//a[10]을 b[10]에 복사하기

	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
		printf("%d ", b[i]);
	}
	

	return 0; 
}