#include<stdio.h>
#include<string.h>

int main(void) {
	/*
	int number;
	int* pNumber = NULL; //�����ͺ����� ���� �� ���� ���������� NULL 
	number = 5;
	printf("number�� �ּҰ� : %p, �� : %d\n",&number, number);

	pNumber = &number;
	printf("*pNumber�� �� : %d\n", *pNumber);
	*pNumber = *pNumber + 5;
	printf("number�� �ּҰ� : %p, �� : %d\n",&number,number);
	printf("*pNumber�� �� : %d", *pNumber);
	*/
	char* pChar;
	int* plnt;
	double* pDouble;
	printf("%d\n", sizeof(pChar));
	printf("%d\n", sizeof(plnt));
	printf("%d\n", sizeof(pDouble));
	printf("\n");
	printf("%d\n", sizeof(*pChar));
	printf("%d\n", sizeof(*plnt));
	printf("%d\n", sizeof(*pDouble));

}