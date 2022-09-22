#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pArr;//int 타입의 arr배열을 할당받는 포인터배열 
	int i;
	pArr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("%p : %d\n", &arr[i], arr[i]);
	} //주소값, 주소가 가르키는 내용 
	printf("\n");

	printf("arr을 가르키는 *pArr의 주소값과 주소\n");
	for (i = 0; i < 10; i++) {
		printf("%p : %d\n", pArr + i, *(pArr + i)); //pArr + i는 pArr에 + i만큼 더 하는 것 
	}
	int* num = (int*)malloc(sizeof(int) * 10);
	char* num2 = (char*)malloc(sizeof(char) * 20);
	double* num3 = (double*)malloc(sizeof(double) * 30);
}