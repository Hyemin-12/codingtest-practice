#include<stdio.h>

int main(void) {
	int number = 100;
	printf("number 주소 : %p 값 : %d\n", &number, number);
	// %p -> 포인터 주소값 연산자 

	int n = 5;
	int* ptr = &n; //n이 가르키는 주소값에 들어있는 값을 ptr이 받는 것(5)
	*ptr = 10; //ptr주소가 가르키는 곳의 값을 10으로 바꾸겠다.
	printf("n의 값 : %d\n", n);

	int m = 6;
	int *ptr2 = &m; //m의 주소값이 가지는 값을 포인터변수 ptr2로 받는 것 
	*ptr2 = 34; //m의 주소를 가르키는 ptr2의 값을 34로 변경한다. 
	printf("m의 값 : %d", m);

	return 0;
}