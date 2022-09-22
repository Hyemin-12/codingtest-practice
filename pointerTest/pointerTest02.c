#include<stdio.h>
#include<string.h>

int main(void) {
	/*
	int number;
	int* pNumber = NULL; //포인터변수를 선언 시 값이 없을때에는 NULL 
	number = 5;
	printf("number의 주소값 : %p, 값 : %d\n",&number, number);

	pNumber = &number;
	printf("*pNumber의 값 : %d\n", *pNumber);
	*pNumber = *pNumber + 5;
	printf("number의 주소값 : %p, 값 : %d\n",&number,number);
	printf("*pNumber의 값 : %d", *pNumber);
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