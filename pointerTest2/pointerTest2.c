#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pArr;//int Ÿ���� arr�迭�� �Ҵ�޴� �����͹迭 
	int i;
	pArr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("%p : %d\n", &arr[i], arr[i]);
	} //�ּҰ�, �ּҰ� ����Ű�� ���� 
	printf("\n");

	printf("arr�� ����Ű�� *pArr�� �ּҰ��� �ּ�\n");
	for (i = 0; i < 10; i++) {
		printf("%p : %d\n", pArr + i, *(pArr + i)); //pArr + i�� pArr�� + i��ŭ �� �ϴ� �� 
	}
	int* num = (int*)malloc(sizeof(int) * 10);
	char* num2 = (char*)malloc(sizeof(char) * 20);
	double* num3 = (double*)malloc(sizeof(double) * 30);
}